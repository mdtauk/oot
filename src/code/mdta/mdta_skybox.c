/*
    MDTA Code

    mdta_skybox.c
*/
#include "global.h"
#include "terminal.h"
#include "z64environment.h"
#include "z64save.h"
#include "z64dma.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h"
#include "z64skybox.h"
#include "../include/ultra64.h"
#include "../include/ultra64/gbi.h"
#include "../include/ultra64/ultratypes.h"

#include "mdta_skybox.h"




Mtx* sMdtaSkyboxDrawMatrix;
EnvironmentContext* sMdtaSkyboxEnvCtx;
MdtaSkyboxConfig mdtaSkyboxCfg;


ColorSetGroup predefinedColorSets;


Mtx* Mdta_Skybox_UpdateMatrix(SkyboxContext* skyboxCtx, f32 x, f32 y, f32 z) {
    Matrix_Translate(x, y, z, MTXMODE_NEW);
    Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
    Matrix_RotateX(skyboxCtx->rot.x, MTXMODE_APPLY);
    Matrix_RotateY(skyboxCtx->rot.y, MTXMODE_APPLY);
    Matrix_RotateZ(skyboxCtx->rot.z, MTXMODE_APPLY);
    return MATRIX_TO_MTX(sMdtaSkyboxDrawMatrix, "../z_vr_box_draw.c", 42);
}




#pragma region ColourSets

// Setting up our predefined colour sets

