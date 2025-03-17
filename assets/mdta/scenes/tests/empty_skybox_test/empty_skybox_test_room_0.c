#include "empty_skybox_test_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd empty_skybox_test_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&empty_skybox_test_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};

RoomShapeNormal empty_skybox_test_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(empty_skybox_test_room_0_shapeDListsEntry),
    empty_skybox_test_room_0_shapeDListsEntry,
    empty_skybox_test_room_0_shapeDListsEntry + ARRAY_COUNT(empty_skybox_test_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry empty_skybox_test_room_0_shapeDListsEntry[1] = {
    { empty_skybox_test_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx empty_skybox_test_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(empty_skybox_test_room_0_dl_E_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_N_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_S_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_W_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx empty_skybox_test_room_0_dl_E_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {1326, -147, 43}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1326, -68, 43}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1326, -68, -43}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1326, -147, -43}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1326, -147, 43}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1326, -68, 43}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1326, -68, -43}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1326, -147, -43}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx empty_skybox_test_room_0_dl_E_mesh_layer_Opaque_vtx_0[19] = {
	{{ {1326, -147, 43}, 0, {368, 432}, {255, 255, 255, 255} }},
	{{ {1326, -131, 43}, 0, {432, 432}, {255, 255, 255, 255} }},
	{{ {1326, -131, -21}, 0, {432, 368}, {255, 255, 255, 255} }},
	{{ {1326, -147, 43}, 0, {368, 368}, {255, 255, 255, 255} }},
	{{ {1326, -131, -21}, 0, {432, 304}, {255, 255, 255, 255} }},
	{{ {1326, -147, -43}, 0, {368, 304}, {255, 255, 255, 255} }},
	{{ {1326, -115, -21}, 0, {496, 304}, {255, 255, 255, 255} }},
	{{ {1326, -147, -43}, 0, {432, 240}, {255, 255, 255, 255} }},
	{{ {1326, -100, -21}, 0, {560, 304}, {255, 255, 255, 255} }},
	{{ {1326, -84, -21}, 0, {624, 304}, {255, 255, 255, 255} }},
	{{ {1326, -68, -43}, 0, {560, 240}, {255, 255, 255, 255} }},
	{{ {1326, -147, -43}, 0, {496, 240}, {255, 255, 255, 255} }},
	{{ {1326, -115, -21}, 0, {496, 368}, {255, 255, 255, 255} }},
	{{ {1326, -100, 43}, 0, {560, 368}, {255, 255, 255, 255} }},
	{{ {1326, -115, 43}, 0, {496, 432}, {255, 255, 255, 255} }},
	{{ {1326, -84, 43}, 0, {560, 432}, {255, 255, 255, 255} }},
	{{ {1326, -68, 43}, 0, {624, 368}, {255, 255, 255, 255} }},
	{{ {1326, -84, -21}, 0, {560, 368}, {255, 255, 255, 255} }},
	{{ {1326, -68, -43}, 0, {624, 304}, {255, 255, 255, 255} }},
};

Gfx empty_skybox_test_room_0_dl_E_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_E_mesh_layer_Opaque_vtx_0 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(4, 6, 7, 0, 8, 9, 10, 0),
	gsSP2Triangles(6, 8, 10, 0, 6, 10, 11, 0),
	gsSP2Triangles(12, 13, 8, 0, 14, 13, 12, 0),
	gsSP2Triangles(15, 16, 17, 0, 17, 16, 18, 0),
	gsSPEndDisplayList(),
};

