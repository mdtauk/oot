/*
    MDTA Object

	Custom Skybox Object Assets
*/

#include "ultra64.h"
#include "ultra64/ultratypes.h"
#include "global.h"
#include "mdta_obj_skybox.h"




#pragma region Color Sets

Color_RGBA8 predefinedSets[MAX_COLOUR_SETS][NUM_COLORS] = {
    // INITIAL_COLOR_SET
    {
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
        { 160, 0, 0, 255 }, // West05
    },
    // FINE_SUNRISE_SKY_COLOR_SET
    {
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
        { 57, 79, 119, 255 }, // West05
    },
    // FINE_DAY_START_SKY_COLOR_SET
    {
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
        { 16, 66, 117, 255 }, // West05
    },
	// FINE_DAY_END_SKY_COLOR_SET
	// East and West swap sides to match the sun's position
    {
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
        { 75, 100, 136, 255 }, // West05
    },
	// FINE_SUNSET_SKY_COLOR_SET
	// The lighter colours fall in the west as the sun sets
    {
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
        { 83, 102, 131, 255 }, // West05
    },
    // FINE_NIGHT_START_SKY_COLOR_SET
	// Moon rises from the East
    {
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
        { 23, 30, 38, 255 }, // West05
    },
    // FINE_NIGHT_END_SKY_COLOR_SET
	// East and West swap sides to match the moon's position
    {
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
        { 31, 42, 57, 255 }, // West05
    },
	// STORM_SUNRISE_SKY_COLOR_SET
	// Light coming from the east
    {
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
        { 82, 105, 126, 255 }, // West05
    },
    // STORM_DAY_START_SKY_COLOR_SET
    {
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
        { 138, 151, 169, 255 }, // West05
    },
    // STORM_DAY_END_SKY_COLOR_SET
	// East and West swap sides to match the obscured sun's direction
    {
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
        { 220, 223, 228, 255 }, // West05
    },
	// STORM_SUNSET_SKY_COLOR_SET
	// Light coming from the west
    {
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
        { 16, 14, 35, 255 }, // West05
    },
    // STORM_NIGHT_START_SKY_COLOR_SET
	// Light comes from the East with the Moon rise
    {
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
        { 23, 34, 42, 255 }, // West05
    },
    // STORM_NIGHT_End_SKY_COLOR_SET
	// East and West swap sides to match the moon's position
    {
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
        { 34, 44, 50, 255 }, // West05
    }
};

#pragma endregion Color Sets




#pragma region Textures

