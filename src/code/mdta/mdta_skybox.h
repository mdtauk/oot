/*
    MDTA Header

    mdta_skybox.h
*/

#ifndef MDTA_SKYBOX_H
#define MDTA_SKYBOX_H

#include "ultra64/ultratypes.h"
#include "ultra64/gbi.h"
#include "z64math.h"

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


void Mdta_Skybox_Init();
void Mdta_Skybox_Setup(SkyboxWeather skyboxWeatherConfig, SkyboxMode skyboxModeCurrent, SkyboxMode skyboxModeNext, u8 blend);
void Mdta_Skybox_Draw();
void Mdta_Skybox_Update();

#endif