ColorSetGroup Populate_ColorSets()
{
    ColorSet initial_colorset = {
        .colorSetColors = {
            /* East Colours */
            { 11, 0, 0, 255 }, // East01
            { 22, 0, 0, 255 }, // East02
            { 33, 0, 0, 255 }, // East03
            { 44, 0, 0, 255 }, // East04
            { 55, 0, 0, 255 }, // East05
            /* NE and SE Colours */
            { 0, 11, 0, 255 }, // NSEast01
            { 0, 22, 0, 255 }, // NSEast02
            { 0, 33, 0, 255 }, // NSEast03
            { 0, 44, 0, 255 }, // NSEast04
            { 0, 55, 0, 255 }, // NSEast05
            /* North South Colours */
            { 0, 0, 11, 255 }, // NS01
            { 0, 0, 22, 255 }, // NS02
            { 0, 0, 33, 255 }, // NS03
            { 0, 0, 44, 255 }, // NS04
            { 0, 0, 55, 255 }, // NS05
            /* NW and SW Colours */
            { 0, 120, 0, 255 }, // NSWest01
            { 0, 130, 0, 255 }, // NSWest02
            { 0, 140, 0, 255 }, // NSWest03
            { 0, 150, 0, 255 }, // NSWest04
            { 0, 160, 0, 255 }, // NSWest05
            /* West Colours */
            { 120, 0, 0, 255 }, // West01
            { 130, 0, 0, 255 }, // West02
            { 140, 0, 0, 255 }, // West03
            { 150, 0, 0, 255 }, // West04
            { 160, 0, 0, 255 } // West05
        }
    };

    // Fine Weather Color Sets    
    ColorSet fine_sunrise_sky_colorset = {
        .colorSetColors = {
            /* East Colours */
            { 234, 208, 178, 255 }, // East01
            { 253, 246, 228, 255 }, // East02
            { 195, 200, 218, 255 }, // East03
            { 129, 144, 179, 255 }, // East04
            { 57, 80, 121, 255 }, // East05
            /* NE and SE Colours */
            { 196, 169, 153, 255 }, // NSEast01
            { 202, 193, 193, 255 }, // NSEast02
            { 158, 171, 198, 255 }, // NSEast03
            { 111, 131, 168, 255 }, // NSEast04
            { 57,  80, 121, 255 }, // NSEast05
            /* North South Colours */
            { 188, 167, 160, 255 }, // NS01
            { 177, 176, 190, 255 }, // NS02
            { 119, 141, 182, 255 }, // NS03
            { 86, 109, 151, 255 }, // NS04
            { 58, 80, 120, 255 }, // NS05
            /* NW and SW Colours */
            { 167, 148, 156, 255 }, // NSWest01
            { 168, 176, 200, 255 }, // NSWest02
            { 96, 127, 175, 255 }, // NSWest03
            { 59, 90, 134, 255 }, // NSWest04
            { 54, 77, 118, 255 }, // NSWest05
            /* West Colours */
            { 187, 167, 169, 255 }, // West01
            { 184, 189, 211, 255 }, // West02
            { 104, 136, 185, 255 }, // West03
            { 59, 91, 136, 255 }, // West04
            { 57, 79, 119, 255 } // West05
        }
    };
    ColorSet fine_day_start_sky_colorset = {
        .colorSetColors = {
            /* East Colours */
            { 176, 177, 176, 255 }, // East01
            { 155, 172, 188, 255 }, // East02
            { 116, 148, 177, 255 }, // East03
            { 82, 117, 156, 255 }, // East04
            { 75, 100, 136, 255 }, // East05
            /* NE and SE Colours */
            { 145, 161, 171, 255 }, // NSEast01
            { 93, 129, 166, 255 }, // NSEast02
            { 55, 105, 149, 255 }, // NSEast03
            { 47, 90, 132, 255 }, // NSEast04
            { 98, 94, 131, 255 }, // NSEast05
            /* North South Colours */
            { 120, 150, 178, 255 }, // NS01
            { 47, 119, 169, 255 }, // NS02
            { 18, 82, 146, 255 }, // NS03
            { 1, 64, 118, 255 }, // NS04
            { 11, 61, 112, 255 }, // NS05
            /* NW and SW Colours */
            { 143, 162, 179, 255 }, // NSWest01
            { 67, 126, 174, 255 }, // NSWest02
            { 23, 83, 145, 255 }, // NSWest03
            { 17, 69, 121, 255 }, // NSWest04
            { 37, 79, 121, 255 }, // NSWest05
            /* West Colours */
            { 117, 142, 162, 255 }, // West01
            { 40, 106, 155, 255 }, // West02
            { 19, 82, 142, 255 }, // West03
            { 04, 65, 120, 255 }, // West04
            { 16, 66, 117, 255 } // West05
        }
    };
    ColorSet fine_day_end_sky_colorset = {
        // East and West swap sides to match the sun's position
        .colorSetColors = {
            /* East Colours */
            { 117, 142, 162, 255 }, // East01
            { 40, 106, 155, 255 }, // East02
            { 19, 82, 142, 255 }, // East03
            { 04, 65, 120, 255 }, // East04
            { 16, 66, 117, 255 }, // East05
            /* NE and SE Colours */
            { 143, 162, 179, 255 }, // NSEast01
            { 67, 126, 174, 255 }, // NSEast02
            { 23, 83, 145, 255 }, // NSEast03
            { 17, 69, 121, 255 }, // NSEast04
            { 37, 79, 121, 255 }, // NSEast05
            /* North South Colours */
            { 120, 150, 178, 255 }, // NS01
            { 47, 119, 169, 255 }, // NS02
            { 18, 82, 146, 255 }, // NS03
            { 01, 64, 118, 255 }, // NS04
            { 11, 61, 112, 255 }, // NS05
            /* NW and SW Colours */
            { 145, 161, 171, 255 }, // NSWest01
            { 93, 129, 166, 255 }, // NSWest02
            { 55, 105, 149, 255 }, // NSWest03
            { 47, 90, 132, 255 }, // NSWest04
            { 98, 94, 131, 255 }, // NSWest05
            /* West Colours */
            { 176, 177, 176, 255 }, // West01
            { 155, 172, 188, 255 }, // West02
            { 116, 148, 177, 255 }, // West03
            { 82, 117, 156, 255 }, // West04
            { 75, 100, 136, 255 } // West05
        }
    };
    ColorSet fine_sunset_sky_colorset = {
        // The lighter colours fall in the west as the sun sets
        .colorSetColors = {
            /* East Colours */
            { 92, 77, 94, 255 }, // East01
            { 159, 130, 107, 255 }, // East02
            { 104, 117, 123, 255 }, // East03
            { 64, 70, 99, 255 }, // East04
            { 56, 56, 74, 255 }, // East05
            /* NE and SE Colours */
            { 153, 108, 113, 255 }, // NSEast01
            { 218, 176, 125, 255 }, // NSEast02
            { 151, 167, 151, 255 }, // NSEast03
            { 81, 101, 126, 255 }, // NSEast04
            { 59, 60, 91, 255 }, // NSEast05
            /* North South Colours */
            { 200, 138, 120, 255 }, // NS01
            { 245, 202, 132, 255 }, // NS02
            { 198, 211, 172, 255 }, // NS03
            { 124, 147, 156, 255 }, // NS04
            { 75, 87, 119, 255 }, // NS05
            /* NW and SW Colours */
            { 216, 136, 111, 255 }, // NSWest01
            { 245, 194, 120, 255 }, // NSWest02
            { 204, 212, 167, 255 }, // NSWest03
            { 139, 163, 164, 255 }, // NSWest04
            { 81, 100, 129, 255 }, // NSWest05
            /* West Colours */
            { 231, 142, 108, 255 }, // West01
            { 248, 192, 114, 255 }, // West02
            { 212, 213, 165, 255 }, // West03
            { 148, 170, 166, 255 }, // West04
            { 83, 102, 131, 255 } // West05
        }
    };
    ColorSet fine_night_start_sky_colorset = {
        // Moon rises from the East
        .colorSetColors = {
            /* East Colours */
            { 180, 183, 197, 255 }, // East01
            { 132, 148, 163, 255 }, // East02
            { 76, 93, 119, 255 }, // East03
            { 50, 67, 87, 255 }, // East04
            { 31, 42, 57, 255 }, // East05
            /* NE and SE Colours */
            { 176, 177, 182, 255 }, // NSEast01
            { 88, 105, 131, 255 }, // NSEast02
            { 63, 81, 105, 255 }, // NSEast03
            { 44, 57, 74, 255 }, // NSEast04
            { 26, 34, 45, 255 }, // NSEast05
            /* North South Colours */
            { 170, 169, 175, 255 }, // NS01
            { 61, 73, 95, 255 }, // NS02
            { 33, 39, 51, 255 }, // NS03
            { 20, 25, 31, 255 }, // NS04
            { 22, 29, 37, 255 }, // NS05
            /* NW and SW Colours */
            { 162, 165, 172, 255 }, // NSWest01
            { 88, 105, 131, 255 }, // NSWest02
            { 48, 57, 72, 255 }, // NSWest03
            { 17, 69, 121, 255 }, // NSWest04
            { 37, 79, 121, 255 }, // NSWest05
            /* West Colours */
            { 171, 172, 176, 255 }, // West01
            { 80, 96, 119, 255 }, // West02
            { 19, 82, 142, 255 }, // West03
            { 39, 47, 58, 255 }, // West04
            { 23, 30, 38, 255 } // West05
        }
    };
    ColorSet fine_night_end_sky_colorset = {
        // East and West swap sides to match the moon's position
        .colorSetColors = {
            /* East Colours */
            { 171, 172, 176, 255 }, // East01
            { 80, 96, 119, 255 }, // East02
            { 19, 82, 142, 255 }, // East03
            { 39, 47, 58, 255 }, // East04
            { 23, 30, 38, 255 }, // East05
            /* NE and SE Colours */
            { 162, 165, 172, 255 }, // NSEast01
            { 88, 105, 131, 255 }, // NSEast02
            { 48, 57, 72, 255 }, // NSEast03
            { 17, 69, 121, 255 }, // NSEast04
            { 37, 79, 121, 255 }, // NSEast05
            /* North South Colours */
            { 170, 169, 175, 255 }, // NS01
            { 61, 73, 95, 255 }, // NS02
            { 33, 39, 51, 255 }, // NS03
            { 20, 25, 31, 255 }, // NS04
            { 22, 29, 37, 255 }, // NS05
            /* NW and SW Colours */
            { 176, 177, 182, 255 }, // NSWest01
            { 88, 105, 131, 255 }, // NSWest02
            { 63, 81, 105, 255 }, // NSWest03
            { 44, 57, 74, 255 }, // NSWest04
            { 26, 34, 45, 255 }, // NSWest05
            /* West Colours */
            { 180, 183, 197, 255 }, // West01
            { 132, 148, 163, 255 }, // West02
            { 76, 93, 119, 255 }, // West03
            { 50, 67, 87, 255 }, // West04
            { 31, 42, 57, 255 } // West05
        }
    };

    // Storm Weather Color Sets
    ColorSet storm_sunrise_sky_colorset = {
        // Light coming from the east
        .colorSetColors = {
            /* East Colours */
            { 227, 158, 72, 255 }, // East01
            { 235, 137, 48, 255 }, // East02
            { 174, 100, 78, 255 }, // East03
            { 104, 87, 89, 255 }, // East04
            { 130, 106, 110, 255 }, // East05
            /* NE and SE Colours */
            { 140, 75, 57, 255 }, // NSEast01
            { 220, 133, 60, 255 }, // NSEast02
            { 197, 117, 90, 255 }, // NSEast03
            { 130, 120, 125, 255 }, // NSEast04
            { 157, 118, 116, 255 }, // NSEast05
            /* North South Colours */
            { 73, 51, 52, 255 }, // NS01
            { 156, 96, 67, 255 }, // NS02
            { 188, 113, 91, 255 }, // NS03
            { 121, 114, 122, 255 }, // NS04
            { 149, 113, 114, 255 }, // NS05
            /* NW and SW Colours */
            { 29, 35, 45, 255 }, // NSWest01
            { 86, 62, 64, 255 }, // NSWest02
            { 124, 88, 85, 255 }, // NSWest03
            { 131, 125, 133, 255 }, // NSWest04
            { 100, 100, 114, 255 }, // NSWest05
            /* West Colours */
            { 24, 33, 42, 255 }, // West01
            { 98, 67, 66, 255 }, // West02
            { 79, 67, 73, 255 }, // West03
            { 122, 125, 136, 255 }, // West04
            { 82, 105, 126, 255 } // West05
        }
    };
    ColorSet storm_day_start_sky_colorset = {
        .colorSetColors = {
            /* East Colours */
            { 81, 94, 112, 255 }, // East01
            { 95, 110, 130, 255 }, // East02
            { 146, 159, 175, 255 }, // East03
            { 145, 157, 173, 255 }, // East04
            { 220, 223, 228, 255 }, // East05
            /* NE and SE Colours */
            { 85, 99, 118, 255 }, // NSEast01
            { 97, 112, 133, 255 }, // NSEast02
            { 132, 147, 165, 255 }, // NSEast03
            { 156, 167, 182, 255 }, // NSEast04
            { 186, 194, 203, 255 }, // NSEast05
            /* North South Colours */
            { 105, 116, 132, 255 }, // NS01
            { 107, 121, 142, 255 }, // NS02
            { 146, 157, 174, 255 }, // NS03
            { 158, 169, 185, 255 }, // NS04
            { 168, 176, 189, 255 }, // NS05
            /* NW and SW Colours */
            { 133, 141, 155, 255 }, // NSWest01
            { 101, 114, 133, 255 }, // NSWest02
            { 144, 155, 172, 255 }, // NSWest03
            { 159, 169, 185, 255 }, // NSWest04
            { 151, 162, 178, 255 }, // NSWest05
            /* West Colours */
            { 125, 135, 151, 255 }, // West01
            { 85, 97, 116, 255 }, // West02
            { 147, 157, 173, 255 }, // West03
            { 116, 129, 149, 255 }, // West04
            { 138, 151, 169, 255 } // West05
        }
    };
    ColorSet storm_day_end_sky_colorset = {
        // East and West swap sides to match the obscured sun's direction
        .colorSetColors = {
            /* East Colours */
            { 125, 135, 151, 255 }, // East01
            { 85, 97, 116, 255 }, // East02
            { 147, 157, 173, 255 }, // East03
            { 116, 129, 149, 255 }, // East04
            { 138, 151, 169, 255 }, // East05
            /* NE and SE Colours */
            { 133, 141, 155, 255 }, // NSEast01
            { 101, 114, 133, 255 }, // NSEast02
            { 144, 155, 172, 255 }, // NSEast03
            { 159, 169, 185, 255 }, // NSEast04
            { 151, 162, 178, 255 }, // NSEast05
            /* North South Colours */
            { 105, 116, 132, 255 }, // NS01
            { 107, 121, 142, 255 }, // NS02
            { 146, 157, 174, 255 }, // NS03
            { 158, 169, 185, 255 }, // NS04
            { 168, 176, 189, 255 }, // NS05
            /* NW and SW Colours */
            { 85, 99, 118, 255 }, // NSWest01
            { 97, 112, 133, 255 }, // NSWest02
            { 132, 147, 165, 255 }, // NSWest03
            { 156, 167, 182, 255 }, // NSWest04
            { 186, 194, 203, 255 }, // NSWest05
            /* West Colours */
            {  81,  94, 112, 255 }, // West01
            {  95, 110, 130, 255 }, // West02
            { 146, 159, 175, 255 }, // West03
            { 145, 157, 173, 255 }, // West04
            { 220, 223, 228, 255 } // West05
        }
    };
    ColorSet storm_sunset_sky_colorset = {
        // Light coming from the west
        .colorSetColors = {
            /* East Colours */
            { 201, 99, 52, 255 }, // East01
            { 244, 173, 114, 255 }, // East02
            { 198, 149, 128, 255 }, // East03
            { 89, 79, 101, 255 }, // East04
            { 41, 29,  51, 255 }, // East05
            /* NE and SE Colours */
            { 145, 67, 051, 255 }, // NSEast01
            { 215, 141, 60, 255 }, // NSEast02
            { 140, 105, 109, 255 }, // NSEast03
            { 59, 64, 93, 255 }, // NSEast04
            { 32, 25, 47, 255 }, // NSEast05
            /* North South Colours */
            { 127, 49, 43, 255 }, // NS01
            { 187, 112, 95, 255 }, // NS02
            { 72, 101, 109, 255 }, // NS03
            { 43, 44, 72, 255 }, // NS04
            { 26, 21, 43, 255 }, // NS05
            /* NW and SW Colours */
            {  45,  25,  33, 255 }, // NSWest01
            {  82,  61,  71, 255 }, // NSWest02
            {  37,  48,  68, 255 }, // NSWest03
            {  12,  24,  50, 255 }, // NSWest04
            {  19,  17,  38, 255 }, // NSWest05
            /* West Colours */
            { 32, 14, 20, 255 }, // West01
            { 54, 36, 52, 255 }, // West02
            { 14, 19, 40, 255 }, // West03
            { 18, 19, 39, 255 }, // West04
            { 16, 14, 35, 255 } // West05
        }
    };
    ColorSet storm_night_start_sky_colorset = {
        // Light comes from the East with the Moon rise
        .colorSetColors = {
            /* East Colours */
            { 171, 187, 163, 255 }, // East01
            { 91, 105, 108, 255 }, // East02
            { 62, 73, 76, 255 }, // East03
            { 38, 53, 59, 255 }, // East04
            { 34, 44, 50, 255 }, // East05
            /* NE and SE Colours */
            { 114, 124, 114, 255 }, // NSEast01
            { 39, 49, 55, 255 }, // NSEast02
            { 40, 51, 56, 255 }, // NSEast03
            { 52, 66, 75, 255 }, // NSEast04
            { 30, 41, 46, 255 }, // NSEast05
            /* North South Colours */
            { 97, 105, 100, 255 }, // NS01
            { 23, 32, 38, 255 }, // NS02
            { 23, 34, 41, 255 }, // NS03
            { 52, 69, 84, 255 }, // NS04
            { 26, 34, 41, 255 }, // NS05
            /* NW and SW Colours */
            { 32, 41, 47, 255 }, // NSWest01
            { 15, 23, 28, 255 }, // NSWest02
            { 48, 63, 75, 255 }, // NSWest03
            { 22, 34, 42, 255 }, // NSWest04
            { 16, 24, 30, 255 }, // NSWest05
            /* West Colours */
            { 33, 48, 56, 255 }, // West01
            { 38, 52, 61, 255 }, // West02
            { 13, 21, 28, 255 }, // West03
            { 95, 23, 146, 255 }, // West04
            { 23, 34, 42, 255 } // West05
        }
    };
    ColorSet storm_night_end_sky_colorset = {
        // East and West swap sides to match the moon's position
        .colorSetColors = {
            /* East Colours */
            { 33, 48, 56, 255 }, // East01
            { 38, 52, 61, 255 }, // East02
            { 13, 21, 28, 255 }, // East03
            { 95, 123, 146, 255 }, // East04
            { 23, 34, 42, 255 }, // East05
            /* NE and SE Colours */
            { 32, 41, 47, 255 }, // NSEast01
            { 15, 23, 28, 255 }, // NSEast02
            { 48, 63, 75, 255 }, // NSEast03
            { 22, 34, 42, 255 }, // NSEast04
            { 16, 24, 30, 255 }, // NSEast05
            /* North South Colours */
            { 97, 105, 100, 255 }, // NS01
            { 23, 32, 38, 255 }, // NS02
            { 23, 34, 41, 255 }, // NS03
            { 52, 69, 84, 255 }, // NS04
            { 26, 34, 41, 255 }, // NS05
            /* NW and SW Colours */
            { 114, 124, 114, 255 }, // NSWest01
            { 39, 49, 55, 255 }, // NSWest02
            { 40, 51, 56, 255 }, // NSWest03
            { 52, 66, 75, 255 }, // NSWest04
            { 30, 41, 46, 255 }, // NSWest05
            /* West Colours */
            { 171, 187, 163, 255 }, // West01
            { 91, 105, 108, 255 }, // West02
            { 62, 73, 76, 255 }, // West03
            { 38, 53, 59, 255 }, // West04
            { 34, 44, 50, 255 } // West05
        }
    };

    ColorSetGroup result = {
        .groupOfColorSets = {
            initial_colorset,
            fine_sunrise_sky_colorset,
            fine_day_start_sky_colorset,
            fine_day_end_sky_colorset,
            fine_sunset_sky_colorset,
            fine_night_start_sky_colorset,
            fine_night_end_sky_colorset,
            storm_sunrise_sky_colorset,
            storm_day_start_sky_colorset,
            storm_day_end_sky_colorset,
            storm_sunset_sky_colorset,
            storm_night_start_sky_colorset,
            storm_night_end_sky_colorset
        }
    };    

    return result;
}