u64 tex_fine_clouds_ia8[] = {
	0xf2f1f1f1f0f0f0f1, 0xf1f2f3f4f4f5f5f5, 0xf6f5f5f5f5f4f3f3, 0xf2f1f1f0f0f0f0f0, 0xf0f1f1f3f2f1f2f4, 0xf5f4f4f4f4f5f4f3, 0xf5f7f7f6f5f5f5f5, 0xf4f2f1f1f1f1f2f3, 
	0xf1f1f1f1f0f0f1f1, 0xf1f2f3f4f5f5f5f4, 0xf5f5f5f5f4f4f3f2, 0xf2f1f1f1f0f0f0f0, 0xf0f0f1f3f3f1f2f3, 0xf4f5f5f5f5f4f4f4, 0xf4f5f4f4f4f5f5f3, 0xf3f3f2f2f1f1f2f2, 
	0xf1f1f1f1f1f1f1f2, 0xf2f2f2f3f5f5f4f4, 0xf4f5f5f3f3f4f3f2, 0xf2f1f1f0f0f1f0f0, 0xf0f0f1f3f5f4f3f3, 0xf4f6f8f9faf8f6f5, 0xf3f3f3f3f2f3f4f3, 0xf2f3f3f2f2f1f1f1, 
	0xf2f3f3f2f2f1f1f1, 0xf1f1f1f3f4f4f3f4, 0xf4f5f4f3f3f3f2f2, 0xf1f0f0f0f1f1f1f1, 0xf0f1f1f3f6f8f5f5, 0xf6f8fafcfffdf8f4, 0xf2f2f1f1f1f1f1f1, 0xf1f2f2f2f2f1f1f1, 
	0xf2f3f4f3f2f2f2f2, 0xf1f1f2f2f3f3f3f3, 0xf3f3f2f2f2f2f1f1, 0xf0f0f0f1f1f0f1f2, 0xf1f2f2f4f5f7faf9, 0xf7f9fcfbfbfbf7f4, 0xf2f1f1f0f0f0f1f2, 0xf2f2f1f2f2f2f2f2, 
	0xf2f2f4f5f4f3f3f2, 0xf2f2f2f2f3f3f3f2, 0xf2f2f1f2f1f1f1f0, 0xf0f0f0f1f1f0f1f3, 0xf4f4f3f3f3f6fbfb, 0xfaf9fbf8f5f5f4f3, 0xf2f1f0f0f0f0f1f2, 0xf4f2f1f1f2f4f3f2, 
	0xf1f3f8f9f7f6f4f2, 0xf2f2f2f3f3f2f2f1, 0xf2f1f1f1f1f1f1f0, 0xf0f0f0f0f0f0f1f3, 0xf4f5f4f3f3f6fafc, 0xfefcf9f5f3f3f3f2, 0xf2f1f0f0f0f0f1f1, 0xf2f2f1f2f4f7f7f3, 
	0xf5f5fbfdfbfbf8f4, 0xf2f3f4f3f3f2f1f1, 0xf1f1f2f2f1f1f0f0, 0xf0f0f0f0f0f0f0f2, 0xf5f7f5f3f4f6f7fb, 0xfbfbf9f4f2f2f2f2, 0xf2f1f0f0f0f0f0f0, 0xf2f2f1f4f8faf9f7, 
	0xf9f9fcfbf9faf8f6, 0xf5f4f4f4f4f3f2f1, 0xf1f2f3f2f2f1f1f0, 0xf0f0f0f0f0f0f1f2, 0xf5f7f5f4f4f5f6f7, 0xf8f9f7f3f2f2f1f1, 0xf1f0f0f0f0f0f1f2, 0xf2f2f1f4f9fbf9fa, 
	0xfafaf8f6f6f5f4f5, 0xf7f6f6f6f6f6f4f2, 0xf2f3f3f3f3f2f1f1, 0xf0f0f0f0f1f1f2f2, 0xf4f5f4f3f3f4f5f5, 0xf7f6f5f3f1f1f1f2, 0xf2f1f0f1f1f3f6f3, 0xf3f2f2f4f6f7f8fa, 
	0xf7f5f4f4f4f2f3f5, 0xf6f8f9f8f7f6f5f3, 0xf2f3f3f4f5f4f2f1, 0xf1f0f0f1f2f3f3f2, 0xf2f3f2f1f2f3f4f5, 0xf5f5f5f3f2f1f1f1, 0xf1f1f1f1f2f4f4f4, 0xf4f2f3f3f4f4f6f8, 
	0xf5f4f3f3f3f2f4f6, 0xf7f8f8f7f7f6f5f3, 0xf2f3f3f3f3f3f3f1, 0xf1f1f1f2f3f3f3f2, 0xf1f1f1f1f1f2f2f4, 0xf4f4f3f2f2f1f1f1, 0xf1f2f2f2f3f3f2f3, 0xf2f2f2f3f3f4f5f5, 
	0xf5f4f3f2f2f2f3f5, 0xf7f7f7f7f7f7f4f4, 0xf3f3f3f3f2f3f3f2, 0xf2f2f2f2f3f3f2f1, 0xf1f0f0f1f1f1f1f2, 0xf4f4f2f2f2f1f1f1, 0xf2f3f4f5f6f5f3f2, 0xf3f3f2f2f3f4f5f4, 
	0xf5f4f3f1f1f2f3f5, 0xf8f8f8f7f6f5f4f5, 0xf4f3f2f2f3f3f4f3, 0xf2f4f2f1f2f2f2f1, 0xf1f1f0f1f1f1f1f1, 0xf3f4f3f3f2f2f2f2, 0xf3f3f5f7f8f7f6f4, 0xf4f4f4f3f3f4f4f4, 
	0xf4f3f2f1f2f3f4f5, 0xf5f8f8f6f3f3f3f4, 0xf4f3f2f2f2f3f3f4, 0xf3f4f2f1f1f1f1f1, 0xf1f1f0f0f1f2f2f2, 0xf2f3f5f3f2f3f3f4, 0xf5f4f4f6f8f8f8f6, 0xf5f5f6f5f3f3f4f4, 
	0xf3f2f2f3f3f5f6f5, 0xf4f5f4f3f3f3f3f3, 0xf2f2f2f1f2f2f2f3, 0xf5f4f2f1f1f1f1f1, 0xf0f0f0f0f1f2f3f4, 0xf4f5f4f3f3f4f4f6, 0xf6f5f4f5f7f9f9f7, 0xf5f6f6f4f3f3f3f3, 
	0xf2f1f2f3f4f5f6f5, 0xf6f6f3f3f2f2f2f2, 0xf2f2f2f2f2f2f3f4, 0xf5f3f2f2f1f1f1f1, 0xf0f0f0f0f1f1f3f4, 0xf6f6f4f3f2f3f5f7, 0xf7f5f5f4f6f9f8f7, 0xf5f5f4f3f3f3f3f2, 
	0xf1f1f1f3f3f4f5f7, 0xf8f6f4f2f1f1f1f1, 0xf3f4f5f4f3f3f3f4, 0xf3f2f1f1f1f1f0f0, 0xf0f0f0f0f1f2f3f3, 0xf4f5f4f2f1f2f5f6, 0xf6f5f4f3f4f7f6f4, 0xf4f4f3f3f3f3f2f1, 
	0xf2f3f2f1f2f4f6f8, 0xf7f4f3f1f1f1f1f2, 0xf4f6f6f5f3f3f3f3, 0xf3f3f2f1f1f1f0f0, 0xf0f0f1f1f1f2f3f2, 0xf3f4f3f2f1f2f2f4, 0xf5f4f4f3f4f4f4f4, 0xf3f3f3f3f3f2f2f1, 
	0xf4f3f2f1f1f2f4f5, 0xf5f4f2f1f1f2f2f4, 0xf5f5f5f5f3f2f2f3, 0xf3f3f2f2f2f2f1f1, 0xf1f1f1f1f2f2f2f2, 0xf2f2f2f1f1f2f2f3, 0xf3f3f3f3f3f3f3f3, 0xf2f2f2f2f2f1f1f2, 
	0xf4f2f1f0f0f2f3f3, 0xf3f3f2f1f1f2f4f6, 0xf7f7f6f4f3f3f2f2, 0xf3f2f2f2f2f2f2f1, 0xf1f1f1f1f1f1f1f1, 0xf1f1f1f0f1f2f2f2, 0xf3f3f3f2f2f2f2f2, 0xf1f1f1f1f1f1f1f3, 
	0xf2f0f0f0f0f1f2f2, 0xf2f1f1f1f1f2f5f7, 0xf8f8f6f4f3f3f2f2, 0xf2f2f1f2f2f2f2f1, 0xf1f1f1f1f1f1f1f1, 0xf1f1f1f1f0f1f1f2, 0xf4f4f5f3f2f1f1f2, 0xf1f1f1f1f1f1f1f3, 
	0xf0f0f0f0f0f0f0f1, 0xf1f1f1f2f2f2f4f5, 0xf7f7f5f3f3f2f1f1, 0xf1f1f1f2f2f2f2f1, 0xf2f1f1f0f0f0f0f0, 0xf0f0f1f1f1f1f2f2, 0xf3f5f5f3f1f1f1f1, 0xf1f1f1f1f1f1f1f1, 
	0xf0f1f0f0f0f0f0f1, 0xf1f1f1f2f2f3f4f4, 0xf5f4f3f2f1f1f1f1, 0xf0f1f2f2f2f3f2f2, 0xf2f1f1f1f0f0f0f0, 0xf0f1f1f0f1f1f3f3, 0xf3f4f3f3f2f1f0f0, 0xf0f0f0f0f1f1f1f0, 
	0xf1f2f1f0f0f0f1f1, 0xf2f1f0f1f3f4f4f5, 0xf4f4f3f2f1f1f2f1, 0xf0f1f2f2f2f3f3f3, 0xf2f1f1f1f0f0f1f1, 0xf1f1f1f1f1f1f2f4, 0xf4f3f4f3f2f1f1f0, 0xf0f0f1f0f0f1f1f1, 
	0xf2f1f1f0f0f0f1f1, 0xf1f0f1f1f4f4f4f5, 0xf5f4f4f3f2f1f2f1, 0xf0f1f2f2f3f4f4f4, 0xf3f2f1f1f1f1f1f1, 0xf1f1f1f1f1f2f2f3, 0xf3f2f2f2f1f1f1f1, 0xf1f1f1f1f2f2f1f2, 
	0xf1f1f1f1f0f0f1f1, 0xf1f1f1f1f4f5f6f7, 0xf5f4f4f3f2f1f1f1, 0xf1f2f2f2f3f4f4f3, 0xf3f2f1f1f1f1f1f1, 0xf1f1f1f1f1f3f4f3, 0xf2f1f1f2f1f1f1f1, 0xf1f1f1f3f4f3f3f2, 
	0xf2f1f1f1f1f0f1f2, 0xf1f1f1f3f5f6f6f7, 0xf5f4f4f2f1f2f2f2, 0xf2f2f1f2f3f4f3f3, 0xf3f2f2f1f1f2f1f2, 0xf2f1f2f3f2f3f4f3, 0xf2f1f1f2f2f2f1f2, 0xf2f1f2f3f5f6f5f4, 
	0xf3f1f0f1f1f1f0f2, 0xf1f1f2f4f5f6f6f6, 0xf5f5f3f2f2f2f2f2, 0xf2f2f2f2f3f4f4f4, 0xf4f2f2f2f1f1f1f2, 0xf3f3f3f3f2f3f3f3, 0xf2f2f2f2f2f2f2f3, 0xf3f4f3f3f5f6f6f4, 
	0xf2f1f1f1f1f1f1f1, 0xf1f2f3f5f5f5f5f5, 0xf5f5f4f3f2f2f2f2, 0xf1f2f3f3f3f3f4f4, 0xf3f2f2f2f1f1f1f2, 0xf3f4f3f3f3f3f2f2, 0xf2f2f2f2f3f3f2f2, 0xf3f4f3f3f4f5f5f3, 
	0xf1f1f2f2f3f2f2f2, 0xf1f2f3f4f5f4f4f4, 0xf4f4f4f4f3f2f3f3, 0xf2f1f2f3f3f3f4f4, 0xf3f2f2f2f1f1f1f2, 0xf3f3f4f4f3f2f2f2, 0xf2f2f2f3f3f3f2f3, 0xf4f4f4f2f3f4f3f2, 
	0xf1f1f3f5f6f4f3f2, 0xf1f2f3f4f4f4f3f3, 0xf3f3f3f3f3f2f2f3, 0xf3f2f2f4f5f5f4f4, 0xf3f2f1f1f1f0f1f1, 0xf2f3f4f4f3f2f3f3, 0xf2f2f2f3f3f2f3f4, 0xf5f5f4f3f2f2f1f1, 
	0xf1f2f4f8f9f5f3f2, 0xf2f2f3f4f4f3f3f3, 0xf3f3f2f2f2f2f2f3, 0xf3f4f3f4f5f5f4f4, 0xf3f2f1f1f0f0f1f2, 0xf2f3f4f4f4f3f3f2, 0xf2f3f2f2f2f3f3f5, 0xf6f5f5f4f2f2f1f1, 
	0xf3f3f5f9f8f5f4f3, 0xf3f3f3f4f4f3f2f2, 0xf2f2f1f1f2f1f2f3, 0xf4f7f5f3f3f4f4f3, 0xf2f2f1f1f0f0f1f1, 0xf1f2f4f4f3f3f2f3, 0xf3f3f2f2f2f3f4f4, 0xf4f6f6f6f5f3f2f2, 
	0xf3f3f5f7f6f4f4f6, 0xf6f6f5f3f2f2f1f1, 0xf1f1f1f1f1f1f1f2, 0xf3f6f5f3f2f2f3f3, 0xf2f2f1f1f1f0f0f0, 0xf1f2f3f3f3f3f2f3, 0xf3f3f3f2f2f4f5f5, 0xf5f7f8f9f8f5f3f3, 
	0xf3f3f4f4f4f4f5fa, 0xfcf9f6f4f2f1f1f1, 0xf2f1f1f2f1f0f2f2, 0xf3f3f3f2f2f2f2f3, 0xf2f1f1f1f1f0f0f0, 0xf1f2f2f3f3f2f2f2, 0xf3f3f3f3f2f3f6f8, 0xf8f7f8f8f7f5f4f3, 
	0xf3f4f4f4f3f4f7fc, 0xfcf7f6f4f3f2f1f1, 0xf2f2f1f1f0f1f2f1, 0xf1f2f2f2f2f3f2f2, 0xf2f2f1f0f1f1f0f1, 0xf1f1f1f2f2f1f1f2, 0xf3f3f3f3f2f4f8f8, 0xf8f7f6f5f5f5f5f4, 
	0xf3f4f4f3f4f6f8f9, 0xf8f7f6f5f3f1f2f3, 0xf2f1f1f0f0f1f1f0, 0xf1f3f3f2f2f3f3f2, 0xf2f2f1f0f0f1f0f1, 0xf1f1f1f2f2f2f2f2, 0xf2f2f3f3f4f5f7f6, 0xf6f6f5f4f4f4f4f3, 
	0xf4f5f6f6f7faf8f7, 0xf7f8f6f4f3f2f2f3, 0xf1f0f0f0f1f1f1f1, 0xf1f2f3f2f2f3f3f2, 0xf2f2f1f1f0f1f0f0, 0xf1f1f2f2f2f2f2f2, 0xf2f3f4f3f4f5f4f4, 0xf4f5f4f3f3f3f3f3, 
	0xf4f6f8fafbfbf8f8, 0xf8f7f5f3f3f2f1f1, 0xf0f0f0f1f1f1f1f1, 0xf1f1f2f2f3f5f5f6, 0xf6f4f3f2f1f1f1f0, 0xf1f1f2f2f2f3f2f2, 0xf2f2f3f3f4f4f2f2, 0xf3f4f3f2f3f3f3f3, 
	0xf5f6f8fafbf8f8f7, 0xf7f5f3f3f2f2f1f0, 0xf0f1f1f1f1f1f1f1, 0xf1f1f1f2f4f6f8f9, 0xf8f6f4f3f2f1f1f1, 0xf1f1f2f2f2f3f2f2, 0xf2f2f2f3f3f3f2f2, 0xf3f4f4f3f2f2f3f3, 
	0xf5f5f6f8f8f7f6f7, 0xf6f4f3f2f2f2f1f0, 0xf0f0f1f0f0f0f0f1, 0xf2f2f2f2f4f6f9f9, 0xf9f7f5f4f2f2f2f3, 0xf2f2f2f2f2f2f2f2, 0xf3f3f2f3f3f2f2f3, 0xf3f3f2f2f2f2f3f4, 
	0xf4f4f4f5f5f5f4f5, 0xf5f4f3f2f2f2f1f1, 0xf1f0f0f0f0f0f0f1, 0xf2f2f3f4f4f5f7f7, 0xf7f8f7f5f3f3f3f3, 0xf3f2f2f2f2f2f2f1, 0xf2f2f2f2f2f2f2f2, 0xf2f2f2f2f2f3f3f4, 
	0xf3f2f3f3f3f3f3f3, 0xf4f3f2f2f2f3f3f2, 0xf1f1f0f0f1f0f1f1, 0xf3f2f3f4f4f5f6f6, 0xf7f8f6f4f4f4f4f3, 0xf3f2f2f2f2f2f2f1, 0xf1f1f1f1f1f1f2f2, 0xf2f2f2f2f2f2f3f4, 
	0xf3f2f2f1f2f2f2f3, 0xf3f3f2f2f2f2f3f3, 0xf2f2f0f1f3f2f2f3, 0xf4f3f3f4f4f3f5f6, 0xf7f6f5f4f5f6f6f4, 0xf3f2f2f2f2f2f1f2, 0xf1f0f0f1f1f1f2f1, 0xf2f2f1f1f2f1f2f3, 
	0xf2f2f1f1f2f3f3f2, 0xf2f2f2f2f1f2f4f5, 0xf4f3f1f1f4f5f4f3, 0xf5f4f3f3f4f4f3f3, 0xf5f6f6f5f6f7f6f4, 0xf4f4f3f3f2f2f2f2, 0xf1f0f0f1f1f1f2f1, 0xf1f1f0f0f1f1f2f3, 
	0xf2f2f1f2f4f3f2f1, 0xf1f2f2f2f2f2f5f7, 0xf5f3f2f2f4f4f2f2, 0xf3f3f3f3f4f4f3f3, 0xf4f5f4f5f5f6f5f4, 0xf6f5f4f3f3f2f2f1, 0xf0f1f1f0f0f1f1f2, 0xf1f0f0f0f1f0f0f1, 
	0xf1f0f1f2f3f3f1f0, 0xf2f2f2f2f2f3f4f5, 0xf5f4f2f2f3f4f3f2, 0xf1f1f3f5f4f2f2f4, 0xf4f3f2f3f4f4f5f6, 0xf7f5f4f4f3f3f2f1, 0xf0f1f1f0f0f1f2f1, 0xf0f0f0f1f2f2f0f0, 
	0xf0f0f1f4f3f2f1f0, 0xf1f2f3f3f3f2f2f3, 0xf4f3f3f3f3f5f4f2, 0xf0f1f4f5f5f3f2f3, 0xf4f3f2f2f3f3f5f8, 0xf7f5f5f5f4f3f2f1, 0xf0f0f1f0f0f1f2f0, 0xf0f1f0f1f4f4f2f1, 
	0xf1f1f1f4f4f1f1f0, 0xf0f1f2f3f3f2f2f2, 0xf2f3f6f6f3f3f3f1, 0xf1f2f4f4f5f4f2f3, 0xf4f5f3f2f2f3f4f6, 0xf5f5f5f4f3f4f2f0, 0xf0f1f1f2f2f2f1f1, 0xf1f1f2f4f4f3f3f1, 
	0xf4f3f0f1f2f2f2f1, 0xf0f0f1f2f3f2f1f2, 0xf2f3f4f3f2f1f1f1, 0xf2f3f5f5f6f5f3f4, 0xf6f6f5f3f1f1f3f4, 0xf4f4f4f3f3f2f2f1, 0xf1f1f2f2f3f2f1f1, 0xf0f0f2f3f3f3f2f2, 
	0xf3f2f1f0f0f1f4f4, 0xf1f0f0f1f1f1f1f3, 0xf3f3f2f1f1f1f1f0, 0xf1f3f6f7f7f6f5f6, 0xf7f7f4f1f1f1f2f3, 0xf3f3f2f2f2f2f3f3, 0xf2f2f2f1f2f3f2f1, 0xf1f1f2f4f3f3f2f3, 
	0xf2f2f1f0f0f2f4f4, 0xf2f0f0f0f0f0f2f2, 0xf3f2f1f0f0f1f1f1, 0xf1f3f5f7f7f5f6f7, 0xf7f6f3f2f3f2f3f4, 0xf3f2f1f0f1f3f5f4, 0xf3f2f2f2f2f3f2f2, 0xf2f1f2f3f3f3f3f3, 
	0xf3f2f1f0f1f2f2f1, 0xf2f1f0f0f0f0f2f2, 0xf1f3f3f1f0f1f2f2, 0xf2f3f5f5f4f3f4f6, 0xf6f4f4f8f8f4f4f4, 0xf4f4f3f4f3f2f4f3, 0xf3f2f2f2f2f1f1f0, 0xf1f3f3f3f3f3f5f5, 
	0xf6f3f1f1f1f2f2f0, 0xf1f1f1f0f0f1f2f3, 0xf1f3f3f1f0f1f2f2, 0xf2f3f3f3f2f1f3f5, 0xf6f5f5fafaf7f7f5, 0xf5f4f4f5f3f1f2f3, 0xf3f2f2f2f2f1f1f0, 0xf1f3f5f4f4f5f6f7, 
	0xf4f3f2f1f1f2f2f1, 0xf0f1f1f1f1f1f1f2, 0xf2f3f2f0f1f2f2f1, 0xf2f3f2f2f2f2f4f6, 0xf8f5f5f7f9f9f7f6, 0xf3f2f3f3f3f3f4f4, 0xf3f2f1f2f2f1f0f1, 0xf1f3f5f6f6f5f5f5, 
	0xf2f1f2f3f1f2f3f1, 0xf0f1f1f1f1f1f2f2, 0xf2f2f1f0f1f2f2f1, 0xf1f2f2f2f2f2f3f8, 0xf9f6f7f6f6f7f5f4, 0xf3f1f1f2f3f4f6f6, 0xf4f3f2f1f1f1f0f1, 0xf1f2f3f5f7f6f6f4, 
	0xf2f1f2f2f1f2f2f2, 0xf1f2f2f1f2f3f3f2, 0xf2f1f0f1f1f1f2f1, 0xf1f1f1f1f1f1f2f5, 0xf6f7faf9f5f3f3f3, 0xf3f2f1f2f3f5f8f8, 0xf6f3f2f1f1f1f1f1, 0xf2f2f3f4f5f6f6f3, 
	0xf1f1f1f1f1f1f2f3, 0xf2f2f2f2f2f4f3f3, 0xf3f2f1f1f1f1f1f1, 0xf1f1f0f0f1f1f2f2, 0xf4f6f8f8f5f3f2f2, 0xf2f1f2f4f4f5f7f7, 0xf5f3f1f1f1f1f2f2, 0xf2f2f3f3f3f4f3f2, 
	0xf0f1f0f0f0f1f2f2, 0xf2f3f3f3f2f3f3f3, 0xf3f2f2f1f1f1f1f2, 0xf1f1f0f0f0f1f2f3, 0xf3f3f4f4f4f4f3f1, 0xf1f1f2f6f9f7f5f5, 0xf3f1f1f1f1f2f4f5, 0xf4f2f2f2f2f3f2f1, 
	0xf0f0f1f0f0f1f1f1, 0xf2f2f3f4f3f3f3f3, 0xf2f2f2f2f2f1f1f1, 0xf2f1f1f0f0f1f2f3, 0xf2f0f1f2f3f5f4f1, 0xf1f2f2f5f8f7f5f4, 0xf2f1f1f1f2f3f4f5, 0xf4f3f3f1f2f1f1f0, 
	0xf1f1f1f0f0f0f1f1, 0xf2f2f4f4f4f3f3f4, 0xf3f2f2f2f2f2f2f1, 0xf2f2f1f0f0f0f1f1, 0xf1f0f0f1f3f4f2f1, 0xf1f3f4f4f3f4f5f3, 0xf3f3f3f2f2f3f4f3, 0xf3f3f2f1f1f1f1f1, 
	0xf2f2f0f0f0f1f2f1, 0xf2f4f4f5f5f3f4f6, 0xf5f4f3f2f2f3f3f1, 0xf1f1f1f1f0f0f0f0, 0xf0f0f1f3f5f3f1f2, 0xf2f4f4f4f3f2f4f4, 0xf4f6f6f4f3f3f4f4, 0xf3f2f1f2f1f1f1f2, 
	0xf2f1f1f0f0f0f1f1, 0xf2f3f4f5f5f4f4f6, 0xf6f5f4f4f3f3f3f3, 0xf2f1f0f1f0f0f0f0, 0xf0f0f2f3f2f2f1f4, 0xf5f4f4f4f4f4f3f3, 0xf5f8f9f6f4f5f6f6, 0xf4f2f1f1f1f1f1f2, 
	
};

