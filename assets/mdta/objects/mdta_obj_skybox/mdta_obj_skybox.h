/*
    MDTA Header

    mdta_obj_skybox.h
*/

#ifndef MDTA_OBJ_SKYBOX_H
#define MDTA_OBJ_SKYBOX_H 1


#include "ultra64.h"
#include "ultra64/ultratypes.h"
#include "global.h"




// Color Sets
#define NUM_COLORS 25;

typedef enum ColorSet{
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
} ColorSet;

extern Color_RGBA8 colorSets[MAX_COLOUR_SETS][NUM_COLORS];

extern Color_RGBA8 predefinedSets[MAX_COLOUR_SETS][NUM_COLORS];


// Textures
extern u64 tex_fine_clouds_ia8[];
extern u64 tex_storm_clouds_ia8[];

extern u64 tex_sky_blank_i8[];




// Verticies
extern Vtx vtx_cull_clouds[8];
extern Vtx vtx_clouds[25];


extern Vtx vtx_cull_sky_fine_day[8];
extern Vtx vtx_sky_fine_day[32];

extern Vtx vtx_cull_sky_fine_night[8];
extern Vtx vtx_sky_fine_night[32];

extern Vtx vtx_cull_sky_fine_sunrise[8];
extern Vtx vtx_sky_fine_sunrise[31];

extern Vtx vtx_cull_sky_fine_sunset[8];
extern Vtx vtx_sky_fine_sunset[31];


extern Vtx vtx_cull_sky_storm_day[8];
extern Vtx vtx_sky_storm_day[32];

extern Vtx vtx_cull_sky_storm_night[8];
extern Vtx vtx_sky_storm_night[32];

extern Vtx vtx_cull_sky_storm_sunrise[8];
extern Vtx vtx_sky_storm_sunrise[31];

extern Vtx vtx_cull_sky_storm_sunset[8];
extern Vtx vtx_sky_storm_sunset[31];




// Triangles
extern Gfx tri_clouds[];
extern Gfx tri_storm_clouds[];

extern Gfx tri_sky_fine_day[];
extern Gfx tri_sky_fine_night[];
extern Gfx tri_sky_fine_sunrise[];
extern Gfx tri_sky_fine_sunset[];

extern Gfx tri_sky_storm_day[];
extern Gfx tri_sky_storm_night[];
extern Gfx tri_sky_storm_sunrise[];
extern Gfx tri_sky_storm_sunset[];




// Variables
extern Color_RGBA8 fineCloudsSunrisePrimColor;
extern Color_RGBA8 fineCloudsSunriseEnvColor;

extern Color_RGBA8 fineCloudsDayPrimColor;
extern Color_RGBA8 fineCloudsDayEnvColor;

extern Color_RGBA8 fineCloudsSunsetPrimColor;
extern Color_RGBA8 fineCloudsSunsetEnvColor;

extern Color_RGBA8 fineCloudsNightPrimColor;
extern Color_RGBA8 fineCloudsNightEnvColor;


extern Color_RGBA8 stormCloudsSunrisePrimColor;
extern Color_RGBA8 stormCloudsSunriseEnvColor;

extern Color_RGBA8 stormCloudsDayPrimColor;
extern Color_RGBA8 stormCloudsDayEnvColor;

extern Color_RGBA8 stormCloudsSunsetPrimColor;
extern Color_RGBA8 stormCloudsSunsetEnvColor;

extern Color_RGBA8 stormCloudsNightPrimColor;
extern Color_RGBA8 stormCloudsNightEnvColor;




// Materials
extern Gfx mat_fine_clouds_XLU[];

extern Gfx mat_sky_fine_day_OPA[];
extern Gfx mat_sky_fine_night_OPA[];
extern Gfx mat_sky_fine_sunrise_OPA[];
extern Gfx mat_sky_fine_sunset_OPA[];

extern Gfx mat_sky_storm_day_OPA[];
extern Gfx mat_sky_storm_night_OPA[];
extern Gfx mat_sky_storm_sunrise_OPA[];
extern Gfx mat_sky_storm_sunset_OPA[];




// DisplayLists
extern Gfx DL_fine_clouds_XLU[];

extern Gfx DL_sky_fine_day_OPA[];
extern Gfx DL_sky_fine_night_OPA[];
extern Gfx DL_sky_fine_sunrise_OPA[];
extern Gfx DL_sky_fine_sunset_OPA[];

extern Gfx DL_sky_storm_day_OPA[];
extern Gfx DL_sky_storm_night_OPA[];
extern Gfx DL_sky_storm_sunrise_OPA[];
extern Gfx DL_sky_storm_sunset_OPA[];