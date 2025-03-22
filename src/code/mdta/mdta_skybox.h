/*
    MDTA Header

    mdta_skybox.h
*/

#ifndef MDTA_SKYBOX_H
#define MDTA_SKYBOX_H 1

#include "../include/ultra64.h"
#include "../include/ultra64/gbi.h"
#include "../include/ultra64/ultratypes.h"
#include "z64environment.h"
#include "color.h"
#include "z64math.h"
#include "z64save.h"
#include "z64skybox.h"
#include "z64dma.h" // for RomFile

struct GameState;
struct GraphicsContext;
extern EnvironmentContext* sMdtaSkyboxEnvCtx;

#define NUM_COLORS 25

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

typedef enum ColorSetTypes{
    /* 00 */ INITIAL_COLOR_SET,
    /* 01 */ FINE_SUNRISE_SKY_COLOR_SET,
    /* 02 */ FINE_DAY_START_SKY_COLOR_SET,
    /* 03 */ FINE_DAY_END_SKY_COLOR_SET,
    /* 04 */ FINE_SUNSET_SKY_COLOR_SET,
    /* 05 */ FINE_NIGHT_START_SKY_COLOR_SET,
    /* 06 */ FINE_NIGHT_END_SKY_COLOR_SET,
    /* 07 */ STORM_SUNRISE_SKY_COLOR_SET,
    /* 08 */ STORM_DAY_START_SKY_COLOR_SET,
    /* 09 */ STORM_DAY_END_SKY_COLOR_SET,
    /* 10 */ STORM_SUNSET_SKY_COLOR_SET,
    /* 11 */ STORM_NIGHT_START_SKY_COLOR_SET,
    /* 12 */ STORM_NIGHT_END_SKY_COLOR_SET,
    /* 13 */ MAX_COLOUR_SETS
} ColorSetTypes;


typedef struct ColorSet {
    Color_RGBA8 colorSetColors[NUM_COLORS];
} ColorSet;

typedef struct ColorSetGroup {
    ColorSet groupOfColorSets[MAX_COLOUR_SETS];
} ColorSetGroup;


extern ColorSet initial_colorset;

// Fine Weather Color Sets
extern ColorSet fine_sunrise_sky_colorset;
extern ColorSet fine_day_start_sky_colorset;
extern ColorSet fine_day_end_sky_colorset;
extern ColorSet fine_sunset_sky_colorset;
extern ColorSet fine_night_start_sky_colorset;
extern ColorSet fine_night_end_sky_colorset;
// Storm Weather Color Sets
extern ColorSet storm_sunrise_sky_colorset;
extern ColorSet storm_day_start_sky_colorset;
extern ColorSet storm_day_end_sky_colorset;
extern ColorSet storm_sunset_sky_colorset;
extern ColorSet storm_night_start_sky_colorset;
extern ColorSet storm_night_end_sky_colorset;

// All colour sets
extern ColorSetGroup predefinedColorSets;
extern ColorSet currentFrameColorSet;  // ColorSet for current frame's vertex colors


extern RomFile mdtaSkyboxFile;



extern void MDTA_Skybox_CalculateDisplayLists();


extern ColorSetGroup Populate_ColorSets();
//extern ColorSet lerpColorSet(ColorSet sourceSet, ColorSet targetSet, float t);
extern Color_RGBA8 lerpColor(Color_RGBA8 c1, Color_RGBA8 c2, float t);
extern void updateCurrentFrameColorSet(ColorSet set1, ColorSet set2, float t);



extern Mtx* Mdta_Skybox_UpdateMatrix(SkyboxContext* skyboxCtx, f32 x, f32 y, f32 z);

extern void Mdta_Skybox_Setup(SkyboxContext* skyboxCtx, EnvironmentContext* envCtx);
extern void Mdta_Skybox_Init(SkyboxContext* skyboxCtx, s16 skyboxId);
extern void Mdta_Skybox_Draw(SkyboxContext* skyboxCtx, struct GraphicsContext* gfxCtx, s16 blend, f32 x, f32 y, f32 z);
extern void Mdta_Skybox_Update(SkyboxContext* skyboxCtx, EnvironmentContext* envCtx);

#endif // MDTA_SKYBOX_H