u64 tex_storm_clouds_ia8[] = {
	0xccbbbbbbcccccccc, 0xccccdddddddddddd, 0xccccbbbbbbbbbbbb, 0xbbcccccccccccccc, 0xcccccccccccccccc, 0xccccbbbbbbbbbbbb, 0xccccddddccccdddd, 0xddddcccccccccdcc, 
	0xccbbbbaabbcccccc, 0xccccdddddddddddd, 0xccccbbbbbbbbbbbb, 0xbbbbcccccccccccc, 0xcccccccccccccccc, 0xccbbbbbbaabbbbbb, 0xccccddddccccdddd, 0xddddcccccccccccc, 
	0xbbbbaaaaabbbbbcc, 0xccccccdddddddddd, 0xddccccccbbbbbbbb, 0xbbbbcccccccccccc, 0xccccbbccccccccbb, 0xbbbbaaaaaabbbbbb, 0xccccccddccccdddd, 0xddddddccccccccbb, 
	0xbbbbaaaabbbbbbbb, 0xccccccccdddddddd, 0xddccccbbbbaabbbb, 0xbbbbbbcccccccccc, 0xccbbbbbbccccbbbb, 0xbbaaaaaaaabbbbcc, 0xbbccccccdcccdddd, 0xddddddddccccccbb, 
	0xbbaaaaaaaabbbbbb, 0xccbbccccdddddddd, 0xddddccbbaaaaaabb, 0xbbbbbbbbbbbbcccc, 0xccbbbbbbbbcccbbb, 0xaaaaaaaaaabbbbcc, 0xbbbcccccdddddddd, 0xddddccddddccbbbb, 
	0xaa9999aabbbbbbbb, 0xccbbcccccddddddd, 0xddddccbbbbaaaaaa, 0xbbbbbbbbbbbbbbcb, 0xccbbbbbbbbbbbbbb, 0xaaaaaa99aaaabbbb, 0xbbccccccccdddddd, 0xddddddddddccccbb, 
	0xbb9999aaaaaaaabb, 0xbbbbbbccccdddddd, 0xddccccbbbbaaaaaa, 0xbbbbbbbbbbbbbbbb, 0xbbccbbbbbbbbbbaa, 0xaa99999999aaaaab, 0xaabbccccccccdcdd, 0xddddddddddccccbb, 
	0xbb999999aaaaaabb, 0xbbbbbbbbccccddcc, 0xccccccbbaaaaaaaa, 0xaabbbbbbbbbbbbbb, 0xbbbbbbbbbbbbbbaa, 0x999999999999aabb, 0xbbbbbbccccccccdd, 0xddddddddddddcccc, 
	0xaaaa999aaaaabbbb, 0xbbbbbbbbbccccccc, 0xcccbccbbaaaaaaaa, 0xaabbbbbbbbbbbbbb, 0xaaaaaaaaaaaaaaaa, 0x999999999999aaaa, 0xbbbbbbbbbbbbcccc, 0xddddddddddddddcc, 
	0xbbaabbaaaaaaaabb, 0xbbbbbbccbcbbcccc, 0xbcbbbbbbaaaaaabb, 0xaabbbbbbbbbbbbbb, 0xaaaaaaaaaaaaaaaa, 0x99888888999999aa, 0xaabbbbbbbbbbcccc, 0xccddddddddddddcc, 
	0xbbbbbbbbaaaaaabb, 0xbbbbbbccccbbbbbb, 0xbbbbbbaaaaaaaaba, 0xaaaaaabbbbbbbbbb, 0xaaaaaaaaaaaaaa99, 0x99888888999999aa, 0xaaaabbbbcccccccc, 0xccccddddddddcccc, 
	0xccbbbbbbaaaaaaaa, 0xbbbbbbbbbbbbbbbb, 0xbbbbbbaaaaaaaaaa, 0xaaaaaaaaaabbbbbb, 0xaaaaaaaaaaaa9999, 0x998888888899aaaa, 0xaaaabbbbcbcccccc, 0xccccddddddddcccc, 
	0xccbbbbbbaaaaaaaa, 0xaabbbbbbbbbbbbbb, 0xbbbbaaaaaaaaaaaa, 0xaaaaaaaaaaaabbaa, 0xaaaaaaaaaa999988, 0x88888888889999aa, 0xaabbbbcccccccccc, 0xcccccccccccccccc, 
	0xbbccccbbaaaaaaaa, 0xaaaabbbbbbbbbbbb, 0xbbaaaaaaaaaaaaaa, 0xaaaaaaaaaaaaaaaa, 0x99999aaaaa999988, 0x88888888999999aa, 0xaabbbbcccccccccc, 0xccccccccddcccccc, 
	0xccccccbbaaaaaaaa, 0xaaaaaabbbbaaaaab, 0xaaaa9aaaaaaaaaaa, 0xaaaaaaaa99999998, 0x9999999999998888, 0x88777788889999aa, 0xaaaabbbbcccccccc, 0xcccccccccccccccc, 
	0xccbcbbbbaaaaaaaa, 0xaaaaaaaaaaaaaaaa, 0xaaaa9999aaaaaaaa, 0xaaaaaa9999998888, 0x9999999988887777, 0x777777778899aaaa, 0xaaaabbbbbbbbcccc, 0xcccccccccccccccc, 
	0xccbbbbabaa99aaaa, 0xabaaaaaaaaaaaaaa, 0xaaaaaaaaaaaabbaa, 0xaaaaaa9999888888, 0x8899888888776666, 0x666666778899aaaa, 0xaabbabbbbbbbbbbb, 0xbbbbcccccccccccc, 
	0xbbbbbbaaaaaaaaaa, 0xaabaaaaaaaaaaaaa, 0x99999999aaaabbbb, 0xaaaa9a9988888877, 0x7788777777666666, 0x66666666889999aa, 0xaababaaabbbbbbbb, 0xbbbbbbccccccccbb, 
	0xbbbbbbaaaaaaaaaa, 0xaaaaaaaaaa999999, 0x9999aaaaaabbbbbb, 0xbbaaaaaa99877777, 0x6666666666665555, 0x5566666677889999, 0x99aaaaaaaaaaaabb, 0xbbbbbbbbccbbbbbb, 
	0xbbccbbbbabbbbbaa, 0xaaaaaaaaaa999999, 0x9999aaaaaabbbbbb, 0xbbbbbbbbaa998888, 0x7755554444444455, 0x5566667777888888, 0x99999aaaaabbabbb, 0xbbbaaabbbbbbbbcc, 
	0xccccccbbbbbbbbaa, 0xaaaaaaaaaaaa9999, 0x99aaaaaabbbbbbbb, 0xbbbbbbbbaaaa9999, 0x8877676655444455, 0x6666667788888888, 0x999999aaaaabbbbb, 0xbbaaaabbbbcccccc, 
	0xdcddccccccbbbbbb, 0xbbbaaaaaaaaa9999, 0xaaaaaabbbbbcbbbb, 0xbbbbbbbbbbaaaa99, 0x9988888877664455, 0x6666777788888888, 0x88999999aaaabbbb, 0xbbbbbbbbcccccccc, 
	0xccccccccccbbbbbb, 0xbbbbaaaaaaaaaa99, 0xa9aaaabbbbbbbbbb, 0xbbbbbbbbbbbbbbaa, 0xaa99998888775544, 0x6666667787888888, 0x88889999aaaabbcc, 0xbbbbccccccccccdd, 
	0xccccccccccbbbbbb, 0xbbbbaaaaaaaaaaaa, 0xaaaaaabbbbbbbbbb, 0xbbbbbbbbbbbbbbaa, 0xaa99888888887755, 0x5566777777778888, 0x8898999999aabbbb, 0xbbbbccccdcccdddd, 
	0xccccccccccccccbb, 0xbbbbaaaaaaaaaaaa, 0xaaaaaabbbbbbbbcc, 0xccccccbbbbbbaaaa, 0xaa99888888787766, 0x6666667777778888, 0x9999999999aaaabb, 0xbbccccddddddcccc, 
	0xccccccccccccccbb, 0xbbaaaaaaaaaabbbb, 0xaaaaaabbbbbbbbcc, 0xccccccbbbbbbbbaa, 0xaaaa999988887766, 0x6666666666777788, 0x9999aa9999aabbbb, 0xccdddddddddddddd, 
	0xddcdccccccbbbbbb, 0xbbaaaaaabbbbbbaa, 0xaabbbbbbbbbbcccc, 0xccccbbcbbbbbbbbb, 0xbbaaaa9999887777, 0x7766666666667788, 0x99999999aabbbbcc, 0xccdddddddddedddd, 
	0xddddccccbbbbbbbb, 0xaaaaaabbbbbbbbab, 0xaabbcccccccccccc, 0xcccccbccccbbbbbb, 0xbbbbbbaa99999988, 0x8877667777777788, 0x88999999bbbbbbcc, 0xddddeeeeeeeeeedd, 
	0xddddccccccccbbbb, 0xaaaaaabbbbbbbbaa, 0xaabbcccccccccccc, 0xccccccccccbbcccc, 0xccccccbbaaaa9999, 0x9988888888888888, 0x888899aabbbbccdd, 0xddeeeeeeffeeeeee, 
	0xedddddccccccbbbb, 0xaaaaaabbaabbbbbb, 0xbbbbcccccccccccc, 0xccccccccbbccccdd, 0xddddddccbbbbaaaa, 0x9a99aaaa99998888, 0x999999aabbccdddd, 0xeeeeeeeeeeeeeeee, 
	0xeeeeddddddccccbb, 0xaaaaaaaaaabbbbbb, 0xbbbbcccccccccccc, 0xccccccccccccccdd, 0xddeeddddddccccbb, 0xbbaaaaaaaaaa9999, 0x9999aabbccccdddd, 0xeeeeeeeeeeeeeeee, 
	0xeeeeddddddccccbb, 0xaaaaaaaaaaaabbbb, 0xbbbbbbcccccccccc, 0xccccccccccccdddd, 0xeeeeddddddddcccc, 0xbbbbbbbbaaaaaaaa, 0x9aaaaabbccddeeee, 0xeeeefeeeeeffeeee, 
	0xeeeeddddddccccbb, 0xbbaaaaaaaabbaaaa, 0xbbbbbbcccccccccc, 0xccccccccccdddddd, 0xddddddedeeddcccc, 0xbbccccbbbbaaaaaa, 0xaaaaaabbccddedee, 0xeeeeffffffffeeee, 
	0xeeeeeeddccccccbb, 0xbbaaaa99aaaaaaaa, 0xbbbbbbcccccccccc, 0xccccccccccdddddd, 0xddeeeeeeeeddddcc, 0xccbbbbbbbbbbbbbb, 0xbbaaabbbccddddee, 0xeeeeffffffffffee, 
	0xeeeeeeddccccbbbb, 0xbbbbaa9999aaaaaa, 0xaabbbbbbbbcccccc, 0xccccccccccdddddd, 0xeeeeeeeeeedddddd, 0xddbbbbbbcccccccc, 0xbbbbbbbbccddddee, 0xeeffffffffffffff, 
	0xeeeeddddccccbbaa, 0xaaaa99899999aaaa, 0xaaaabbbbbbcccccc, 0xccccccccdddddddd, 0xeeeeeeeeeeeedddd, 0xddccbbbbbbbbcccc, 0xccbbbbccccddddee, 0xeeeeffffffeeffff, 
	0xeeddddccccbbbbbb, 0xaa999999aaaaaabb, 0xbbaabbbbbabbbbbb, 0xccccccccdddddddd, 0xeeeeeeeeeeeedddd, 0xddccccbbbbbbcccc, 0xccccbbccccddeeee, 0xeeeeffffffeeeeee, 
	0xddddccccccbbbbbb, 0xaa9999aabbbbbbbb, 0xbbbbbbbbbbbbbbcc, 0xccccccccdddddddd, 0xeeeeeeeeeeeedddd, 0xccccccccbbbbcccc, 0xccccccccccddeeee, 0xeeeeffeeeeeeeeee, 
	0xddddccccccccbbaa, 0xaaaaaaaabbcbccbb, 0xbbbbbbbbbbbbbbcc, 0xccccccccddddddde, 0xeeeeeeeeeeeeeedd, 0xddccccccbbbbcccc, 0xddddccccddddeeee, 0xeeeeeeeeeeeeeedd, 
	0xddccccbbbbbbbbaa, 0xaaaabbbbcccccccc, 0xbbbbbbbbbbcccccc, 0xddccdcccdddddddd, 0xeeeeeeeeeeeeeedd, 0xddddddddccccbbcc, 0xccccccccddddeeee, 0xeeeeeeeeeeeeeedd, 
	0xccccbbbbbbbbaaaa, 0xaabbbbcccccccccc, 0xccbbbbbbbbccccdd, 0xdddddddddddddddd, 0xddeeeeeeeeeeeeee, 0xddddddddccccbbcc, 0xccccccccccdddddd, 0xeeeeeeeeeeeedddd, 
	0xccccccbbbbaaaaaa, 0xbbbbbbbbcccccccc, 0xccbbccbbbbccdddd, 0xdddddddddddddddd, 0xddeeeeddddeeeeee, 0xeeeeddddddcccccc, 0xccbbbbccccccdddd, 0xddedeeddddddddcc, 
	0xccccbbbbaaaaaabb, 0xbbbbbbbbcccccccc, 0xccbbbbbbccccdddd, 0xddeeeeeedddddddd, 0xddddedddeeeeeeee, 0xeeeeeeeeddddcccc, 0xccccbbbbbbcccccc, 0xddddddddddddcccc, 
	0xccccbbbbaaaaaaba, 0xbbbbbbbbbccccccc, 0xbbbbbbccccccdddd, 0xeeeeeeeedddddddd, 0xddddedeeeeeeeeee, 0xeeeeeeeeeeeedddd, 0xccccccbbbbbbbbcc, 0xddddddddddddcccc, 
	0xbbbbbbbbaaaabbbb, 0xbbbbbbbbbbccbbbb, 0xbbbbbbccccdddddd, 0xddeeeeeeddeedddd, 0xddeeeeeeeeeeeeee, 0xeeeeeeeeeeeedddd, 0xccccccbbbbbbbbcc, 0xccddddddddddccbc, 
	0xbbbbbbbbbbbbbbbb, 0xbbbbbbbbbbccbbbb, 0xbbbbbbccdddddddd, 0xedeeeeeeeeeeeedd, 0xddeeeeeeeeeeeeee, 0xeeeeeeeeeeeeeedd, 0xddccccbbbbbbbbcc, 0xccddddddccccccbb, 
	0xbbbbbbbbbbbbbbbb, 0xbbbbbbbbbbbbbbbb, 0xbbbbccccccddddee, 0xeeeeeeeeeeeeeedd, 0xddeeeeeeeeeeeeee, 0xeeeeeeeeeeeeeedd, 0xddccccbbbbbbbbcc, 0xccddddccccccbbbb, 
	0xbbbbbaaabbbbbbbb, 0xbbbbbbbbbbbbbbcc, 0xccccccccccddeeee, 0xeeeeeeeeeeeeeedd, 0xddeeeeeeeeeeeeee, 0xeeeeeeeeeeeeeedd, 0xdddcccccbbbbbbcc, 0xcccccccccccccccc, 
	0xbbbbbbbbbbbbbbcc, 0xccbbbbbbbbbbcccc, 0xccddddddddddeeee, 0xeeffeeeeeeeeeedd, 0xddeeeeeeeeeeeeee, 0xeeeeeeeeeeeeeeee, 0xddddddcccccccbbb, 0xbbccccbbbbbbbbbb, 
	0xbbccccbbbbcccccc, 0xbbbbbbbbbbbbbbcb, 0xccddddddddddeeee, 0xeeffeeeeeeeeeeee, 0xeeeeeeeeeeeeeeee, 0xeeeeeeeeeeeeeeee, 0xddddccccccccccbb, 0xbbbbbbbbbbbbbbbb, 
	0xbbccccbbbbcccccc, 0xccccbbbbbbbbbbbc, 0xccddddddddeeeeee, 0xeeeeeeffeeeeeedd, 0xeeeeeeeeeeeeeeee, 0xeeeeeeeeeeeeeeee, 0xddddcccccccccccc, 0xbbbbbbbbbbbbbbbb, 
	0xbbbbccccccccccdd, 0xddccccbbbbcccccc, 0xccccddddddeeeeee, 0xeeeeeefeeeeedddd, 0xddeeeeeeeeeeeeee, 0xeeeeeeeeeedddddd, 0xddddddccccccccbb, 0xbbbbbbccbbbbbbbb, 
	0xbbcccccccccccccc, 0xcccccccccccccccc, 0xccccccddddeeeeee, 0xeeeeeeeeeedddddd, 0xddeeddddeeeeeeee, 0xeeeeeeeedddddddd, 0xddddccccccccbbbb, 0xbbbbbcbbbbbbbbbb, 
	0xbbcccccccccccccc, 0xccddcdddcccccccc, 0xccccccdddddddddd, 0xeeeeeeeededddddd, 0xddddddddddeedddd, 0xddddeeeedddddddd, 0xddccccbbccccccbb, 0xccccbbbbbbbbaabb, 
	0xbbbbcccccccccccc, 0xccccddddddddddcc, 0xccccccdddddddddd, 0xdddddddddddddddd, 0xdddddddddddddddd, 0xdddddddddddddddd, 0xccccbbbbccccbccc, 0xccccccbbbbaaaaaa, 
	0xaabbbbbbccccdddd, 0xdddddddddddddddd, 0xccccccccccdddddd, 0xddddddddddcccccc, 0xddddddccccdddddd, 0xddddddddddddddcc, 0xccccccbbbbcccccc, 0xccccccccbbbaaaaa, 
	0xaabbccccccdcdddd, 0xddddeeeeeeeedddd, 0xdcccccccccccdddd, 0xddddcccccccccccc, 0xccccccccdddddddd, 0xddddddddddddddcc, 0xccccccbbbbccccdd, 0xddddddccccccbb99, 
	0xaabbccccdddddddd, 0xddddeeeeeeeeeeee, 0xddddccbbbbcccccc, 0xcccccccccccccccc, 0xcccccccccccdccdd, 0xddddddddcccccccc, 0xccccccbbccccccdd, 0xddddddddddccbbaa, 
	0xbbbbccccdddddddd, 0xddddddeeeeeeeeee, 0xddddccccbbbbcccc, 0xcccccccccccccccc, 0xcccccccccccccccc, 0xccddcccccccccccc, 0xcccbbbbbccccccdd, 0xddddddddddddccbb, 
	0xbbbcccccdddddddd, 0xddddddddddddddee, 0xddddccccbbbbcccc, 0xccccccccdddddddd, 0xccccbbcccccccccc, 0xcccccccccccccccc, 0xccbbbbbbcccccccc, 0xddddddddddddddcc, 
	0xccccccccccdddddd, 0xdddddddddddddddd, 0xddddccccbbbbcccc, 0xccccdddddddddddd, 0xddccccbbbbcccccc, 0xcccccccccccccccc, 0xbbbbbbcccccccccc, 0xccccddddddddddcc, 
	0xccccccccccccdddd, 0xdddddddddddddddd, 0xddccccccbbbbcccc, 0xccccccdddddddddd, 0xddccccbbbbcccccc, 0xccccccccccccccbb, 0xbbccccccdccccccc, 0xccccddddddddddcc, 
	0xccbbbbbbcccccccc, 0xdddddddddddddddd, 0xccccccccbbbbbbcc, 0xccccccccdcddddcc, 0xcccccccccccccccc, 0xccccccccccbbbbbb, 0xccccccccdddddddd, 0xdddddddcddddcccc, 
	0xccbbbbbbbbcccccc, 0xccdddddddddddddd, 0xccccccccbbbbbbbb, 0xbbccccccccccdddd, 0xcccccccccccccccc, 0xccccccccbbbbbbbb, 0xccccdddddddddddd, 0xddddccccccddcccc, 
	
};

