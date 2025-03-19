/*
    MDTA Header

    mdta_skybox.h
*/

#ifndef MDTA_SKYBOX_H
#define MDTA_SKYBOX_H 1

#include "ultra64/ultratypes.h"
#include "ultra64/gbi.h"
#include "z64math.h"
#include "z64save.h"
#include "z64skybox.h"
#include "assets/mdta/objects/mdta_obj_skybox/mdta_obj_skybox.h"

struct GameState;
struct GraphicsContext;

typedef enum SkyboxMode {
    /* 0 */ SKYBOX_MODE_SUNRISE,
    /* 1 */ SKYBOX_MODE_DAY,
    /* 2 */ SKYBOX_MODE_SUNSET,
    /* 3 */ SKYBOX_MODE_NIGHT,
    /* 4 */ SKYBOX_MODE_MAX
} SkyboxMode;

typedef enum SkyboxWeather {
    /* 0 */ SKYBOX_WEATHER_FINE,
    /* 1 */ SKYBOX_WEATHER_STORM,
    /* 2 */ SKYBOX_WEATHER_MAX
} SkyboxWeather;


typedef struct MdtaSkyboxContext {
    Gfx (*dListBuf)[150];
    Gfx* gfx;
    Vtx* roomVtx;
} MdtaSkyboxContext;

//Color_RGBA8 colorSets[MAX_COLOUR_SETS][NUM_COLORS];
Color_RGBA8 lerpColor(Color_RGBA8 c1, Color_RGBA8 c2, float t);

void MDTA_Skybox_CalculateDisplayLists(s16 nFaces);


//void initializeColorSetsFromArrays(Color_RGBA8 predefinedSets[MAX_COLOUR_SETS][NUM_COLORS]);
//Color_RGBA8 currentFrameColorSet[NUM_COLORS];  // Array for current frame's vertex colors
void lerpColorSet(Color_RGBA8 sourceSet[NUM_COLORS], Color_RGBA8 targetSet[NUM_COLORS], Color_RGBA8 resultSet[NUM_COLORS], float t);

//void updateCurrentFrameColorSet(u8 set1, u8 set2, float t);



Mtx* Mdta_Skybox_UpdateMatrix(SkyboxContext* skyboxCtx, f32 x, f32 y, f32 z);

void Mdta_Skybox_Setup(GameState* state, SkyboxWeather skyboxWeatherConfig, SkyboxMode skyboxModeCurrent, SkyboxMode skyboxModeNext, u8 blend);
void Mdta_Skybox_Init(GameState* state, SkyboxContext* skyboxCtx, s16 skyboxId);
void Mdta_Skybox_Draw(SkyboxContext* skyboxCtx, struct GraphicsContext* gfxCtx, s16 blend, f32 x, f32 y, f32 z);
void Mdta_Skybox_Update(SkyboxContext* skyboxCtx);

#endif
