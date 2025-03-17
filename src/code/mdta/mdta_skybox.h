/*
    MDTA Header

    mdta_skybox.h
*/

#ifndef MDTA_SKYBOX_H
#define MDTA_SKYBOX_H

#include "ultra64/ultratypes.h"
#include "ultra64/gbi.h"
#include "z64math.h"
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


void initialiseColors();




void initializeColorSetsFromArrays(Color_RGBA8 predefinedSets[MAX_COLOUR_SETS][NUM_COLORS]);

Color_RGBA8 currentFrameColorSet[NUM_COLORS];  // Array for current frame's vertex colors

void lerpColorSet(Color_RGBA8 sourceSet[NUM_COLORS], Color_RGBA8 targetSet[NUM_COLORS], Color_RGBA8 resultSet[NUM_COLORS], float t);
Color_RGBA8 lerpColor(Color_RGBA8 c1, Color_RGBA8 c2, float t);
void currentFrameColorSet(int set1, int set2, float t);


void Mdta_Skybox_Setup(SkyboxWeather skyboxWeatherConfig, SkyboxMode skyboxModeCurrent, SkyboxMode skyboxModeNext, u8 blend);
void Mdta_Skybox_Init();
void Mdta_Skybox_Draw();
void Mdta_Skybox_Update();

#endif
