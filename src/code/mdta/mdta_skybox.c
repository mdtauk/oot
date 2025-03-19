/*
    MDTA Code

    mdta_skybox.c
*/
#include "global.h"
#include "terminal.h"
#include "z64environment.h"
#include "z64save.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h"
#include "z64skybox.h"
#include "mdta_skybox.h"




Mtx* sMdtaSkyboxDrawMatrix;




Mtx* Mdta_Skybox_UpdateMatrix(SkyboxContext* skyboxCtx, f32 x, f32 y, f32 z) {
    Matrix_Translate(x, y, z, MTXMODE_NEW);
    Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
    Matrix_RotateX(skyboxCtx->rot.x, MTXMODE_APPLY);
    Matrix_RotateY(skyboxCtx->rot.y, MTXMODE_APPLY);
    Matrix_RotateZ(skyboxCtx->rot.z, MTXMODE_APPLY);
    return MATRIX_TO_MTX(sMdtaSkyboxDrawMatrix, "../z_vr_box_draw.c", 42);
}




void Mdta_Skybox_Setup(GameState* state, SkyboxWeather skyboxWeatherConfig, SkyboxMode skyboxModeCurrent, SkyboxMode skyboxModeNext, u8 blend){
    // Setup the skybox
    PRINTF("MDTA Skybox Setup\n Weather: %d\n Current Mode: %d\n Next Mode: %d\n Blend: %d\n", skyboxWeatherConfig, skyboxModeCurrent, skyboxModeNext, blend);

    // Allocate 
    

    // Calculate the 6 sides of the skybox/dome
    MDTA_Skybox_CalculateDisplayLists(6);
}


void MDTA_Skybox_CalculateDisplayLists(s16 nFaces){
    // Calculate the display lists for the skybox
    PRINTF("MDTA Skybox Calculated\n");
}



void Mdta_Skybox_Init(GameState* state, SkyboxContext* skyboxCtx, s16 skyboxId){
    // Initialise the skybox
    PRINTF("MDTA Skybox Initialised\n");

    //initializeColorSetsFromArrays(predefinedSets);
}




void Mdta_Skybox_Draw(SkyboxContext* skyboxCtx, GraphicsContext* gfxCtx, s16 blend, f32 x, f32 y, f32 z){
    // Draw the skybox for this frame
    PRINTF("MDTA Skybox Drawn\n");

    OPEN_DISPS(gfxCtx, "../mdta/mdta_skybox.c", 45);

        Gfx_SetupDL_40Opa(gfxCtx);

        //gDPSetPrimColor(POLY_OPA_DISP++, 200, 200, 0, 0, 0, blend);

        // Prepare matrix
        sMdtaSkyboxDrawMatrix = GRAPH_ALLOC(gfxCtx, sizeof(Mtx));
        Matrix_Translate(x, y, z, MTXMODE_NEW);
        Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
        Matrix_RotateX(skyboxCtx->rot.x, MTXMODE_APPLY);
        Matrix_RotateY(skyboxCtx->rot.y, MTXMODE_APPLY);
        Matrix_RotateZ(skyboxCtx->rot.z, MTXMODE_APPLY);
        MATRIX_TO_MTX(sMdtaSkyboxDrawMatrix, "../mdta/mdta_skybox.c", 68);
        gSPMatrix(POLY_OPA_DISP++, sMdtaSkyboxDrawMatrix, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

        // Enable magic square RGB dithering and bilinear filtering
        gDPSetColorDither(POLY_OPA_DISP++, G_CD_MAGICSQ);
        gDPSetTextureFilter(POLY_OPA_DISP++, G_TF_BILERP);

        // Enable texture filtering RDP pipeline stages for bilinear filtering
        gDPSetTextureConvert(POLY_OPA_DISP++, G_TC_FILT);

        // Draw the skybox
        //
        //
        //gSPDisplayList(POLY_OPA_DISP++, Skybox_Dome_North_DL);

        gDPPipeSync(POLY_OPA_DISP++);

        CLOSE_DISPS(gfxCtx, "../mdta/mdta_skybox.c", 80);
}




void Mdta_Skybox_Update(SkyboxContext* skyboxCtx){
    // Update the skybox for the next frame
    PRINTF("MDTA Skybox Updated\n");

    // Get the current ZeldaTime and assign the correct palettes    
    if (gSkyboxIsChanging == false)
    {
        // If the skybox is not changing via Kankyo, blend between day or night Start and End
        //updateCurrentFrameColorSet(FINE_DAY_START_SKY_COLOR_SET, FINE_DAY_END_SKY_COLOR_SET, 0.0f);
    }    
    else
    {
        // If Kankyo is changing the skybox, blend between the current and next skybox

        //updateCurrentFrameColorSet(FINE_DAY_END_SKY_COLOR_SET, FINE_SUNSET_SKY_COLOR_SET, 0.0f);
    }
}




//void updateCurrentFrameColorSet(u8 set1, u8 set2, float t) {
//    u8 i;
//    for (i = 0; i < NUM_COLORS; i++) {
//        currentFrameColorSet[i] = lerpColor(colorSets[set1][i], colorSets[set2][i], t);
//    }
//}






//void initializeColorSetsFromArrays(Color_RGBA8 predefinedSets[MAX_COLOUR_SETS][NUM_COLORS]) {
//    u8 i;
//    u8 set;
//    for (set = 0; set < MAX_COLOUR_SETS; set++) {
//        for (i = 0; i < NUM_COLORS; i++) {
//            colorSets[set][i] = predefinedSets[set][i];
//        }
//        PRINTF("Initialised ColorSet %d\n", set);
//    }
//}
void lerpColorSet(Color_RGBA8 sourceSet[NUM_COLORS], Color_RGBA8 targetSet[NUM_COLORS], Color_RGBA8 resultSet[NUM_COLORS], float t) {
    u8 i;
    for (i = 0; i < NUM_COLORS; i++) {
        resultSet[i] = lerpColor(sourceSet[i], targetSet[i], t);
    }
}
Color_RGBA8 lerpColor(Color_RGBA8 c1, Color_RGBA8 c2, float t) {
    // Lerps between two colours
    Color_RGBA8 result;
    result.r = (u8)((1.0f - t) * c1.r + t * c2.r);
    result.g = (u8)((1.0f - t) * c1.g + t * c2.g);
    result.b = (u8)((1.0f - t) * c1.b + t * c2.b);
    result.a = (u8)((1.0f - t) * c1.a + t * c2.a);
    return result;
}