ColorSet lerpColorSet(ColorSet* sourceSet, ColorSet* targetSet, f32 t) {
    // Lerps between each color in two ColorSets
    
    u8 i;
    ColorSet resultSet;  // Declare the result ColorSet

    for (i = 0; i < NUM_COLORS; i++) {
        // Perform the lerp on each Color_RGBA8 in the colorSetItems array
        resultSet.colorSetColors[i] = lerpColor(sourceSet->colorSetColors[i], targetSet->colorSetColors[i], t);
    }

    return resultSet; // Return the fully populated result ColorSet
}



Color_RGBA8 lerpColor(Color_RGBA8 c1, Color_RGBA8 c2, f32 t) {
    // Lerps between two colours
    Color_RGBA8 result;

    result.r = (u8)((1.0f - t) * c1.r + t * c2.r);
    result.g = (u8)((1.0f - t) * c1.g + t * c2.g);
    result.b = (u8)((1.0f - t) * c1.b + t * c2.b);
    result.a = (u8)((1.0f - t) * c1.a + t * c2.a);

    return result;
}

#pragma endregion ColourSets



extern void Mdta_Change_Slow_Blend(EnvironmentContext* envCtx)
{
    // activate the slow blend if day or night modes
    s32 dayStartTime = (CLOCK_TIME(8, 0) + 1);
    s32 dayEndTime = CLOCK_TIME(16, 0);

    s32 nightStartTime = CLOCK_TIME(19,0);
    s32 nightEndTime = (CLOCK_TIME(4, 0) + 1);

    s32 midnightTime = CLOCK_TIME(24, 0);

    u16 currentTime = gSaveContext.skyboxTime;

    f32 dayLength;
    f32 nightLengthTime;

    u8 steps = 255;


    // if current mode is Fine Day or Stormy Day
    if (mdtaSkyboxCfg.currentMode == SKYBOX_MODE_FINE_DAY && mdtaSkyboxCfg.nextMode == SKYBOX_MODE_FINE_DAY ||
        mdtaSkyboxCfg.currentMode == SKYBOX_MODE_STORM_DAY && mdtaSkyboxCfg.nextMode == SKYBOX_MODE_STORM_DAY)
    {
        dayLength = (dayEndTime - dayStartTime);
        s32 elapsedDayTime = (currentTime - dayStartTime);

        // Map elapsed time to range 0-255        
        if (currentTime >= dayStartTime && currentTime <= dayEndTime) {
            elapsedDayTime = currentTime - dayStartTime;
        } else {
            elapsedDayTime = 0; // Prevent invalid ranges
        }
        
        mdtaSkyboxCfg.mdtaSlowBlend = (elapsedDayTime * steps) / dayLength;

    }
    // else if current mode is Fine Night or Stormy Night
    else if (mdtaSkyboxCfg.currentMode == SKYBOX_MODE_FINE_NIGHT && mdtaSkyboxCfg.nextMode == SKYBOX_MODE_FINE_NIGHT || 
             mdtaSkyboxCfg.currentMode == SKYBOX_MODE_STORM_NIGHT && mdtaSkyboxCfg.nextMode == SKYBOX_MODE_STORM_NIGHT)
    {        
        // Determine the total time span for nighttime
        // If nighttime crosses midnight, calculate the span as the time before midnight plus the time after midnight
        // Check if nighttime crosses midnight
        if (nightStartTime > nightEndTime) {
            // Nighttime spans across midnight
            nightLengthTime = (midnightTime - nightStartTime) + nightEndTime;
        }


        // Calculate the elapsed time since the nighttime started
        // If the current time is after nightStartTime, subtract nightStartTime from currentTime
        // Otherwise, account for the wraparound by adding the time before midnight to the currentTime
        s32 elapsedNightTime;
        if (currentTime >= nightStartTime)
        {
            elapsedNightTime = currentTime - nightStartTime;
        } 
        else
        {
            elapsedNightTime = (midnightTime - nightStartTime) + currentTime;
        }

        // Map the elapsed time to a range of 0-255
        // Use interpolation to ensure the blending value progresses evenly over the time span
        mdtaSkyboxCfg.mdtaSlowBlend = (elapsedNightTime * steps) / nightLengthTime;
    }
    else
    {
        // Set to 0 if at 255, and not in day or night mode
        if(mdtaSkyboxCfg.mdtaSlowBlend >= steps)
        {
            mdtaSkyboxCfg.mdtaSlowBlend = 0;
        }
    }
}