u64 tex_sky_noise_i4[] = {
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	
};

#pragma endregion Textures




#pragma region Verticies

// clouds
Vtx vtx_cull_clouds[8] = {
	{{ {-11152, 0, -10308}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-11152, 0, 10308}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-11152, 2815, 10308}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-11152, 2815, -10308}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11152, 0, -10308}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11152, 0, 10308}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11152, 2815, 10308}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11152, 2815, -10308}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_clouds[25] = {
	{{ {9658, 0, 5154}, 0, {2685, 3913}, {255, 255, 255, 0} }},
	{{ {5576, 0, 8927}, 0, {3912, 2685}, {255, 255, 255, 0} }},
	{{ {4620, 1267, 7396}, 0, {2786, 2035}, {255, 255, 255, 102} }},
	{{ {0, 0, 10308}, 0, {4362, 1008}, {255, 255, 255, 0} }},
	{{ {0, 1267, 8541}, 0, {3061, 1008}, {255, 255, 255, 102} }},
	{{ {-5576, 0, 8927}, 0, {3912, -669}, {255, 255, 255, 0} }},
	{{ {-4620, 1267, 7396}, 0, {2786, -18}, {255, 255, 255, 102} }},
	{{ {-9658, 0, 5154}, 0, {2685, -1897}, {255, 255, 255, 0} }},
	{{ {-8002, 1267, 4270}, 0, {2034, -770}, {255, 255, 255, 102} }},
	{{ {-11152, 0, 0}, 0, {1007, -2346}, {255, 255, 255, 0} }},
	{{ {-9240, 1267, 0}, 0, {1007, -1045}, {255, 255, 255, 102} }},
	{{ {-8002, 1267, -4270}, 0, {-19, -770}, {255, 255, 255, 102} }},
	{{ {-9658, 0, -5154}, 0, {-670, -1897}, {255, 255, 255, 0} }},
	{{ {-4620, 1267, -7396}, 0, {-771, -18}, {255, 255, 255, 102} }},
	{{ {-5576, 0, -8927}, 0, {-1897, -669}, {255, 255, 255, 0} }},
	{{ {0, 0, -10308}, 0, {-2347, 1008}, {255, 255, 255, 0} }},
	{{ {0, 1267, -8541}, 0, {-1046, 1008}, {255, 255, 255, 102} }},
	{{ {5576, 0, -8927}, 0, {-1897, 2685}, {255, 255, 255, 0} }},
	{{ {4620, 1267, -7396}, 0, {-771, 2035}, {255, 255, 255, 102} }},
	{{ {9658, 0, -5154}, 0, {-670, 3913}, {255, 255, 255, 0} }},
	{{ {8002, 1267, -4270}, 0, {-19, 2786}, {255, 255, 255, 102} }},
	{{ {11152, 0, 0}, 0, {1007, 4362}, {255, 255, 255, 0} }},
	{{ {9240, 1267, 0}, 0, {1007, 3061}, {255, 255, 255, 102} }},
	{{ {8002, 1267, 4270}, 0, {2034, 2786}, {255, 255, 255, 102} }},
	{{ {0, 2815, 0}, 0, {1007, 1008}, {255, 255, 255, 255} }},
};

Vtx vtx_cull_storm_clouds[8] = {
	{{ {-11940, -1353, -11036}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-11940, -1353, 11036}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-11940, 2963, 11036}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-11940, 2963, -11036}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11940, -1353, -11036}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11940, -1353, 11036}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11940, 2963, 11036}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {11940, 2963, -11036}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_storm_clouds[25] = {
	{{ {10340, -1353, 5518}, 0, {2685, 3913}, {255, 255, 255, 0} }},
	{{ {5970, -1353, 9557}, 0, {3912, 2685}, {255, 255, 255, 0} }},
	{{ {4946, 1305, 7919}, 0, {2786, 2035}, {255, 255, 255, 102} }},
	{{ {0, -1353, 11036}, 0, {4362, 1008}, {255, 255, 255, 0} }},
	{{ {0, 1305, 9144}, 0, {3061, 1008}, {255, 255, 255, 102} }},
	{{ {-5970, -1353, 9557}, 0, {3912, -669}, {255, 255, 255, 0} }},
	{{ {-4946, 1305, 7919}, 0, {2786, -18}, {255, 255, 255, 102} }},
	{{ {-10340, -1353, 5518}, 0, {2685, -1897}, {255, 255, 255, 0} }},
	{{ {-8568, 1305, 4572}, 0, {2034, -770}, {255, 255, 255, 102} }},
	{{ {-11940, -1353, 0}, 0, {1007, -2346}, {255, 255, 255, 0} }},
	{{ {-9893, 1305, 0}, 0, {1007, -1045}, {255, 255, 255, 102} }},
	{{ {-8568, 1305, -4572}, 0, {-19, -770}, {255, 255, 255, 102} }},
	{{ {-10340, -1353, -5518}, 0, {-670, -1897}, {255, 255, 255, 0} }},
	{{ {-4946, 1305, -7919}, 0, {-771, -18}, {255, 255, 255, 102} }},
	{{ {-5970, -1353, -9557}, 0, {-1897, -669}, {255, 255, 255, 0} }},
	{{ {0, -1353, -11036}, 0, {-2347, 1008}, {255, 255, 255, 0} }},
	{{ {0, 1305, -9144}, 0, {-1046, 1008}, {255, 255, 255, 102} }},
	{{ {5970, -1353, -9557}, 0, {-1897, 2685}, {255, 255, 255, 0} }},
	{{ {4946, 1305, -7919}, 0, {-771, 2035}, {255, 255, 255, 102} }},
	{{ {10340, -1353, -5518}, 0, {-670, 3913}, {255, 255, 255, 0} }},
	{{ {8568, 1305, -4572}, 0, {-19, 2786}, {255, 255, 255, 102} }},
	{{ {11940, -1353, 0}, 0, {1007, 4362}, {255, 255, 255, 0} }},
	{{ {9893, 1305, 0}, 0, {1007, 3061}, {255, 255, 255, 102} }},
	{{ {8568, 1305, 4572}, 0, {2034, 2786}, {255, 255, 255, 102} }},
	{{ {0, 2963, 0}, 0, {1007, 1008}, {255, 255, 255, 255} }},
};


