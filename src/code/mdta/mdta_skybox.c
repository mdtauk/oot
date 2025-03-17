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
#include "assets/mdta/objects/mdta_obj_skybox/mdta_obj_skybox.h"




void initializeColorSetsFromArrays(Color_RGBA8 predefinedSets[MAX_COLOUR_SETS][NUM_COLORS]) {
    for (int set = 0; set < MAX_COLOUR_SETS; set++) {
        for (int i = 0; i < NUM_COLORS; i++) {
            colorSets[set][i] = predefinedSets[set][i];
        }
    }
}




void lerpColorSet(Color_RGBA8 sourceSet[NUM_COLORS], Color_RGBA8 targetSet[NUM_COLORS], Color_RGBA8 resultSet[NUM_COLORS], float t) {
    for (int i = 0; i < NUM_COLORS; i++) {
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





void Mdta_Skybox_Setup(SkyboxWeather skyboxWeatherConfig, SkyboxMode skyboxModeCurrent, SkyboxMode skyboxModeNext, u8 blend){
    // Setup the skybox
    PRINTF("MDTA Skybox Setup\n Weather: %d\n Current Mode: %d\n Next Mode: %d\n Blend: %d\n", skyboxWeatherConfig, skyboxModeCurrent, skyboxModeNext, blend);
}




void Mdta_Skybox_Init(){
    // Initialise the skybox
    PRINTF("MDTA Skybox Initialised\n");

    initialiseColors();
}




void Mdta_Skybox_Draw(){
    // Draw the skybox for this frame
    PRINTF("MDTA Skybox Drawn\n");
}




void Mdta_Skybox_Update(){
    // Update the skybox for the next frame
    PRINTF("MDTA Skybox Updated\n");

    updateCurrentFrameColors();
}




void updateCurrentFrameColorSet(int set1, int set2, float t) {
    for (int i = 0; i < NUM_COLORS; i++) {
        currentFrameColorSet[i] = lerpColor(colorSets[set1][i], colorSets[set2][i], t);
    }
}