extern f32 Mdta_Normalised_Slow_Blend_Float(s16 slowBlend, u8 steps)
{
    f32 result;
    
    result = (f32)slowBlend / steps;

    return result;
}



extern const char* GetSkyboxModeName(SkyboxMode mode)
{
    switch (mode) {
        case SKYBOX_MODE_FINE_SUNRISE:  return "Fine_SUNRISE";
        case SKYBOX_MODE_FINE_DAY:      return "Fine_DAY";
        case SKYBOX_MODE_FINE_SUNSET:   return "Fine_SUNSET";
        case SKYBOX_MODE_FINE_NIGHT:    return "Fine_NIGHT";

        case SKYBOX_MODE_STORM_SUNRISE: return "Storm_SUNRISE";
        case SKYBOX_MODE_STORM_DAY:     return "Storm_DAY";
        case SKYBOX_MODE_STORM_SUNSET:  return "Storm_SUNSET";
        case SKYBOX_MODE_STORM_NIGHT:   return "Storm_NIGHT";
        default:                        return "UNKNOWN";
    }

}



extern void Mdta_Skybox_Debug(EnvironmentContext* envCtx)
{    
    // assign values to the mdta skybox config
    mdtaSkyboxCfg.currentMode = envCtx->skybox1Index;
    mdtaSkyboxCfg.nextMode = envCtx->skybox2Index;
    mdtaSkyboxCfg.mdtaSkyboxBlend = envCtx->skyboxBlend;
    mdtaSkyboxCfg.mdtaSkyboxIsChanging = gSkyboxIsChanging;

    // format the game time into hours and minutes
    u8 timeHour;
    s16 timeMinute;
    u8 steps = 255;

    timeHour = (u8)(24 * 60 / (f32)0x10000 * ((void)0, gSaveContext.skyboxTime) / 60.0f);
    timeMinute = (s16)(24 * 60 / (f32)0x10000 * ((void)0, gSaveContext.skyboxTime)) % 60;

    // format the game time into hours and minutes
    PRINTF("Current Mode: %s - %d \n Next Mode: %s - %d \n Blend: %d \n Skybox Time: %d \n", GetSkyboxModeName(mdtaSkyboxCfg.currentMode), mdtaSkyboxCfg.currentMode, GetSkyboxModeName(mdtaSkyboxCfg.nextMode), mdtaSkyboxCfg.nextMode, mdtaSkyboxCfg.mdtaSkyboxBlend, gSaveContext.save.dayTime );
    
    PRINTF(" Slow Blend: %d \n Slow Blend Float: %f \n", mdtaSkyboxCfg.mdtaSlowBlend, Mdta_Normalised_Slow_Blend_Float(mdtaSkyboxCfg.mdtaSlowBlend, steps));

    PRINTF(VT_COL(WHITE, BLACK));
    PRINTF(" Skybox Time: %d:%d  ", timeHour, timeMinute);
    PRINTF_RST();

    if (mdtaSkyboxCfg.mdtaSkyboxIsChanging == false)
    {
        PRINTF(" \n Skybox is not changing \n");
    }    
    else
    {
        PRINTF(" \n Skybox is changing \n");
    }
}




