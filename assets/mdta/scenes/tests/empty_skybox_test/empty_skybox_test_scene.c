#include "empty_skybox_test_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd empty_skybox_test_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&empty_skybox_test_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, empty_skybox_test_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_FIELD_LOGIC),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_INVALID),
    SCENE_CMD_SKYBOX_SETTINGS(40, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(17, empty_skybox_test_scene_header00_lightSettings),
    SCENE_CMD_ENTRANCE_LIST(empty_skybox_test_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, empty_skybox_test_scene_header00_playerEntryList),
    SCENE_CMD_END(),
};

RomFile empty_skybox_test_scene_roomList[] = {
    { (uintptr_t)_empty_skybox_test_room_0SegmentRomStart, (uintptr_t)_empty_skybox_test_room_0SegmentRomEnd },
};

ActorEntry empty_skybox_test_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, -219, 642 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(180.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x0D00 | ((0xFF & 0x00FF)))
    },
};

Spawn empty_skybox_test_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings empty_skybox_test_scene_header00_lightSettings[17] = {
    // Custom No. 1 Lighting
    {
        {    70,    45,    57 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   180,   154,   138 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   110 },   // Fog Color
        ((63 << 10) | 993),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 2 Lighting
    {
        {    80,    80,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   255,   255,   255 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    70,    70,    90 },   // Diffuse1 Color
        {   196,   182,   175 },   // Fog Color
        ((63 << 10) | 996),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 3 Lighting
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    79,    79,   133 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        ((63 << 10) | 995),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 4 Lighting
    {
        {    40,    40,    70 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        ((63 << 10) | 992),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 5 Lighting
    {
        {    60,    40,    70 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    80,    30,    60 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    80,    50,   150 },   // Diffuse1 Color
        {   255,     0,     0 },   // Fog Color
        ((63 << 10) | 978),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 6 Lighting
    {
        {    75,    90,   100 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    55,   255,   240 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    10,   150,   190 },   // Diffuse1 Color
        {     0,   255,     0 },   // Fog Color
        ((63 << 10) | 978),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 7 Lighting
    {
        {    60,    40,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    60,    75,   150 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    60,    55,   150 },   // Diffuse1 Color
        {     0,     0,   255 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 8 Lighting
    {
        {     0,    40,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    20,    50,    75 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,   100,   150 },   // Diffuse1 Color
        {   255,     0,   255 },   // Fog Color
        ((63 << 10) | 978),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 9 Lighting
    {
        {    92,    92,    92 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   160,   134,   118 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    30,    10,    10 },   // Diffuse1 Color
        {    85,     0,     0 },   // Fog Color
        ((1 << 10) | 986),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 10 Lighting
    {
        {    95,    80,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   145,   145,   130 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    40,    40,    80 },   // Diffuse1 Color
        {     0,    85,     0 },   // Fog Color
        ((1 << 10) | 986),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 11 Lighting
    {
        {    80,    70,    70 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   150,    70,    35 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    10,    10,    25 },   // Diffuse1 Color
        {     0,     0,    85 },   // Fog Color
        ((1 << 10) | 988),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 12 Lighting
    {
        {    70,    70,    90 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {     0,     0,    15 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    30,    30,    80 },   // Diffuse1 Color
        {    85,     0,    85 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 13 Lighting
    {
        {    80,    50,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   150,   140,   150 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    70,    70,    90 },   // Diffuse1 Color
        {    24,     9,    24 },   // Fog Color
        ((1 << 10) | 946),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 14 Lighting
    {
        {    80,    50,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   150,   140,   150 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    70,    70,    90 },   // Diffuse1 Color
        {    24,     9,    24 },   // Fog Color
        ((1 << 10) | 946),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 15 Lighting
    {
        {    80,    50,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   150,   140,   150 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    70,    70,    90 },   // Diffuse1 Color
        {    24,     9,    24 },   // Fog Color
        ((1 << 10) | 946),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 16 Lighting
    {
        {    80,    50,    80 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   150,   140,   150 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    70,    70,    90 },   // Diffuse1 Color
        {    24,     9,    24 },   // Fog Color
        ((1 << 10) | 946),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Custom No. 17 Lighting
    {
        {     0,     0,     0 },   // Ambient Color
        {  -111,     0,   -60 },   // Diffuse0 Direction
        {   155,   155,   155 },   // Diffuse0 Color
        {   109,     0,   -63 },   // Diffuse1 Direction
        {   240,   240,   255 },   // Diffuse1 Color
        {   200,   200,   255 },   // Fog Color
        ((63 << 10) | 600),        // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

CollisionHeader empty_skybox_test_scene_collisionHeader = {
    { -1283, -620, -1283 },
    { 1283, -220, 1283 },
    ARRAY_COUNT(empty_skybox_test_scene_vertices), empty_skybox_test_scene_vertices,
    ARRAY_COUNT(empty_skybox_test_scene_polygons), empty_skybox_test_scene_polygons,
    empty_skybox_test_scene_polygonTypes,
    empty_skybox_test_scene_bgCamInfo,
    ARRAY_COUNT(empty_skybox_test_scene_waterBoxes), empty_skybox_test_scene_waterBoxes
};

WaterBox empty_skybox_test_scene_waterBoxes[1] = {
    { -29, -225, -671, 700, 700, WATERBOX_PROPERTIES(2, 1, 0, 0) },
};

Vec3s empty_skybox_test_scene_camPosData[] = {
    {      0,   -156,   1083 },
    { 0x0000, 0x8000, 0x0000 },
    {   6000,     -1,     -1 },
};

BgCamInfo empty_skybox_test_scene_bgCamInfo[] = {
    { CAM_SET_NORMAL0, 3, &empty_skybox_test_scene_camPosData[0] },
};

SurfaceType empty_skybox_test_scene_polygonTypes[1] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s empty_skybox_test_scene_vertices[29] = {
    {    642,   -220,   -642 },
    {   1283,   -220,   -642 },
    {   1283,   -220,  -1283 },
    {    642,   -220,  -1283 },
    {   -642,   -220,   -642 },
    {      0,   -220,   -642 },
    {      0,   -220,  -1283 },
    {   -642,   -220,  -1283 },
    {  -1283,   -220,   -642 },
    {  -1283,   -220,  -1283 },
    {  -1283,   -220,    642 },
    {   -642,   -220,    642 },
    {   -642,   -220,      0 },
    {  -1283,   -220,      0 },
    {      0,   -220,    642 },
    {    642,   -220,    642 },
    {    642,   -220,      0 },
    {      0,   -220,      0 },
    {   1283,   -220,    642 },
    {   1283,   -220,      0 },
    {    642,   -220,   1283 },
    {   1283,   -220,   1283 },
    {   -642,   -220,   1283 },
    {      0,   -220,   1283 },
    {  -1283,   -220,   1283 },
    {    642,   -620,   -642 },
    {    642,   -620,      0 },
    {      0,   -620,      0 },
    {      0,   -620,   -642 },
};

CollisionPoly empty_skybox_test_scene_polygons[40] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(12), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(13), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(16), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(17), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(17), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(12), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(19), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(16), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(18), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(15), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(22, COLPOLY_IGNORE_NONE), COLPOLY_VTX(23, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(14), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(22, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(23, COLPOLY_IGNORE_NONE), COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(15), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(23, COLPOLY_IGNORE_NONE), COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(14), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(22, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(10), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(4), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(8), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 642 },
    { 0, COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(16), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 642 },
    { 0, COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(4), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(1), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 220 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(25), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 620 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(28), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 620 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(17), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 0 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 0 },
    { 0, COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(16), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 0 },
    { 0, COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(17), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 0 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 642 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 642 },
};

