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
    { empty_skybox_test_room_0_shapeHeader_entry_0_opaque, empty_skybox_test_room_0_shapeHeader_entry_0_transparent }
};

Gfx empty_skybox_test_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(empty_skybox_test_room_0_dl_E_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_N_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_S_mesh_layer_Opaque),
	gsSPDisplayList(empty_skybox_test_room_0_dl_W_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Gfx empty_skybox_test_room_0_shapeHeader_entry_0_transparent[] = {
	gsSPDisplayList(empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent),
	gsSPEndDisplayList(),
};

u64 empty_skybox_test_room_0_dl_spot00_sceneTex_020818_rgba16_ci8[] = {
	0x0001020103040506, 0x0708090a0b0c0d05, 0x0e0f10110c0d120d, 0x0d1313130d141516, 0x1303020617100d18, 0x191a1b051c0c051d, 0x1e1f1e2021052205, 0x13230d0d020d0d08, 
	0x24210d2518182627, 0x28292a2b2c2b2b2d, 0x162e1418252f3011, 0x0b0d310512033233, 0x1814101e18343536, 0x3738393a3b3c000b, 0x1d3d08140d3e030b, 0x0b3f0d40013e0203, 
	0x181041194228430d, 0x0c053a080a050202, 0x0518314405450c2f, 0x12250b234647480d, 0x494a284b4c1b4d0a, 0x254e0b1d11053e4f, 0x0d3f134013053150, 0x51122252533e0248, 
	0x5455565657555804, 0x0b4e054d1f050d31, 0x144e0c52473e1202, 0x400c0c03030d1817, 0x243f181822053814, 0x314d3c1438581d11, 0x59314f4632530252, 0x120c0c3e0d0a5a55, 
	0x0d5b185c44130a1d, 0x105d5d55555e1d0a, 0x165505403e475f47, 0x0c0d60051e585b13, 0x2202131818613962, 0x0f5e55163c0a1e1d, 0x636465160c474747, 0x6667240514685269, 
	0x121313130c6a6705, 0x500d05140a0a3111, 0x6b161e6c6d0b0d18, 0x6e6f5a166840523e, 0x524050074d1d2270, 0x21185b5b050d0a10, 0x620d023c3b672a71, 0x2c1472735b125253, 
	0x320669741d030d0d, 0x05181d1675596541, 0x760b52520269771d, 0x0b5854314d181202, 0x1167411d02521811, 0x3a445b0808446d08, 0x3b083c1318783b1d, 0x1d540f050d665c1e, 
	0x39160b1203211e1d, 0x1e3c0a44500b6031, 0x0c221d5811600074, 0x09367431504e691e, 0x0b5b252f210a1e05, 0x0a116d335b0b5b31, 0x18056739081d085a, 0x36770f3c0d0c690d, 
	0x0b25050d0500051d, 0x08776c553c17797a, 0x7b7c35672e082e2a, 0x64167d1044001822, 0x7e4e4e130d221137, 0x37367f801981822d, 0x195d836e6c844185, 0x6586110a050d1318, 
	0x2460330c87628889, 0x6f8a8b8c6254560a, 0x5d8d418e6e8f9091, 0x3f5c0a1822130c14, 0x20445e363643561d, 0x3b68480722180a05, 0x5e7481928d8d7c3c, 0x3f1e0a0c4f0c3f08, 
	0x6f939495604e4496, 0x9440973e400b050a, 0x1e7498434d87761d, 0x9918110507486c65, 0x3313330c5b110b12, 0x5b4f12020612131f, 0x140a0561869a9b9c, 0x802b551d5a549d33, 
	0x122213224d1d9600, 0x9e5202405252070d, 0x4d4d0a9fa0a1a2a3, 0xa4a5a6a7a8550a4f, 0x140b12024e24a950, 0x40010702020d4e18, 0x1710aa2aab5daaac, 0xad842eae716c2e0d, 
	0x0b5b30210c000013, 0x400c4f400d0a184d, 0x5867af6e0f4d5c5a, 0x6c39b07c547c2cb1, 0xb10b22220d186045, 0x5b01130d05054d3a, 0xad882b5820180578, 0x088e797c5d58747c, 
	0x2bb1b23c388e0a4e, 0x500d480c1e26498e, 0x808eb30522054d0d, 0x3c625a55363a0a10, 0xb490b582b6381438, 0x0531480cb7a05465, 0x3a1d1e0a22054d10, 0x62b8b9ba2c44209f, 
	0xbb39ab2b96330d30, 0x3f6f1474bc37bd0a, 0x1f44310a05403f41, 0x653a6737be555d5d, 0xbf111e213c010dc0, 0x3017aac11b052122, 0xc22a560517106551, 0x0318c31111946554, 
	0x24110a1313221312, 0x3011c43730210d05, 0xc5b882c6c7575147, 0x020d050b05125a6f, 0x0d400c02c8145003, 0x0261c93a150c0d18, 0xaaa08e6f8a964013, 0x0d0d5b1322215839, 
	
};

u64 empty_skybox_test_room_0_dl_spot00_sceneTex_020818_rgba16_pal_rgba16[] = {
	0x3359125312951255, 0x4b9f335b0a9512d7, 0x541f7ce53b9d3319, 0x1ad72b193bdd5c61, 0x4c214bdf1a9722d7, 0x439d439f64613b9f, 0x2b5b856bb66f7461, 0x12d54bdd43df339b, 
	0x54612b1b23190a51, 0x3b592ad93be18dab, 0xa671952795ab84e5, 0x74a174e34c1f2297, 0x331b3b5b021122d5, 0x2b5f95ed95697ca5, 0x53df6ca55c2153dd, 0x3b9b5c5f0a55335d, 
	0x1a958d6974e984a3, 0x439b231701d10213, 0x12974c23b6b3aef9, 0xd777339d2b591ad5, 0x2ad722950a530a13, 0x8d276c61641f9d69, 0x54215bdd5c632b17, 0x3bdf85275c1f018d, 
	0x2ad5231b74e543e1, 0xa5ed7ca3339f6463, 0x331722d93ba164e7, 0x74a34b9d84e76ca3, 0x1ad9a62d8dad8ce5, 0x5463645f85256c63, 0x43dd6ce56c5f54a5, 0x85694c61539bbe71, 
	0x9dabae71b67195a9, 0x64a3beb344212b9d, 0xae2f7ca16c1f5359, 0x5bdf74e774a58529, 0xa62f84e3aded3b17, 0x4b9b539943591293, 0x852b4bdb64e9c6f5, 0xae2d4b9912515423, 
	0x7d29a673cf37aeb5, 0xbf37aeb1b6b1bef5, 0xcf3533575ca595ad, 0x75277ce76ce79dad, 0x64a553db1b195ca3, 0x6ce99da995252b1d, 0xa631beb5b62d64e5, 0x8d6b435b6ca1539d, 
	0x435d9def956b3b5d, 0x5465ae73a5efe7bb, 0x09d17d2700000000
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
	{{ {-1283, -620, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1283, -220, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1283, -220, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1283, -620, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -620, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -220, 1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -220, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1283, -620, -1283}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[47] = {
	{{ {0, -220, -642}, 0, {496, 240}, {0, 110, 192, 255} }},
	{{ {642, -220, -642}, 0, {752, 240}, {58, 97, 198, 255} }},
	{{ {642, -220, -1283}, 0, {752, -16}, {45, 76, 165, 255} }},
	{{ {0, -220, -1283}, 0, {496, -16}, {0, 82, 159, 255} }},
	{{ {-1283, -220, -642}, 0, {-16, 240}, {165, 76, 211, 255} }},
	{{ {-642, -220, -642}, 0, {240, 240}, {198, 97, 198, 255} }},
	{{ {-642, -220, -1283}, 0, {240, -16}, {211, 76, 165, 255} }},
	{{ {-1283, -220, -1283}, 0, {-16, -16}, {179, 64, 179, 255} }},
	{{ {-1283, -220, 642}, 0, {-16, 752}, {165, 76, 45, 255} }},
	{{ {-642, -220, 642}, 0, {240, 752}, {198, 97, 58, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {192, 110, 0, 255} }},
	{{ {-1283, -220, 0}, 0, {-16, 496}, {159, 82, 0, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 110, 64, 255} }},
	{{ {642, -220, 642}, 0, {752, 752}, {58, 97, 58, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {64, 110, 0, 255} }},
	{{ {0, -220, 0}, 0, {496, 496}, {0, 127, 0, 255} }},
	{{ {642, -220, 1283}, 0, {752, 1008}, {45, 76, 91, 255} }},
	{{ {1283, -220, 1283}, 0, {1008, 1008}, {77, 64, 77, 255} }},
	{{ {1283, -220, 642}, 0, {1008, 752}, {91, 76, 45, 255} }},
	{{ {-642, -220, 1283}, 0, {240, 1008}, {211, 76, 91, 255} }},
	{{ {0, -220, 1283}, 0, {496, 1008}, {0, 82, 97, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 110, 64, 255} }},
	{{ {-642, -220, 642}, 0, {240, 752}, {198, 97, 58, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {146, 248, 192, 255} }},
	{{ {642, -220, -642}, 0, {752, 240}, {159, 50, 65, 255} }},
	{{ {642, -620, -642}, 0, {752, 240}, {154, 58, 207, 255} }},
	{{ {642, -620, 0}, 0, {752, 496}, {145, 61, 0, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {192, 110, 0, 255} }},
	{{ {0, -220, -642}, 0, {496, 240}, {0, 110, 192, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {64, 110, 0, 255} }},
	{{ {1283, -220, 0}, 0, {1008, 496}, {97, 82, 0, 255} }},
	{{ {1283, -220, -642}, 0, {1008, 240}, {91, 76, 211, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {64, 110, 0, 255} }},
	{{ {1283, -220, -642}, 0, {1008, 240}, {91, 76, 211, 255} }},
	{{ {642, -220, -642}, 0, {752, 240}, {58, 97, 198, 255} }},
	{{ {0, -220, -642}, 0, {496, 240}, {110, 62, 11, 255} }},
	{{ {0, -220, 0}, 0, {496, 496}, {126, 242, 0, 255} }},
	{{ {0, -620, 0}, 0, {496, 496}, {126, 242, 0, 255} }},
	{{ {0, -620, -642}, 0, {496, 240}, {113, 254, 198, 255} }},
	{{ {0, -220, 0}, 0, {496, 496}, {0, 242, 130, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {245, 62, 146, 255} }},
	{{ {642, -620, 0}, 0, {752, 496}, {58, 254, 143, 255} }},
	{{ {0, -620, 0}, 0, {496, 496}, {0, 242, 130, 255} }},
	{{ {642, -220, -642}, 0, {752, 240}, {191, 50, 97, 255} }},
	{{ {0, -220, -642}, 0, {496, 240}, {64, 248, 110, 255} }},
	{{ {0, -620, -642}, 0, {496, 240}, {0, 61, 111, 255} }},
	{{ {642, -620, -642}, 0, {752, 240}, {49, 58, 102, 255} }},
};

Gfx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 13, 0),
	gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
	gsSP2Triangles(27, 15, 28, 0, 27, 28, 5, 0),
	gsSP1Triangle(29, 30, 31, 0),
	gsSPVertex(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 32, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPEndDisplayList(),
};

Vtx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[31] = {
	{{ {642, -220, -642}, 0, {752, 240}, {58, 97, 198, 255} }},
	{{ {1283, -220, -642}, 0, {1008, 240}, {91, 76, 211, 255} }},
	{{ {1283, -220, -1283}, 0, {1008, -16}, {77, 64, 179, 255} }},
	{{ {642, -220, -1283}, 0, {752, -16}, {45, 76, 165, 255} }},
	{{ {-642, -220, -642}, 0, {240, 240}, {198, 97, 198, 255} }},
	{{ {0, -220, -642}, 0, {496, 240}, {0, 110, 192, 255} }},
	{{ {0, -220, -1283}, 0, {496, -16}, {0, 82, 159, 255} }},
	{{ {-642, -220, -1283}, 0, {240, -16}, {211, 76, 165, 255} }},
	{{ {-642, -220, 642}, 0, {240, 752}, {198, 97, 58, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 110, 64, 255} }},
	{{ {0, -220, 0}, 0, {496, 496}, {0, 127, 0, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {192, 110, 0, 255} }},
	{{ {642, -220, 642}, 0, {752, 752}, {58, 97, 58, 255} }},
	{{ {1283, -220, 642}, 0, {1008, 752}, {91, 76, 45, 255} }},
	{{ {1283, -220, 0}, 0, {1008, 496}, {97, 82, 0, 255} }},
	{{ {642, -220, 0}, 0, {752, 496}, {64, 110, 0, 255} }},
	{{ {0, -220, 1283}, 0, {496, 1008}, {0, 82, 97, 255} }},
	{{ {642, -220, 1283}, 0, {752, 1008}, {45, 76, 91, 255} }},
	{{ {642, -220, 642}, 0, {752, 752}, {58, 97, 58, 255} }},
	{{ {0, -220, 642}, 0, {496, 752}, {0, 110, 64, 255} }},
	{{ {-1283, -220, 1283}, 0, {-16, 1008}, {179, 64, 77, 255} }},
	{{ {-642, -220, 1283}, 0, {240, 1008}, {211, 76, 91, 255} }},
	{{ {-1283, -220, 642}, 0, {-16, 752}, {165, 76, 45, 255} }},
	{{ {-1283, -220, 0}, 0, {-16, 496}, {159, 82, 0, 255} }},
	{{ {-642, -220, 0}, 0, {240, 496}, {192, 110, 0, 255} }},
	{{ {-642, -220, -642}, 0, {240, 240}, {198, 97, 198, 255} }},
	{{ {-1283, -220, -642}, 0, {-16, 240}, {165, 76, 211, 255} }},
	{{ {0, -620, 0}, 0, {496, 496}, {0, 127, 0, 255} }},
	{{ {642, -620, 0}, 0, {752, 496}, {59, 113, 0, 255} }},
	{{ {642, -620, -642}, 0, {752, 240}, {55, 101, 201, 255} }},
	{{ {0, -620, -642}, 0, {496, 240}, {0, 113, 197, 255} }},
};

Gfx empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_Floor_mesh_layer_Opaque_vtx_1 + 0, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 8, 0, 20, 8, 22, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
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

Vtx empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull[8] = {
	{{ {-29, -225, 29}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-29, -225, 29}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-29, -225, -671}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-29, -225, -671}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {671, -225, 29}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {671, -225, 29}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {671, -225, -671}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {671, -225, -671}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0[4] = {
	{{ {-29, -225, 29}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {671, -225, 29}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {671, -225, -671}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-29, -225, -671}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0[] = {
	gsSPVertex(empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
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

Gfx mat_empty_skybox_test_room_0_dl_oot_water_mat_layerTransparent[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 128),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, empty_skybox_test_room_0_dl_spot00_sceneTex_020818_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 201),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, empty_skybox_test_room_0_dl_spot00_sceneTex_020818_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 14, G_TX_WRAP | G_TX_NOMIRROR, 5, 14),
	gsDPSetTileSize(0, 0, 0, 124, 124),
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

Gfx empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_empty_skybox_test_room_0_dl_oot_water_mat_layerTransparent),
	gsSPDisplayList(empty_skybox_test_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0),
	gsSPEndDisplayList(),
};