void Mdta_Skybox_Setup(SkyboxContext* skyboxCtx, EnvironmentContext* envCtx){

    PRINTF_COLOR_MAGENTA();
    PRINTF("MDTA Skybox Setup start \n");
    
    Mdta_Skybox_Debug(envCtx);

    // Calculate the 6 sides of the skybox/dome
    Mdta_Skybox_CalculateDisplayLists();
    
    PRINTF("MDTA Skybox Setup end \n");
    PRINTF_RST();
}



void Mdta_Skybox_CalculateDisplayLists(){
    // Calculate the display lists for the skybox
    PRINTF("MDTA Skybox Calculate Start\n");



    PRINTF("MDTA Skybox Calculate End\n");
}



void Mdta_Skybox_Init(SkyboxContext* skyboxCtx, s16 skyboxId){
    
    PRINTF_COLOR_BLUE();
    PRINTF("MDTA Skybox Initialise start\n");

    u32 size;
    u8 i;
    u8 j;

    mdtaSkyboxCfg.mdtaSlowBlend = 0;
    
    predefinedColorSets = Populate_ColorSets();

    if (predefinedColorSets.groupOfColorSets != NULL)
    {
        for (i = 0; i < MAX_COLOUR_SETS; i++)
        {
            PRINTF("Color Set %d\n", i);
            for (j = 0; j < NUM_COLORS; j++)
            {
                PRINTF("Color %d: %d, %d, %d, %d\n", j, predefinedColorSets.groupOfColorSets[i].colorSetColors[j].r, predefinedColorSets.groupOfColorSets[i].colorSetColors[j].g, predefinedColorSets.groupOfColorSets[i].colorSetColors[j].b, predefinedColorSets.groupOfColorSets[i].colorSetColors[j].a);
            }
        }
    }
    
    PRINTF("MDTA Skybox Initialise end\n");
    PRINTF_RST();
}