// fine sky domes
Vtx vtx_cull_sky_fine_day[8] = {
	{{ {-15500, -6600, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15500, -6600, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15500, 11700, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15500, 11700, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, -6600, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, -6600, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, 11700, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, 11700, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_fine_day[32] = {
	{{ {-13800, 0, -8700}, 0, {226, 176}, {215, 212, 207, 255} }},
	{{ {-13200, 7200, 0}, 0, {221, 112}, {106, 161, 191, 255} }},
	{{ {-15500, 0, 0}, 0, {240, 112}, {221, 217, 206, 255} }},
	{{ {-8900, 8000, -8400}, 0, {185, 174}, {82, 158, 192, 255} }},
	{{ {-7700, 0, -14700}, 0, {176, 221}, {202, 200, 197, 255} }},
	{{ {-8200, -5900, -12500}, 0, {180, 204}, {1, 116, 163, 255} }},
	{{ {-13200, -6100, 0}, 0, {221, 112}, {1, 116, 163, 255} }},
	{{ {-13800, 0, 8700}, 0, {226, 48}, {215, 212, 207, 255} }},
	{{ {-8900, 7900, 8400}, 0, {185, 50}, {82, 158, 192, 255} }},
	{{ {-8000, 10300, 0}, 0, {178, 112}, {1, 116, 163, 255} }},
	{{ {0, 11700, 0}, 0, {112, 112}, {0, 112, 160, 255} }},
	{{ {0, 8100, -12500}, 0, {112, 204}, {76, 141, 185, 255} }},
	{{ {0, 0, -17300}, 0, {112, 240}, {173, 187, 191, 255} }},
	{{ {0, -6000, -14900}, 0, {112, 222}, {1, 116, 163, 255} }},
	{{ {0, -6600, 0}, 0, {112, 112}, {0, 112, 160, 255} }},
	{{ {-8200, -6000, 12500}, 0, {180, 20}, {1, 116, 163, 255} }},
	{{ {-7700, 0, 14700}, 0, {176, 3}, {202, 200, 197, 255} }},
	{{ {0, 8000, 12500}, 0, {112, 20}, {76, 141, 185, 255} }},
	{{ {8900, 7900, 8400}, 0, {39, 50}, {82, 158, 192, 255} }},
	{{ {7800, 10300, 0}, 0, {48, 112}, {1, 116, 163, 255} }},
	{{ {8900, 8000, -8400}, 0, {39, 174}, {82, 158, 192, 255} }},
	{{ {7700, 0, -14700}, 0, {48, 221}, {202, 200, 197, 255} }},
	{{ {8200, -5900, -12500}, 0, {44, 204}, {1, 116, 163, 255} }},
	{{ {13200, -6100, 0}, 0, {3, 112}, {1, 116, 163, 255} }},
	{{ {8200, -6000, 12500}, 0, {44, 20}, {1, 116, 163, 255} }},
	{{ {0, -6100, 14900}, 0, {112, 2}, {1, 116, 163, 255} }},
	{{ {0, 0, 17300}, 0, {112, -16}, {173, 187, 191, 255} }},
	{{ {7700, 0, 14700}, 0, {48, 3}, {202, 200, 197, 255} }},
	{{ {14100, 0, 8700}, 0, {-4, 48}, {215, 212, 207, 255} }},
	{{ {13200, 7200, 0}, 0, {3, 112}, {106, 161, 191, 255} }},
	{{ {14100, 0, -8700}, 0, {-4, 176}, {215, 212, 207, 255} }},
	{{ {15500, 0, 0}, 0, {-16, 112}, {221, 217, 206, 255} }},
};


Vtx vtx_cull_sky_fine_night[8] = {
	{{ {-15500, -6600, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15500, -6600, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15500, 11700, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15500, 11700, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, -6600, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, -6600, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, 11700, 17300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15500, 11700, -17300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_fine_night[32] = {
	{{ {-13800, 0, -8700}, 0, {226, 176}, {137, 132, 172, 255} }},
	{{ {-13200, 7200, 0}, 0, {221, 112}, {68, 70, 121, 255} }},
	{{ {-15500, 0, 0}, 0, {240, 112}, {172, 167, 203, 255} }},
	{{ {-8900, 8000, -8400}, 0, {185, 174}, {48, 64, 113, 255} }},
	{{ {-7700, 0, -14700}, 0, {176, 221}, {106, 100, 145, 255} }},
	{{ {-8200, -5900, -12500}, 0, {180, 204}, {16, 22, 47, 255} }},
	{{ {-13200, -6100, 0}, 0, {221, 112}, {16, 22, 47, 255} }},
	{{ {-13800, 0, 8700}, 0, {226, 48}, {137, 132, 172, 255} }},
	{{ {-8900, 7900, 8400}, 0, {185, 50}, {48, 64, 113, 255} }},
	{{ {-8000, 10300, 0}, 0, {178, 112}, {19, 34, 71, 255} }},
	{{ {0, 11700, 0}, 0, {112, 112}, {16, 22, 47, 255} }},
	{{ {0, 8100, -12500}, 0, {112, 204}, {48, 64, 113, 255} }},
	{{ {0, 0, -17300}, 0, {112, 240}, {86, 82, 126, 255} }},
	{{ {0, -6000, -14900}, 0, {112, 222}, {16, 22, 47, 255} }},
	{{ {0, -6600, 0}, 0, {112, 112}, {7, 11, 26, 255} }},
	{{ {-8200, -6000, 12500}, 0, {180, 20}, {16, 22, 47, 255} }},
	{{ {-7700, 0, 14700}, 0, {176, 3}, {106, 100, 145, 255} }},
	{{ {0, 8000, 12500}, 0, {112, 20}, {48, 64, 113, 255} }},
	{{ {8900, 7900, 8400}, 0, {39, 50}, {48, 64, 113, 255} }},
	{{ {7800, 10300, 0}, 0, {48, 112}, {19, 34, 71, 255} }},
	{{ {8900, 8000, -8400}, 0, {39, 174}, {48, 64, 113, 255} }},
	{{ {7700, 0, -14700}, 0, {48, 221}, {106, 100, 145, 255} }},
	{{ {8200, -5900, -12500}, 0, {44, 204}, {16, 22, 47, 255} }},
	{{ {13200, -6100, 0}, 0, {3, 112}, {16, 22, 47, 255} }},
	{{ {8200, -6000, 12500}, 0, {44, 20}, {16, 22, 47, 255} }},
	{{ {0, -6100, 14900}, 0, {112, 2}, {16, 22, 47, 255} }},
	{{ {0, 0, 17300}, 0, {112, -16}, {86, 82, 126, 255} }},
	{{ {7700, 0, 14700}, 0, {48, 3}, {106, 100, 145, 255} }},
	{{ {14100, 0, 8700}, 0, {-4, 48}, {137, 132, 172, 255} }},
	{{ {13200, 7200, 0}, 0, {3, 112}, {68, 70, 121, 255} }},
	{{ {14100, 0, -8700}, 0, {-4, 176}, {137, 132, 172, 255} }},
	{{ {15500, 0, 0}, 0, {-16, 112}, {172, 167, 203, 255} }},
};


Vtx vtx_cull_sky_fine_sunrise[8] = {
	{{ {-13678, -5560, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-13678, -5560, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-13678, 9452, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-13678, 9452, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, -5560, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, -5560, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, 9452, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, 9452, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_fine_sunrise[31] = {
	{{ {0, -5560, 0}, 0, {112, 112}, {39, 42, 70, 255} }},
	{{ {0, -5560, -12990}, 0, {240, 112}, {94, 92, 129, 255} }},
	{{ {-9675, -5560, -8314}, 0, {194, 21}, {94, 92, 129, 255} }},
	{{ {9675, -5560, -6495}, 0, {176, 203}, {183, 139, 195, 255} }},
	{{ {12344, -5560, 0}, 0, {112, 228}, {183, 139, 195, 255} }},
	{{ {9675, -5560, 6495}, 0, {48, 203}, {183, 139, 195, 255} }},
	{{ {0, -5560, 12990}, 0, {-16, 112}, {94, 92, 129, 255} }},
	{{ {-9675, -5560, 8314}, 0, {30, 21}, {94, 92, 129, 255} }},
	{{ {-11009, -5560, 0}, 0, {112, 9}, {94, 92, 129, 255} }},
	{{ {-13678, 0, 0}, 0, {112, -16}, {116, 100, 151, 255} }},
	{{ {-4782, 0, -11821}, 0, {228, 67}, {123, 111, 153, 255} }},
	{{ {6895, 0, -11821}, 0, {228, 177}, {238, 171, 184, 255} }},
	{{ {10565, 0, -8443}, 0, {195, 211}, {226, 184, 150, 255} }},
	{{ {13122, -3559, -4417}, 0, {156, 235}, {238, 171, 184, 255} }},
	{{ {13122, -3559, 4417}, 0, {68, 235}, {238, 171, 184, 255} }},
	{{ {10565, 0, 8443}, 0, {29, 211}, {226, 184, 150, 255} }},
	{{ {6895, 0, 11821}, 0, {-4, 177}, {238, 171, 184, 255} }},
	{{ {-4782, 0, 11821}, 0, {-4, 67}, {123, 111, 153, 255} }},
	{{ {-9675, 6784, 0}, 0, {112, 21}, {76, 107, 190, 255} }},
	{{ {0, 3225, 10911}, 0, {4, 112}, {76, 107, 190, 255} }},
	{{ {0, 9452, 0}, 0, {112, 112}, {62, 88, 162, 255} }},
	{{ {0, 3225, -10911}, 0, {220, 112}, {76, 107, 190, 255} }},
	{{ {6228, 4448, -9742}, 0, {208, 170}, {117, 114, 179, 255} }},
	{{ {11454, 2447, -6495}, 0, {176, 219}, {183, 139, 195, 255} }},
	{{ {13678, 0, 0}, 0, {112, 240}, {229, 217, 165, 255} }},
	{{ {11454, 2447, 6495}, 0, {48, 219}, {183, 139, 195, 255} }},
	{{ {6228, 4448, 9742}, 0, {16, 170}, {117, 114, 179, 255} }},
	{{ {9341, 8229, 0}, 0, {112, 199}, {73, 90, 162, 255} }},
	{{ {11343, 4448, -5456}, 0, {166, 218}, {145, 123, 185, 255} }},
	{{ {12344, 4559, 0}, 0, {112, 228}, {183, 139, 195, 255} }},
	{{ {11343, 4448, 5456}, 0, {58, 218}, {145, 123, 185, 255} }},
};


Vtx vtx_cull_sky_fine_sunset[8] = {
	{{ {-13678, -5560, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-13678, -5560, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-13678, 9452, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-13678, 9452, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, -5560, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, -5560, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, 9452, 12990}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {13678, 9452, -12990}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_fine_sunset[31] = {
	{{ {0, -5560, 0}, 0, {112, 112}, {50, 49, 80, 255} }},
	{{ {0, -5560, 12990}, 0, {240, 112}, {121, 70, 82, 255} }},
	{{ {9675, -5560, 8314}, 0, {194, 21}, {121, 70, 82, 255} }},
	{{ {-9675, -5560, 6495}, 0, {176, 203}, {186, 88, 67, 255} }},
	{{ {-12344, -5560, 0}, 0, {112, 228}, {219, 117, 81, 255} }},
	{{ {-9675, -5560, -6495}, 0, {48, 203}, {186, 88, 67, 255} }},
	{{ {0, -5560, -12990}, 0, {-16, 112}, {121, 70, 82, 255} }},
	{{ {9675, -5560, -8314}, 0, {30, 21}, {121, 70, 82, 255} }},
	{{ {11009, -5560, 0}, 0, {112, 9}, {121, 70, 82, 255} }},
	{{ {13678, 0, 0}, 0, {112, -16}, {140, 78, 73, 255} }},
	{{ {4782, 0, 11821}, 0, {228, 67}, {186, 88, 67, 255} }},
	{{ {-6895, 0, 11821}, 0, {228, 177}, {219, 117, 81, 255} }},
	{{ {-10565, 0, 8443}, 0, {195, 211}, {254, 178, 85, 255} }},
	{{ {-13122, -3559, 4417}, 0, {156, 235}, {254, 178, 85, 255} }},
	{{ {-13122, -3559, -4417}, 0, {68, 235}, {254, 178, 85, 255} }},
	{{ {-10565, 0, -8443}, 0, {29, 211}, {254, 178, 85, 255} }},
	{{ {-6895, 0, -11821}, 0, {-4, 177}, {219, 117, 81, 255} }},
	{{ {4782, 0, -11821}, 0, {-4, 67}, {186, 88, 67, 255} }},
	{{ {9675, 6784, 0}, 0, {112, 21}, {138, 123, 142, 255} }},
	{{ {0, 3225, -10911}, 0, {4, 112}, {138, 123, 142, 255} }},
	{{ {0, 9452, 0}, 0, {112, 112}, {50, 49, 80, 255} }},
	{{ {0, 3225, 10911}, 0, {220, 112}, {138, 123, 142, 255} }},
	{{ {-6228, 4448, 9742}, 0, {208, 170}, {155, 109, 112, 255} }},
	{{ {-11454, 2447, 6495}, 0, {176, 219}, {255, 200, 119, 255} }},
	{{ {-13678, 0, 0}, 0, {112, 240}, {255, 235, 141, 255} }},
	{{ {-11454, 2447, -6495}, 0, {48, 219}, {255, 200, 119, 255} }},
	{{ {-6228, 4448, -9742}, 0, {16, 170}, {155, 109, 112, 255} }},
	{{ {-9341, 8229, 0}, 0, {112, 199}, {118, 105, 127, 255} }},
	{{ {-11343, 4448, 5456}, 0, {166, 218}, {218, 175, 160, 255} }},
	{{ {-12344, 4559, 0}, 0, {112, 228}, {240, 199, 169, 255} }},
	{{ {-11343, 4448, -5456}, 0, {58, 218}, {218, 175, 160, 255} }},
};


// storm sky domes
Vtx vtx_cull_sky_storm_day[8] = {
	{{ {-15981, -6843, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15981, -6843, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15981, 12024, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15981, 12024, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, -6843, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, -6843, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, 12024, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, 12024, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_storm_day[32] = {
	{{ {-14228, -39, -8970}, 0, {226, 176}, {98, 111, 129, 255} }},
	{{ {-13610, 7385, 0}, 0, {221, 112}, {101, 116, 136, 255} }},
	{{ {-15981, -39, 0}, 0, {240, 112}, {101, 110, 127, 255} }},
	{{ {-9176, 8209, -8661}, 0, {185, 174}, {127, 142, 159, 255} }},
	{{ {-7939, -39, -15156}, 0, {176, 221}, {82, 97, 115, 255} }},
	{{ {-8455, -6122, -12888}, 0, {180, 204}, {63, 76, 92, 255} }},
	{{ {-13610, -6328, 0}, 0, {221, 112}, {63, 76, 92, 255} }},
	{{ {-14228, -39, 8970}, 0, {226, 48}, {98, 111, 129, 255} }},
	{{ {-9176, 8106, 8661}, 0, {185, 50}, {127, 142, 159, 255} }},
	{{ {-8249, 10581, 0}, 0, {178, 112}, {159, 168, 183, 255} }},
	{{ {0, 12024, 0}, 0, {112, 112}, {197, 205, 214, 255} }},
	{{ {0, 8313, -12888}, 0, {112, 204}, {111, 126, 146, 255} }},
	{{ {0, -39, -17837}, 0, {112, 240}, {74, 91, 111, 255} }},
	{{ {0, -6225, -15362}, 0, {112, 222}, {63, 76, 92, 255} }},
	{{ {0, -6843, 0}, 0, {112, 112}, {43, 59, 74, 255} }},
	{{ {-8455, -6225, 12888}, 0, {180, 20}, {63, 76, 92, 255} }},
	{{ {-7939, -39, 15156}, 0, {176, 3}, {82, 97, 115, 255} }},
	{{ {0, 8209, 12888}, 0, {112, 20}, {111, 126, 146, 255} }},
	{{ {9176, 8106, 8661}, 0, {39, 50}, {127, 142, 159, 255} }},
	{{ {8042, 10581, 0}, 0, {48, 112}, {159, 168, 183, 255} }},
	{{ {9176, 8209, -8661}, 0, {39, 174}, {127, 142, 159, 255} }},
	{{ {7938, -39, -15156}, 0, {48, 221}, {82, 97, 115, 255} }},
	{{ {8454, -6122, -12888}, 0, {44, 204}, {63, 76, 92, 255} }},
	{{ {13609, -6328, 0}, 0, {3, 112}, {63, 76, 92, 255} }},
	{{ {8454, -6225, 12888}, 0, {44, 20}, {63, 76, 92, 255} }},
	{{ {0, -6328, 15362}, 0, {112, 2}, {63, 76, 92, 255} }},
	{{ {0, -39, 17837}, 0, {112, -16}, {74, 91, 111, 255} }},
	{{ {7938, -39, 15156}, 0, {48, 3}, {82, 97, 115, 255} }},
	{{ {14537, -39, 8970}, 0, {-4, 48}, {98, 111, 129, 255} }},
	{{ {13609, 7385, 0}, 0, {3, 112}, {101, 116, 136, 255} }},
	{{ {14537, -39, -8970}, 0, {-4, 176}, {98, 111, 129, 255} }},
	{{ {15980, -39, 0}, 0, {-16, 112}, {101, 110, 127, 255} }},
};

Vtx vtx_cull_sky_storm_night[8] = {
	{{ {-15981, -6843, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15981, -6843, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15981, 12024, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-15981, 12024, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, -6843, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, -6843, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, 12024, 17837}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {15980, 12024, -17837}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_storm_night[32] = {
	{{ {-14228, -39, -8970}, 0, {226, 176}, {67, 78, 79, 255} }},
	{{ {-13610, 7385, 0}, 0, {221, 112}, {32, 47, 55, 255} }},
	{{ {-15981, -39, 0}, 0, {240, 112}, {83, 90, 89, 255} }},
	{{ {-9176, 8209, -8661}, 0, {185, 174}, {25, 37, 47, 255} }},
	{{ {-7939, -39, -15156}, 0, {176, 221}, {98, 107, 100, 255} }},
	{{ {-8455, -6122, -12888}, 0, {180, 204}, {59, 68, 71, 255} }},
	{{ {-13610, -6328, 0}, 0, {221, 112}, {59, 68, 71, 255} }},
	{{ {-14228, -39, 8970}, 0, {226, 48}, {67, 78, 79, 255} }},
	{{ {-9176, 8106, 8661}, 0, {185, 50}, {25, 37, 47, 255} }},
	{{ {-8249, 10581, 0}, 0, {178, 112}, {32, 46, 55, 255} }},
	{{ {0, 12024, 0}, 0, {112, 112}, {16, 24, 30, 255} }},
	{{ {0, 8313, -12888}, 0, {112, 204}, {48, 64, 76, 255} }},
	{{ {0, -39, -17837}, 0, {112, 240}, {82, 93, 94, 255} }},
	{{ {0, -6225, -15362}, 0, {112, 222}, {59, 68, 71, 255} }},
	{{ {0, -6843, 0}, 0, {112, 112}, {23, 32, 36, 255} }},
	{{ {-8455, -6225, 12888}, 0, {180, 20}, {59, 68, 71, 255} }},
	{{ {-7939, -39, 15156}, 0, {176, 3}, {98, 107, 100, 255} }},
	{{ {0, 8209, 12888}, 0, {112, 20}, {48, 64, 76, 255} }},
	{{ {9176, 8106, 8661}, 0, {39, 50}, {25, 37, 47, 255} }},
	{{ {8042, 10581, 0}, 0, {48, 112}, {32, 46, 55, 255} }},
	{{ {9176, 8209, -8661}, 0, {39, 174}, {25, 37, 47, 255} }},
	{{ {7938, -39, -15156}, 0, {48, 221}, {98, 107, 100, 255} }},
	{{ {8454, -6122, -12888}, 0, {44, 204}, {59, 68, 71, 255} }},
	{{ {13609, -6328, 0}, 0, {3, 112}, {59, 68, 71, 255} }},
	{{ {8454, -6225, 12888}, 0, {44, 20}, {59, 68, 71, 255} }},
	{{ {0, -6328, 15362}, 0, {112, 2}, {59, 68, 71, 255} }},
	{{ {0, -39, 17837}, 0, {112, -16}, {82, 93, 94, 255} }},
	{{ {7938, -39, 15156}, 0, {48, 3}, {98, 107, 100, 255} }},
	{{ {14537, -39, 8970}, 0, {-4, 48}, {67, 78, 79, 255} }},
	{{ {13609, 7385, 0}, 0, {3, 112}, {32, 47, 55, 255} }},
	{{ {14537, -39, -8970}, 0, {-4, 176}, {67, 78, 79, 255} }},
	{{ {15980, -39, 0}, 0, {-16, 112}, {83, 90, 89, 255} }},
};


Vtx vtx_cull_sky_storm_sunrise[8] = {
	{{ {-14605, -5854, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-14605, -5854, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-14605, 9947, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-14605, 9947, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14188, -5854, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14188, -5854, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14188, 9947, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14188, 9947, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_storm_sunrise[31] = {
	{{ {-208, -5854, 0}, 0, {112, 112}, {39, 42, 70, 255} }},
	{{ {-208, -5854, -13672}, 0, {240, 112}, {94, 92, 129, 255} }},
	{{ {-10391, -5854, -8750}, 0, {194, 21}, {94, 92, 129, 255} }},
	{{ {9975, -5854, -6836}, 0, {176, 203}, {183, 139, 195, 255} }},
	{{ {12784, -5854, 0}, 0, {112, 228}, {183, 139, 195, 255} }},
	{{ {9975, -5854, 6836}, 0, {48, 203}, {183, 139, 195, 255} }},
	{{ {-208, -5854, 13672}, 0, {-16, 112}, {94, 92, 129, 255} }},
	{{ {-10391, -5854, 8750}, 0, {30, 21}, {94, 92, 129, 255} }},
	{{ {-11796, -5854, 0}, 0, {112, 9}, {94, 92, 129, 255} }},
	{{ {-14605, -2, 0}, 0, {112, -16}, {35, 40, 54, 255} }},
	{{ {-5241, -2, -12441}, 0, {228, 67}, {53, 59, 73, 255} }},
	{{ {7048, -2, -12441}, 0, {228, 177}, {75, 73, 83, 255} }},
	{{ {10911, -2, -8887}, 0, {195, 211}, {175, 118, 94, 255} }},
	{{ {13603, -3747, -4648}, 0, {156, 235}, {238, 171, 184, 255} }},
	{{ {13603, -3747, 4648}, 0, {68, 235}, {238, 171, 184, 255} }},
	{{ {10911, -2, 8887}, 0, {29, 211}, {175, 118, 94, 255} }},
	{{ {7048, -2, 12441}, 0, {-4, 177}, {75, 73, 83, 255} }},
	{{ {-5241, -2, 12441}, 0, {-4, 67}, {53, 59, 73, 255} }},
	{{ {-10391, 7138, 0}, 0, {112, 21}, {13, 27, 54, 255} }},
	{{ {-208, 3393, 11484}, 0, {4, 112}, {48, 43, 65, 255} }},
	{{ {-208, 9947, 0}, 0, {112, 112}, {17, 15, 36, 255} }},
	{{ {-208, 3393, -11484}, 0, {220, 112}, {48, 43, 65, 255} }},
	{{ {6346, 4680, -10254}, 0, {208, 170}, {50, 55, 83, 255} }},
	{{ {11847, 2573, -6836}, 0, {176, 219}, {145, 120, 110, 255} }},
	{{ {14188, -2, 0}, 0, {112, 240}, {240, 145, 103, 255} }},
	{{ {11847, 2573, 6836}, 0, {48, 219}, {145, 120, 110, 255} }},
	{{ {6346, 4680, 10254}, 0, {16, 170}, {50, 55, 83, 255} }},
	{{ {9623, 8660, 0}, 0, {112, 199}, {68, 72, 100, 255} }},
	{{ {11730, 4680, -5742}, 0, {166, 218}, {101, 110, 117, 255} }},
	{{ {12784, 4797, 0}, 0, {112, 228}, {191, 162, 138, 255} }},
	{{ {11730, 4680, 5742}, 0, {58, 218}, {101, 110, 117, 255} }},
};


Vtx vtx_cull_sky_storm_sunset[8] = {
	{{ {-14188, -5854, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-14188, -5854, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-14188, 9947, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-14188, 9947, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14605, -5854, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14605, -5854, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14605, 9947, 13672}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {14605, 9947, -13672}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx vtx_sky_storm_sunset[31] = {
	{{ {208, -5854, 0}, 0, {112, 112}, {39, 42, 70, 255} }},
	{{ {208, -5854, 13672}, 0, {240, 112}, {34, 30, 41, 255} }},
	{{ {10391, -5854, 8750}, 0, {194, 21}, {34, 30, 41, 255} }},
	{{ {-9975, -5854, 6836}, 0, {176, 203}, {121, 80, 67, 255} }},
	{{ {-12784, -5854, 0}, 0, {112, 228}, {121, 80, 67, 255} }},
	{{ {-9975, -5854, -6836}, 0, {48, 203}, {121, 80, 67, 255} }},
	{{ {208, -5854, -13672}, 0, {-16, 112}, {34, 30, 41, 255} }},
	{{ {10391, -5854, -8750}, 0, {30, 21}, {34, 30, 41, 255} }},
	{{ {11796, -5854, 0}, 0, {112, 9}, {34, 30, 41, 255} }},
	{{ {14605, -2, 0}, 0, {112, -16}, {68, 49, 41, 255} }},
	{{ {5241, -2, 12441}, 0, {228, 67}, {73, 50, 40, 255} }},
	{{ {-7048, -2, 12441}, 0, {228, 177}, {132, 82, 51, 255} }},
	{{ {-10911, -2, 8887}, 0, {195, 211}, {167, 110, 69, 255} }},
	{{ {-13603, -3747, 4648}, 0, {156, 235}, {164, 103, 62, 255} }},
	{{ {-13603, -3747, -4648}, 0, {68, 235}, {164, 103, 62, 255} }},
	{{ {-10911, -2, -8887}, 0, {29, 211}, {167, 110, 69, 255} }},
	{{ {-7048, -2, -12441}, 0, {-4, 177}, {132, 82, 51, 255} }},
	{{ {5241, -2, -12441}, 0, {-4, 67}, {73, 50, 40, 255} }},
	{{ {10391, 7138, 0}, 0, {112, 21}, {55, 40, 36, 255} }},
	{{ {208, 3393, -11484}, 0, {4, 112}, {103, 80, 64, 255} }},
	{{ {208, 9947, 0}, 0, {112, 112}, {34, 30, 41, 255} }},
	{{ {208, 3393, 11484}, 0, {220, 112}, {103, 80, 64, 255} }},
	{{ {-6346, 4680, 10254}, 0, {208, 170}, {147, 122, 97, 255} }},
	{{ {-11847, 2573, 6836}, 0, {176, 219}, {163, 136, 109, 255} }},
	{{ {-14188, -2, 0}, 0, {112, 240}, {228, 152, 76, 255} }},
	{{ {-11847, 2573, -6836}, 0, {48, 219}, {163, 136, 109, 255} }},
	{{ {-6346, 4680, -10254}, 0, {16, 170}, {147, 122, 97, 255} }},
	{{ {-9623, 8660, 0}, 0, {112, 199}, {77, 59, 58, 255} }},
	{{ {-11730, 4680, 5742}, 0, {166, 218}, {167, 138, 118, 255} }},
	{{ {-12784, 4797, 0}, 0, {112, 228}, {191, 162, 138, 255} }},
	{{ {-11730, 4680, -5742}, 0, {58, 218}, {167, 138, 118, 255} }},
};

#pragma endregion Verticies




#pragma region Triangles

// clouds
Gfx tri_clouds[] = {
	gsSPVertex(vtx_clouds + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(2, 3, 4, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
	gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(12, 14, 13, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 15, 16, 0, 16, 15, 17, 0),
	gsSP2Triangles(16, 17, 18, 0, 18, 17, 19, 0),
	gsSP2Triangles(18, 19, 20, 0, 20, 19, 21, 0),
	gsSP2Triangles(20, 21, 22, 0, 22, 21, 0, 0),
	gsSP2Triangles(22, 0, 23, 0, 0, 2, 23, 0),
	gsSP2Triangles(2, 24, 23, 0, 2, 4, 24, 0),
	gsSP2Triangles(4, 6, 24, 0, 6, 8, 24, 0),
	gsSP2Triangles(8, 10, 24, 0, 11, 24, 10, 0),
	gsSP2Triangles(13, 24, 11, 0, 13, 16, 24, 0),
	gsSP2Triangles(16, 18, 24, 0, 18, 20, 24, 0),
	gsSP2Triangles(20, 22, 24, 0, 22, 23, 24, 0),
	gsSPEndDisplayList(),
};

Gfx tri_storm_clouds[] = {
	gsSPVertex(vtx_storm_clouds + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(2, 3, 4, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
	gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(12, 14, 13, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 15, 16, 0, 16, 15, 17, 0),
	gsSP2Triangles(16, 17, 18, 0, 18, 17, 19, 0),
	gsSP2Triangles(18, 19, 20, 0, 20, 19, 21, 0),
	gsSP2Triangles(20, 21, 22, 0, 22, 21, 0, 0),
	gsSP2Triangles(22, 0, 23, 0, 0, 2, 23, 0),
	gsSP2Triangles(2, 24, 23, 0, 2, 4, 24, 0),
	gsSP2Triangles(4, 6, 24, 0, 6, 8, 24, 0),
	gsSP2Triangles(8, 10, 24, 0, 11, 24, 10, 0),
	gsSP2Triangles(13, 24, 11, 0, 13, 16, 24, 0),
	gsSP2Triangles(16, 18, 24, 0, 18, 20, 24, 0),
	gsSP2Triangles(20, 22, 24, 0, 22, 23, 24, 0),
	gsSPEndDisplayList(),
};

// fine sky domes
Gfx tri_sky_fine_day[] = {
	gsSPVertex(vtx_sky_fine_day + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 2, 6, 0, 0),
	gsSP2Triangles(7, 6, 2, 0, 1, 7, 2, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 9, 8, 0),
	gsSP2Triangles(1, 3, 9, 0, 9, 3, 10, 0),
	gsSP2Triangles(10, 3, 11, 0, 3, 4, 11, 0),
	gsSP2Triangles(4, 12, 11, 0, 4, 5, 12, 0),
	gsSP2Triangles(5, 13, 12, 0, 13, 5, 14, 0),
	gsSP2Triangles(5, 6, 14, 0, 15, 14, 6, 0),
	gsSP2Triangles(7, 15, 6, 0, 7, 16, 15, 0),
	gsSP2Triangles(7, 8, 16, 0, 8, 17, 16, 0),
	gsSP2Triangles(10, 17, 8, 0, 8, 9, 10, 0),
	gsSP2Triangles(10, 18, 17, 0, 19, 18, 10, 0),
	gsSP2Triangles(20, 19, 10, 0, 10, 11, 20, 0),
	gsSP2Triangles(20, 11, 21, 0, 21, 11, 12, 0),
	gsSP2Triangles(21, 12, 22, 0, 22, 12, 13, 0),
	gsSP2Triangles(13, 14, 22, 0, 22, 14, 23, 0),
	gsSP2Triangles(24, 23, 14, 0, 25, 24, 14, 0),
	gsSP2Triangles(25, 14, 15, 0, 15, 26, 25, 0),
	gsSP2Triangles(16, 26, 15, 0, 16, 17, 26, 0),
	gsSP2Triangles(27, 26, 17, 0, 18, 27, 17, 0),
	gsSP2Triangles(28, 27, 18, 0, 29, 28, 18, 0),
	gsSP2Triangles(29, 18, 19, 0, 29, 19, 20, 0),
	gsSP2Triangles(29, 20, 30, 0, 30, 20, 21, 0),
	gsSP2Triangles(30, 21, 22, 0, 30, 22, 23, 0),
	gsSP2Triangles(30, 23, 31, 0, 31, 23, 28, 0),
	gsSP2Triangles(28, 23, 24, 0, 28, 24, 27, 0),
	gsSP2Triangles(27, 24, 26, 0, 24, 25, 26, 0),
	gsSP2Triangles(28, 29, 31, 0, 29, 30, 31, 0),
	gsSPEndDisplayList(),
};

Gfx tri_sky_fine_night[] = {
	gsSPVertex(vtx_sky_fine_night + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 2, 6, 0, 0),
	gsSP2Triangles(7, 6, 2, 0, 1, 7, 2, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 9, 8, 0),
	gsSP2Triangles(1, 3, 9, 0, 9, 3, 10, 0),
	gsSP2Triangles(10, 3, 11, 0, 3, 4, 11, 0),
	gsSP2Triangles(4, 12, 11, 0, 4, 5, 12, 0),
	gsSP2Triangles(5, 13, 12, 0, 13, 5, 14, 0),
	gsSP2Triangles(5, 6, 14, 0, 15, 14, 6, 0),
	gsSP2Triangles(7, 15, 6, 0, 7, 16, 15, 0),
	gsSP2Triangles(7, 8, 16, 0, 8, 17, 16, 0),
	gsSP2Triangles(10, 17, 8, 0, 8, 9, 10, 0),
	gsSP2Triangles(10, 18, 17, 0, 19, 18, 10, 0),
	gsSP2Triangles(20, 19, 10, 0, 10, 11, 20, 0),
	gsSP2Triangles(20, 11, 21, 0, 21, 11, 12, 0),
	gsSP2Triangles(21, 12, 22, 0, 22, 12, 13, 0),
	gsSP2Triangles(13, 14, 22, 0, 22, 14, 23, 0),
	gsSP2Triangles(24, 23, 14, 0, 25, 24, 14, 0),
	gsSP2Triangles(25, 14, 15, 0, 15, 26, 25, 0),
	gsSP2Triangles(16, 26, 15, 0, 16, 17, 26, 0),
	gsSP2Triangles(27, 26, 17, 0, 18, 27, 17, 0),
	gsSP2Triangles(28, 27, 18, 0, 29, 28, 18, 0),
	gsSP2Triangles(29, 18, 19, 0, 29, 19, 20, 0),
	gsSP2Triangles(29, 20, 30, 0, 30, 20, 21, 0),
	gsSP2Triangles(30, 21, 22, 0, 30, 22, 23, 0),
	gsSP2Triangles(30, 23, 31, 0, 31, 23, 28, 0),
	gsSP2Triangles(28, 23, 24, 0, 28, 24, 27, 0),
	gsSP2Triangles(27, 24, 26, 0, 24, 25, 26, 0),
	gsSP2Triangles(28, 29, 31, 0, 29, 30, 31, 0),
	gsSPEndDisplayList(),
};

Gfx tri_sky_fine_sunrise[] = {
	gsSPVertex(vtx_sky_fine_sunrise + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(8, 7, 0, 0, 8, 0, 2, 0),
	gsSP2Triangles(2, 9, 8, 0, 9, 2, 10, 0),
	gsSP2Triangles(1, 10, 2, 0, 10, 1, 11, 0),
	gsSP2Triangles(3, 11, 1, 0, 11, 3, 12, 0),
	gsSP2Triangles(3, 13, 12, 0, 3, 4, 13, 0),
	gsSP2Triangles(4, 14, 13, 0, 5, 14, 4, 0),
	gsSP2Triangles(5, 15, 14, 0, 16, 15, 5, 0),
	gsSP2Triangles(5, 6, 16, 0, 17, 16, 6, 0),
	gsSP2Triangles(6, 7, 17, 0, 9, 17, 7, 0),
	gsSP2Triangles(7, 8, 9, 0, 18, 17, 9, 0),
	gsSP2Triangles(18, 19, 17, 0, 20, 19, 18, 0),
	gsSP2Triangles(20, 18, 21, 0, 18, 10, 21, 0),
	gsSP2Triangles(18, 9, 10, 0, 11, 21, 10, 0),
	gsSP2Triangles(11, 22, 21, 0, 23, 22, 11, 0),
	gsSP2Triangles(11, 12, 23, 0, 12, 24, 23, 0),
	gsSP2Triangles(13, 24, 12, 0, 13, 14, 24, 0),
	gsSP2Triangles(14, 15, 24, 0, 15, 25, 24, 0),
	gsSP2Triangles(16, 25, 15, 0, 25, 16, 26, 0),
	gsSP2Triangles(16, 19, 26, 0, 16, 17, 19, 0),
	gsSP2Triangles(20, 26, 19, 0, 27, 26, 20, 0),
	gsSP2Triangles(27, 20, 22, 0, 20, 21, 22, 0),
	gsSP2Triangles(27, 22, 28, 0, 28, 22, 23, 0),
	gsSP2Triangles(29, 28, 23, 0, 24, 29, 23, 0),
	gsSP2Triangles(24, 25, 29, 0, 29, 25, 30, 0),
	gsSP2Triangles(30, 25, 26, 0, 27, 30, 26, 0),
	gsSP2Triangles(29, 30, 27, 0, 29, 27, 28, 0),
	gsSPEndDisplayList(),
};

Gfx tri_sky_fine_sunset[] = {
	gsSPVertex(vtx_sky_fine_sunset + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(8, 7, 0, 0, 8, 0, 2, 0),
	gsSP2Triangles(2, 9, 8, 0, 9, 2, 10, 0),
	gsSP2Triangles(1, 10, 2, 0, 10, 1, 11, 0),
	gsSP2Triangles(3, 11, 1, 0, 11, 3, 12, 0),
	gsSP2Triangles(3, 13, 12, 0, 3, 4, 13, 0),
	gsSP2Triangles(4, 14, 13, 0, 5, 14, 4, 0),
	gsSP2Triangles(5, 15, 14, 0, 16, 15, 5, 0),
	gsSP2Triangles(5, 6, 16, 0, 17, 16, 6, 0),
	gsSP2Triangles(6, 7, 17, 0, 9, 17, 7, 0),
	gsSP2Triangles(7, 8, 9, 0, 18, 17, 9, 0),
	gsSP2Triangles(18, 19, 17, 0, 20, 19, 18, 0),
	gsSP2Triangles(20, 18, 21, 0, 18, 10, 21, 0),
	gsSP2Triangles(18, 9, 10, 0, 11, 21, 10, 0),
	gsSP2Triangles(11, 22, 21, 0, 23, 22, 11, 0),
	gsSP2Triangles(11, 12, 23, 0, 12, 24, 23, 0),
	gsSP2Triangles(13, 24, 12, 0, 13, 14, 24, 0),
	gsSP2Triangles(14, 15, 24, 0, 15, 25, 24, 0),
	gsSP2Triangles(16, 25, 15, 0, 25, 16, 26, 0),
	gsSP2Triangles(16, 19, 26, 0, 16, 17, 19, 0),
	gsSP2Triangles(20, 26, 19, 0, 27, 26, 20, 0),
	gsSP2Triangles(27, 20, 22, 0, 20, 21, 22, 0),
	gsSP2Triangles(27, 22, 28, 0, 28, 22, 23, 0),
	gsSP2Triangles(29, 28, 23, 0, 24, 29, 23, 0),
	gsSP2Triangles(24, 25, 29, 0, 29, 25, 30, 0),
	gsSP2Triangles(30, 25, 26, 0, 27, 30, 26, 0),
	gsSP2Triangles(29, 30, 27, 0, 29, 27, 28, 0),
	gsSPEndDisplayList(),
};


// storm sky domes
Gfx tri_sky_storm_day[] = {
	gsSPVertex(vtx_sky_storm_day + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 2, 6, 0, 0),
	gsSP2Triangles(7, 6, 2, 0, 1, 7, 2, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 9, 8, 0),
	gsSP2Triangles(1, 3, 9, 0, 9, 3, 10, 0),
	gsSP2Triangles(10, 3, 11, 0, 3, 4, 11, 0),
	gsSP2Triangles(4, 12, 11, 0, 4, 5, 12, 0),
	gsSP2Triangles(5, 13, 12, 0, 13, 5, 14, 0),
	gsSP2Triangles(5, 6, 14, 0, 15, 14, 6, 0),
	gsSP2Triangles(7, 15, 6, 0, 7, 16, 15, 0),
	gsSP2Triangles(7, 8, 16, 0, 8, 17, 16, 0),
	gsSP2Triangles(10, 17, 8, 0, 8, 9, 10, 0),
	gsSP2Triangles(10, 18, 17, 0, 19, 18, 10, 0),
	gsSP2Triangles(20, 19, 10, 0, 10, 11, 20, 0),
	gsSP2Triangles(20, 11, 21, 0, 21, 11, 12, 0),
	gsSP2Triangles(21, 12, 22, 0, 22, 12, 13, 0),
	gsSP2Triangles(13, 14, 22, 0, 22, 14, 23, 0),
	gsSP2Triangles(24, 23, 14, 0, 25, 24, 14, 0),
	gsSP2Triangles(25, 14, 15, 0, 15, 26, 25, 0),
	gsSP2Triangles(16, 26, 15, 0, 16, 17, 26, 0),
	gsSP2Triangles(27, 26, 17, 0, 18, 27, 17, 0),
	gsSP2Triangles(28, 27, 18, 0, 29, 28, 18, 0),
	gsSP2Triangles(29, 18, 19, 0, 29, 19, 20, 0),
	gsSP2Triangles(29, 20, 30, 0, 30, 20, 21, 0),
	gsSP2Triangles(30, 21, 22, 0, 30, 22, 23, 0),
	gsSP2Triangles(30, 23, 31, 0, 31, 23, 28, 0),
	gsSP2Triangles(28, 23, 24, 0, 28, 24, 27, 0),
	gsSP2Triangles(27, 24, 26, 0, 24, 25, 26, 0),
	gsSP2Triangles(28, 29, 31, 0, 29, 30, 31, 0),
	gsSPEndDisplayList(),
};

Gfx tri_sky_storm_night[] = {
	gsSPVertex(vtx_sky_storm_night + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 6, 5, 0, 2, 6, 0, 0),
	gsSP2Triangles(7, 6, 2, 0, 1, 7, 2, 0),
	gsSP2Triangles(1, 8, 7, 0, 1, 9, 8, 0),
	gsSP2Triangles(1, 3, 9, 0, 9, 3, 10, 0),
	gsSP2Triangles(10, 3, 11, 0, 3, 4, 11, 0),
	gsSP2Triangles(4, 12, 11, 0, 4, 5, 12, 0),
	gsSP2Triangles(5, 13, 12, 0, 13, 5, 14, 0),
	gsSP2Triangles(5, 6, 14, 0, 15, 14, 6, 0),
	gsSP2Triangles(7, 15, 6, 0, 7, 16, 15, 0),
	gsSP2Triangles(7, 8, 16, 0, 8, 17, 16, 0),
	gsSP2Triangles(10, 17, 8, 0, 8, 9, 10, 0),
	gsSP2Triangles(10, 18, 17, 0, 19, 18, 10, 0),
	gsSP2Triangles(20, 19, 10, 0, 10, 11, 20, 0),
	gsSP2Triangles(20, 11, 21, 0, 21, 11, 12, 0),
	gsSP2Triangles(21, 12, 22, 0, 22, 12, 13, 0),
	gsSP2Triangles(13, 14, 22, 0, 22, 14, 23, 0),
	gsSP2Triangles(24, 23, 14, 0, 25, 24, 14, 0),
	gsSP2Triangles(25, 14, 15, 0, 15, 26, 25, 0),
	gsSP2Triangles(16, 26, 15, 0, 16, 17, 26, 0),
	gsSP2Triangles(27, 26, 17, 0, 18, 27, 17, 0),
	gsSP2Triangles(28, 27, 18, 0, 29, 28, 18, 0),
	gsSP2Triangles(29, 18, 19, 0, 29, 19, 20, 0),
	gsSP2Triangles(29, 20, 30, 0, 30, 20, 21, 0),
	gsSP2Triangles(30, 21, 22, 0, 30, 22, 23, 0),
	gsSP2Triangles(30, 23, 31, 0, 31, 23, 28, 0),
	gsSP2Triangles(28, 23, 24, 0, 28, 24, 27, 0),
	gsSP2Triangles(27, 24, 26, 0, 24, 25, 26, 0),
	gsSP2Triangles(28, 29, 31, 0, 29, 30, 31, 0),
	gsSPEndDisplayList(),
};

Gfx tri_sky_storm_sunrise[] = {
	gsSPVertex(vtx_sky_storm_sunrise + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(8, 7, 0, 0, 8, 0, 2, 0),
	gsSP2Triangles(2, 9, 8, 0, 9, 2, 10, 0),
	gsSP2Triangles(1, 10, 2, 0, 10, 1, 11, 0),
	gsSP2Triangles(3, 11, 1, 0, 11, 3, 12, 0),
	gsSP2Triangles(3, 13, 12, 0, 3, 4, 13, 0),
	gsSP2Triangles(4, 14, 13, 0, 5, 14, 4, 0),
	gsSP2Triangles(5, 15, 14, 0, 16, 15, 5, 0),
	gsSP2Triangles(5, 6, 16, 0, 17, 16, 6, 0),
	gsSP2Triangles(6, 7, 17, 0, 9, 17, 7, 0),
	gsSP2Triangles(7, 8, 9, 0, 18, 17, 9, 0),
	gsSP2Triangles(18, 19, 17, 0, 20, 19, 18, 0),
	gsSP2Triangles(20, 18, 21, 0, 18, 10, 21, 0),
	gsSP2Triangles(18, 9, 10, 0, 11, 21, 10, 0),
	gsSP2Triangles(11, 22, 21, 0, 23, 22, 11, 0),
	gsSP2Triangles(11, 12, 23, 0, 12, 24, 23, 0),
	gsSP2Triangles(13, 24, 12, 0, 13, 14, 24, 0),
	gsSP2Triangles(14, 15, 24, 0, 15, 25, 24, 0),
	gsSP2Triangles(16, 25, 15, 0, 25, 16, 26, 0),
	gsSP2Triangles(16, 19, 26, 0, 16, 17, 19, 0),
	gsSP2Triangles(20, 26, 19, 0, 27, 26, 20, 0),
	gsSP2Triangles(27, 20, 22, 0, 20, 21, 22, 0),
	gsSP2Triangles(27, 22, 28, 0, 28, 22, 23, 0),
	gsSP2Triangles(29, 28, 23, 0, 24, 29, 23, 0),
	gsSP2Triangles(24, 25, 29, 0, 29, 25, 30, 0),
	gsSP2Triangles(30, 25, 26, 0, 27, 30, 26, 0),
	gsSP2Triangles(29, 30, 27, 0, 29, 27, 28, 0),
	gsSPEndDisplayList(),
};

Gfx tri_sky_storm_sunset[] = {
	gsSPVertex(vtx_sky_storm_sunset + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
	gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
	gsSP2Triangles(8, 7, 0, 0, 8, 0, 2, 0),
	gsSP2Triangles(2, 9, 8, 0, 9, 2, 10, 0),
	gsSP2Triangles(1, 10, 2, 0, 10, 1, 11, 0),
	gsSP2Triangles(3, 11, 1, 0, 11, 3, 12, 0),
	gsSP2Triangles(3, 13, 12, 0, 3, 4, 13, 0),
	gsSP2Triangles(4, 14, 13, 0, 5, 14, 4, 0),
	gsSP2Triangles(5, 15, 14, 0, 16, 15, 5, 0),
	gsSP2Triangles(5, 6, 16, 0, 17, 16, 6, 0),
	gsSP2Triangles(6, 7, 17, 0, 9, 17, 7, 0),
	gsSP2Triangles(7, 8, 9, 0, 18, 17, 9, 0),
	gsSP2Triangles(18, 19, 17, 0, 20, 19, 18, 0),
	gsSP2Triangles(20, 18, 21, 0, 18, 10, 21, 0),
	gsSP2Triangles(18, 9, 10, 0, 11, 21, 10, 0),
	gsSP2Triangles(11, 22, 21, 0, 23, 22, 11, 0),
	gsSP2Triangles(11, 12, 23, 0, 12, 24, 23, 0),
	gsSP2Triangles(13, 24, 12, 0, 13, 14, 24, 0),
	gsSP2Triangles(14, 15, 24, 0, 15, 25, 24, 0),
	gsSP2Triangles(16, 25, 15, 0, 25, 16, 26, 0),
	gsSP2Triangles(16, 19, 26, 0, 16, 17, 19, 0),
	gsSP2Triangles(20, 26, 19, 0, 27, 26, 20, 0),
	gsSP2Triangles(27, 20, 22, 0, 20, 21, 22, 0),
	gsSP2Triangles(27, 22, 28, 0, 28, 22, 23, 0),
	gsSP2Triangles(29, 28, 23, 0, 24, 29, 23, 0),
	gsSP2Triangles(24, 25, 29, 0, 29, 25, 30, 0),
	gsSP2Triangles(30, 25, 26, 0, 27, 30, 26, 0),
	gsSP2Triangles(29, 30, 27, 0, 29, 27, 28, 0),
	gsSPEndDisplayList(),
};

#pragma endregion Triangles




#pragma region Variables

// fine cloud colours
Color_RGBA8 fineCloudsSunrisePrimColor = {244, 244, 244, 178};

Color_RGBA8 fineCloudsSunriseEnvColor = {200, 190, 255, 255};


//
Color_RGBA8 fineCloudsDayPrimColor = {206, 254, 255, 179};

Color_RGBA8 fineCloudsDayEnvColor = {247, 213, 217, 255};


//
Color_RGBA8 fineCloudsSunsetPrimColor = {169, 169, 169, 210};

Color_RGBA8 fineCloudsSunsetEnvColor =  {186, 101, 40, 255};


//
Color_RGBA8 fineCloudsNightPrimColor = {116, 135, 134, 104};

Color_RGBA8 fineCloudsNightEnvColor = {64, 60, 63, 255};



// storm cloud colours
Color_RGBA8 stormCloudsSunrisePrimColor = {184, 114, 91, 169};

Color_RGBA8 stormCloudsSunriseEnvColor = {70, 70, 88, 255};


//
Color_RGBA8 stormCloudsDayPrimColor = {170, 198, 196, 102};

Color_RGBA8 stormCloudsDayEnvColor =  {90, 66, 70, 255};


//
Color_RGBA8 stormCloudsSunsetPrimColor = {239, 186, 118, 132};

Color_RGBA8 stormCloudsSunsetEnvColor = {93, 61, 44, 255};


//
Color_RGBA8 stormCloudsNightPrimColor = {116, 135, 134, 104};

Color_RGBA8 stormCloudsNightEnvColor = {64, 60, 63, 255};


#pragma endregion Variables




#pragma region Materials

// clouds
Gfx mat_fine_clouds_XLU[] = {
	gsSPLoadGeometryMode(0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL1, ENVIRONMENT, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIMITIVE, TEXEL0, PRIMITIVE, TEXEL0, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_PASS | G_RM_ZB_CLD_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 128),
	gsDPSetEnvColor(128, 128, 128, 255),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_fine_clouds_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 1, G_TX_WRAP | G_TX_NOMIRROR, 6, 1),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_storm_clouds_XLU[] = {
	gsSPLoadGeometryMode(0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL1, ENVIRONMENT, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIMITIVE, TEXEL0, PRIMITIVE, TEXEL0, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_PASS | G_RM_ZB_CLD_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 190, 190, 190, 190),
	gsDPSetEnvColor(90, 90, 90, 255),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_storm_clouds_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 1, G_TX_WRAP | G_TX_NOMIRROR, 6, 1),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};


// fine sky domes
Gfx mat_sky_fine_day_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_sky_fine_night_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_sky_fine_sunrise_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_sky_fine_sunset_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};


// storm sky domes
Gfx mat_sky_storm_day_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_sky_storm_night_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_sky_storm_sunrise_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

Gfx mat_sky_storm_sunset_OPA[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPEndDisplayList(),
};

#pragma endregion Materials




#pragma region DisplayLists

// clouds
Gfx DL_fine_clouds_XLU[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_clouds + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_fine_clouds_XLU),
	gsSPDisplayList(tri_clouds),
	gsSPEndDisplayList(),
};

Gfx DL_storm_clouds_XLU[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_storm_clouds + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_storm_clouds_XLU),
	gsSPDisplayList(tri_storm_clouds),
	gsSPEndDisplayList(),
};


// fine sky domes
Gfx DL_sky_fine_day_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_fine_day + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_fine_day_OPA),
	gsSPDisplayList(tri_sky_fine_day),
	gsSPEndDisplayList(),
};

Gfx DL_sky_fine_night_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_fine_night + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_fine_night_OPA),
	gsSPDisplayList(tri_sky_fine_night),
	gsSPEndDisplayList(),
};

Gfx DL_sky_fine_sunrise_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_fine_sunrise + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_fine_sunrise_OPA),
	gsSPDisplayList(tri_sky_fine_sunrise),
	gsSPEndDisplayList(),
};

Gfx DL_sky_fine_sunset_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_fine_sunset + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_fine_sunset_OPA),
	gsSPDisplayList(tri_sky_fine_sunset),
	gsSPEndDisplayList(),
};


// storm sky domes
Gfx DL_sky_storm_day_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_storm_day + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_storm_day_OPA),
	gsSPDisplayList(tri_sky_storm_day),
	gsSPEndDisplayList(),
};

Gfx DL_sky_storm_night_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_storm_night + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_storm_night_OPA),
	gsSPDisplayList(tri_sky_storm_night),
	gsSPEndDisplayList(),
};

Gfx DL_sky_storm_sunrise_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_storm_sunrise + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_storm_sunrise_OPA),
	gsSPDisplayList(tri_sky_storm_sunrise),
	gsSPEndDisplayList(),
};

Gfx DL_sky_storm_sunset_OPA[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(vtx_cull_sky_storm_sunset + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_storm_sunset_OPA),
	gsSPDisplayList(tri_sky_storm_sunset),
	gsSPEndDisplayList(),
};

#pragma endregion DisplayLists

















u64 Skybox_Dome_North_DL_tex_sky_noise_i4[] = {
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	
};

Vtx Skybox_Dome_North_DL_Skybox_Dome_North_DL_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-45, -64, -64}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-45, -64, -45}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-45, 64, -45}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-45, 64, -64}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {45, -64, -64}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {45, -64, -45}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {45, 64, -45}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {45, 64, -64}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx Skybox_Dome_North_DL_Skybox_Dome_North_DL_mesh_layer_Opaque_vtx_0[15] = {
	{{ {45, -64, -45}, 0, {4080, 5063}, {0, 11, 0, 255} }},
	{{ {45, -10, -45}, 0, {4080, 2917}, {0, 22, 0, 255} }},
	{{ {0, -64, -64}, 0, {6128, 5063}, {0, 0, 11, 255} }},
	{{ {0, -10, -64}, 0, {6128, 2917}, {0, 0, 22, 255} }},
	{{ {45, 0, -45}, 0, {4080, 2502}, {0, 33, 0, 255} }},
	{{ {0, 0, -64}, 0, {6128, 2502}, {0, 0, 33, 255} }},
	{{ {45, 10, -45}, 0, {4080, 2137}, {0, 44, 0, 255} }},
	{{ {0, 10, -64}, 0, {6128, 2137}, {0, 0, 44, 255} }},
	{{ {45, 64, -45}, 0, {4080, -1121}, {0, 55, 0, 255} }},
	{{ {0, 64, -64}, 0, {6128, -1121}, {0, 0, 55, 255} }},
	{{ {-45, 64, -45}, 0, {8176, -1121}, {0, 160, 0, 255} }},
	{{ {-45, 10, -45}, 0, {8176, 2137}, {0, 150, 0, 255} }},
	{{ {-45, 0, -45}, 0, {8176, 2502}, {0, 140, 0, 255} }},
	{{ {-45, -10, -45}, 0, {8176, 2917}, {0, 130, 0, 255} }},
	{{ {-45, -64, -45}, 0, {8176, 5063}, {0, 120, 0, 255} }},
};

Gfx Skybox_Dome_North_DL_Skybox_Dome_North_DL_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(Skybox_Dome_North_DL_Skybox_Dome_North_DL_mesh_layer_Opaque_vtx_0 + 0, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(4, 6, 5, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 7, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(10, 7, 9, 0, 11, 7, 10, 0),
	gsSP2Triangles(5, 7, 11, 0, 11, 12, 5, 0),
	gsSP2Triangles(12, 13, 5, 0, 5, 13, 3, 0),
	gsSP2Triangles(13, 2, 3, 0, 2, 13, 14, 0),
	gsSPEndDisplayList(),
};

Gfx mat_Skybox_Dome_North_DL_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, Skybox_Dome_North_DL_tex_sky_noise_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 512),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 508),
	gsSPEndDisplayList(),
};

Gfx Skybox_Dome_North_DL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(Skybox_Dome_North_DL_Skybox_Dome_North_DL_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_Skybox_Dome_North_DL_f3dlite_material_layerOpaque),
	gsSPDisplayList(Skybox_Dome_North_DL_Skybox_Dome_North_DL_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};