Vtx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1283, -220, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1283, -220, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1283, -220, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1283, -220, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -220, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -220, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -220, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -220, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[31] = {
	{{ {0, -220, -642}, 0, {496, 240}, {0, 107, 187, 255} }},
	{{ {642, -220, -642}, 0, {752, 240}, {60, 94, 196, 255} }},
	{{ {642, -220, -1283}, 0, {752, -16}, {47, 73, 163, 255} }},
	{{ {0, -220, -1283}, 0, {496, -16}, {0, 78, 156, 255} }},
	{{ {-1283, -220, -642}, 0, {-16, 240}, {163, 73, 209, 255} }},
	{{ {-642, -220, -642}, 0, {240, 240}, {196, 94, 196, 255} }},
	{{ {-642, -220, -1283}, 0, {240, -16}, {209, 73, 163, 255} }},
	{{ {-1283, -220, -1283}, 0, {-16, -16}, {177, 61, 177, 255} }},
	{{ {-1283, -220, 642}, 0, {-16, 752}, {163, 73, 47, 255} }},
	{{ {-642, -220, 642}, 0, {240, 752}, {196, 94, 60, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {187, 107, 0, 255} }},
	{{ {-1283, -220, 0}, 0, {-16, 496}, {156, 78, 0, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 107, 69, 255} }},
	{{ {642, -220, 642}, 0, {752, 752}, {60, 94, 60, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {69, 107, 0, 255} }},
	{{ {0, -220, 0}, 0, {496, 496}, {0, 127, 0, 255} }},
	{{ {642, -220, 1283}, 0, {752, 1008}, {47, 73, 93, 255} }},
	{{ {1283, -220, 1283}, 0, {1008, 1008}, {79, 61, 79, 255} }},
	{{ {1283, -220, 642}, 0, {1008, 752}, {93, 73, 47, 255} }},
	{{ {642, -220, 642}, 0, {752, 752}, {60, 94, 60, 255} }},
	{{ {-642, -220, 1283}, 0, {240, 1008}, {209, 73, 93, 255} }},
	{{ {0, -220, 1283}, 0, {496, 1008}, {0, 78, 100, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 107, 69, 255} }},
	{{ {-642, -220, 642}, 0, {240, 752}, {196, 94, 60, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {187, 107, 0, 255} }},
	{{ {0, -220, -642}, 0, {496, 240}, {0, 107, 187, 255} }},
	{{ {-642, -220, -642}, 0, {240, 240}, {196, 94, 196, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {69, 107, 0, 255} }},
	{{ {1283, -220, 0}, 0, {1008, 496}, {100, 78, 0, 255} }},
	{{ {1283, -220, -642}, 0, {1008, 240}, {93, 73, 209, 255} }},
	{{ {642, -220, -642}, 0, {752, 240}, {60, 94, 196, 255} }},
};

Gfx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 15, 25, 0, 24, 25, 26, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
	gsSPEndDisplayList(),
};

Vtx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[31] = {
	{{ {642, -220, -642}, 0, {752, 240}, {60, 94, 196, 255} }},
	{{ {1283, -220, -642}, 0, {1008, 240}, {93, 73, 209, 255} }},
	{{ {1283, -220, -1283}, 0, {1008, -16}, {79, 61, 177, 255} }},
	{{ {642, -220, -1283}, 0, {752, -16}, {47, 73, 163, 255} }},
	{{ {-642, -220, -642}, 0, {240, 240}, {196, 94, 196, 255} }},
	{{ {0, -220, -642}, 0, {496, 240}, {0, 107, 187, 255} }},
	{{ {0, -220, -1283}, 0, {496, -16}, {0, 78, 156, 255} }},
	{{ {-642, -220, -1283}, 0, {240, -16}, {209, 73, 163, 255} }},
	{{ {-642, -220, 642}, 0, {240, 752}, {196, 94, 60, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 107, 69, 255} }},
	{{ {0, -220, 0}, 0, {496, 496}, {0, 127, 0, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {187, 107, 0, 255} }},
	{{ {642, -220, 642}, 0, {752, 752}, {60, 94, 60, 255} }},
	{{ {1283, -220, 642}, 0, {1008, 752}, {93, 73, 47, 255} }},
	{{ {1283, -220, 0}, 0, {1008, 496}, {100, 78, 0, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {69, 107, 0, 255} }},
	{{ {0, -220, 1283}, 0, {496, 1008}, {0, 78, 100, 255} }},
	{{ {642, -220, 1283}, 0, {752, 1008}, {47, 73, 93, 255} }},
	{{ {642, -220, 642}, 0, {752, 752}, {60, 94, 60, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 107, 69, 255} }},
	{{ {-1283, -220, 1283}, 0, {-16, 1008}, {177, 61, 79, 255} }},
	{{ {-642, -220, 1283}, 0, {240, 1008}, {209, 73, 93, 255} }},
	{{ {-642, -220, 642}, 0, {240, 752}, {196, 94, 60, 255} }},
	{{ {-1283, -220, 642}, 0, {-16, 752}, {163, 73, 47, 255} }},
	{{ {-1283, -220, 0}, 0, {-16, 496}, {156, 78, 0, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {187, 107, 0, 255} }},
	{{ {-642, -220, -642}, 0, {240, 240}, {196, 94, 196, 255} }},
	{{ {-1283, -220, -642}, 0, {-16, 240}, {163, 73, 209, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {69, 107, 0, 255} }},
	{{ {642, -220, -642}, 0, {752, 240}, {60, 94, 196, 255} }},
	{{ {0, -220, -642}, 0, {496, 240}, {0, 107, 187, 255} }},
};

Gfx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_1 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(10, 28, 29, 0, 10, 29, 30, 0),
	gsSPEndDisplayList(),
};

Vtx empty_skybox_test_room_0_dl_N_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-43, -115, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-43, -36, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-43, -36, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-43, -115, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -115, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -36, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -36, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -115, -1326}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx empty_skybox_test_room_0_dl_N_mesh_layer_Opaque_vtx_0[17] = {
	{{ {-21, -115, -1326}, 0, {368, 816}, {255, 255, 255, 255} }},
	{{ {-21, -68, -1326}, 0, {496, 816}, {255, 255, 255, 255} }},
	{{ {-43, -115, -1326}, 0, {368, 752}, {255, 255, 255, 255} }},
	{{ {43, -100, -1326}, 0, {432, 1008}, {255, 255, 255, 255} }},
	{{ {43, -36, -1326}, 0, {496, 1008}, {255, 255, 255, 255} }},
	{{ {21, -84, -1326}, 0, {496, 944}, {255, 255, 255, 255} }},
	{{ {-21, -36, -1326}, 0, {560, 880}, {255, 255, 255, 255} }},
	{{ {-43, -36, -1326}, 0, {560, 816}, {255, 255, 255, 255} }},
	{{ {-43, -36, -1326}, 0, {560, 752}, {255, 255, 255, 255} }},
	{{ {-43, -115, -1326}, 0, {496, 752}, {255, 255, 255, 255} }},
	{{ {43, -36, -1326}, 0, {624, 1008}, {255, 255, 255, 255} }},
	{{ {21, -36, -1326}, 0, {624, 944}, {255, 255, 255, 255} }},
	{{ {43, -115, -1326}, 0, {368, 1008}, {255, 255, 255, 255} }},
	{{ {43, -100, -1326}, 0, {432, 944}, {255, 255, 255, 255} }},
	{{ {21, -115, -1326}, 0, {368, 944}, {255, 255, 255, 255} }},
	{{ {21, -115, -1326}, 0, {432, 880}, {255, 255, 255, 255} }},
	{{ {-21, -36, -1326}, 0, {496, 880}, {255, 255, 255, 255} }},
};

Gfx empty_skybox_test_room_0_dl_N_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_N_mesh_layer_Opaque_vtx_0 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 1, 0, 1, 8, 9, 0),
	gsSP2Triangles(10, 11, 5, 0, 12, 13, 14, 0),
	gsSP2Triangles(13, 5, 15, 0, 15, 5, 16, 0),
	gsSP1Triangle(1, 15, 16, 0),
	gsSPEndDisplayList(),
};

Vtx empty_skybox_test_room_0_dl_S_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-43, -147, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-43, -68, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-43, -68, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-43, -147, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -147, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -68, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -68, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {43, -147, 1326}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx empty_skybox_test_room_0_dl_S_mesh_layer_Opaque_vtx_0[16] = {
	{{ {21, -100, 1326}, 0, {560, 48}, {255, 255, 255, 255} }},
	{{ {21, -84, 1326}, 0, {624, 48}, {255, 255, 255, 255} }},
	{{ {43, -68, 1326}, 0, {560, -16}, {255, 255, 255, 255} }},
	{{ {43, -115, 1326}, 0, {496, 48}, {255, 255, 255, 255} }},
	{{ {-21, -115, 1326}, 0, {496, 176}, {255, 255, 255, 255} }},
	{{ {-43, -100, 1326}, 0, {560, 112}, {255, 255, 255, 255} }},
	{{ {43, -115, 1326}, 0, {496, 112}, {255, 255, 255, 255} }},
	{{ {-43, -147, 1326}, 0, {432, 240}, {255, 255, 255, 255} }},
	{{ {-43, -100, 1326}, 0, {496, 240}, {255, 255, 255, 255} }},
	{{ {-21, -131, 1326}, 0, {432, 176}, {255, 255, 255, 255} }},
	{{ {43, -147, 1326}, 0, {368, 176}, {255, 255, 255, 255} }},
	{{ {43, -131, 1326}, 0, {432, 112}, {255, 255, 255, 255} }},
	{{ {21, -84, 1326}, 0, {560, 112}, {255, 255, 255, 255} }},
	{{ {-43, -68, 1326}, 0, {624, 112}, {255, 255, 255, 255} }},
	{{ {43, -68, 1326}, 0, {624, 48}, {255, 255, 255, 255} }},
	{{ {-43, -84, 1326}, 0, {560, 176}, {255, 255, 255, 255} }},
};

Gfx empty_skybox_test_room_0_dl_S_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_S_mesh_layer_Opaque_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 0, 0),
	gsSP2Triangles(4, 7, 8, 0, 7, 4, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
	gsSPEndDisplayList(),
};

Vtx empty_skybox_test_room_0_dl_W_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1411, -147, 51}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1411, -68, 51}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1411, -68, -51}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1411, -147, -51}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1411, -147, 51}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1411, -68, 51}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1411, -68, -51}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1411, -147, -51}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx empty_skybox_test_room_0_dl_W_mesh_layer_Opaque_vtx_0[26] = {
	{{ {-1411, -115, -21}, 0, {496, 816}, {255, 255, 255, 255} }},
	{{ {-1411, -106, -30}, 0, {560, 816}, {255, 255, 255, 255} }},
	{{ {-1411, -131, -51}, 0, {496, 752}, {255, 255, 255, 255} }},
	{{ {-1411, -147, 30}, 0, {368, 1008}, {255, 255, 255, 255} }},
	{{ {-1411, -115, 21}, 0, {432, 1008}, {255, 255, 255, 255} }},
	{{ {-1411, -115, 0}, 0, {432, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -115, 0}, 0, {496, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -115, 21}, 0, {496, 1008}, {255, 255, 255, 255} }},
	{{ {-1411, -100, 9}, 0, {560, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -115, 21}, 0, {432, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -131, 51}, 0, {432, 1008}, {255, 255, 255, 255} }},
	{{ {-1411, -68, 51}, 0, {624, 1008}, {255, 255, 255, 255} }},
	{{ {-1411, -68, 30}, 0, {624, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -106, 30}, 0, {560, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -68, -30}, 0, {624, 816}, {255, 255, 255, 255} }},
	{{ {-1411, -131, -51}, 0, {560, 752}, {255, 255, 255, 255} }},
	{{ {-1411, -68, -51}, 0, {624, 752}, {255, 255, 255, 255} }},
	{{ {-1411, -147, -30}, 0, {432, 816}, {255, 255, 255, 255} }},
	{{ {-1411, -131, -51}, 0, {432, 752}, {255, 255, 255, 255} }},
	{{ {-1411, -115, 0}, 0, {496, 880}, {255, 255, 255, 255} }},
	{{ {-1411, -100, -9}, 0, {560, 880}, {255, 255, 255, 255} }},
	{{ {-1411, -68, 9}, 0, {624, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -68, -9}, 0, {624, 880}, {255, 255, 255, 255} }},
	{{ {-1411, -131, 51}, 0, {496, 1008}, {255, 255, 255, 255} }},
	{{ {-1411, -115, 21}, 0, {496, 944}, {255, 255, 255, 255} }},
	{{ {-1411, -68, 51}, 0, {560, 1008}, {255, 255, 255, 255} }},
};