void Mdta_Skybox_Draw(SkyboxContext* skyboxCtx, GraphicsContext* gfxCtx, s16 blend, f32 x, f32 y, f32 z){
    // Draw the skybox for this frame
    PRINTF_COLOR_YELLOW();
    PRINTF("MDTA Skybox Draw Start\n");

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
        //gDPSetColorDither(POLY_OPA_DISP++, G_CD_MAGICSQ);
        //gDPSetTextureFilter(POLY_OPA_DISP++, G_TF_BILERP);

        // Enable texture filtering RDP pipeline stages for bilinear filtering
        //gDPSetTextureConvert(POLY_OPA_DISP++, G_TC_FILT);

        // Draw the skybox
        //
        if (skyboxCtx->gfx != NULL)
        {            
            //gSPDisplayList(POLY_OPA_DISP++, Skybox_Dome_North_DL);
        }

        gDPPipeSync(POLY_OPA_DISP++);

        CLOSE_DISPS(gfxCtx, "../mdta/mdta_skybox.c", 80);

        PRINTF("MDTA Skybox Draw End \n");
        PRINTF_RST();
}




void Mdta_Skybox_Update(SkyboxContext* skyboxCtx, EnvironmentContext* envCtx){
    // Update the skybox for the next frame
    PRINTF_COLOR_CYAN();
    PRINTF("MDTA Skybox Update Start \n");

    GameState* state;

    Mdta_Change_Slow_Blend(envCtx);

    Mdta_Skybox_Debug(envCtx);

    PRINTF("MDTA Skybox Update End \n");
    PRINTF_RST();
}