Gfx empty_skybox_test_room_0_dl_W_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_W_mesh_layer_Opaque_vtx_0 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 3, 10, 0),
	gsSP2Triangles(11, 12, 13, 0, 1, 14, 15, 0),
	gsSP2Triangles(14, 16, 15, 0, 17, 0, 18, 0),
	gsSP2Triangles(19, 0, 17, 0, 19, 20, 0, 0),
	gsSP2Triangles(8, 20, 19, 0, 21, 20, 8, 0),
	gsSP2Triangles(21, 22, 20, 0, 23, 13, 24, 0),
	gsSP1Triangle(23, 25, 13, 0),
	gsSPEndDisplayList(),
};

Gfx mat_empty_skybox_test_room_0_dl_mat_east[] = {
	gsSPLoadGeometryMode(G_SHADE),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 3, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 229, 119, 75, 255),
	gsSPEndDisplayList(),
};

Gfx mat_empty_skybox_test_room_0_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 124, 124, 124, 255),
	gsSPEndDisplayList(),
};

Gfx mat_empty_skybox_test_room_0_dl_floor_mat_2_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
	gsSPEndDisplayList(),
};

Gfx mat_empty_skybox_test_room_0_dl_mat_north[] = {
	gsSPLoadGeometryMode(G_SHADE),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 3, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 3, 255, 0, 255),
	gsSPEndDisplayList(),
};

Gfx mat_empty_skybox_test_room_0_dl_mat_south[] = {
	gsSPLoadGeometryMode(G_SHADE),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 3, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 31, 112, 81, 255),
	gsSPEndDisplayList(),
};

Gfx mat_empty_skybox_test_room_0_dl_mat_west[] = {
	gsSPLoadGeometryMode(G_SHADE),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 3, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 150, 25, 68, 255),
	gsSPEndDisplayList(),
};

Gfx empty_skybox_test_room_0_dl_E_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(empty_skybox_test_room_0_dl_E_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_empty_skybox_test_room_0_dl_mat_east),
	gsSPDisplayList(empty_skybox_test_room_0_dl_E_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_empty_skybox_test_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_empty_skybox_test_room_0_dl_floor_mat_2_layerOpaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

Gfx empty_skybox_test_room_0_dl_N_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(empty_skybox_test_room_0_dl_N_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_empty_skybox_test_room_0_dl_mat_north),
	gsSPDisplayList(empty_skybox_test_room_0_dl_N_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx empty_skybox_test_room_0_dl_S_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(empty_skybox_test_room_0_dl_S_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_empty_skybox_test_room_0_dl_mat_south),
	gsSPDisplayList(empty_skybox_test_room_0_dl_S_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx empty_skybox_test_room_0_dl_W_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(empty_skybox_test_room_0_dl_W_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_empty_skybox_test_room_0_dl_mat_west),
	gsSPDisplayList(empty_skybox_test_room_0_dl_W_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

