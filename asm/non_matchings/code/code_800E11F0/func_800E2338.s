glabel func_800E2338
/* B594D8 800E2338 27BDFFC8 */  addiu $sp, $sp, -0x38
/* B594DC 800E233C AFBF001C */  sw    $ra, 0x1c($sp)
/* B594E0 800E2340 AFA40038 */  sw    $a0, 0x38($sp)
/* B594E4 800E2344 AFA5003C */  sw    $a1, 0x3c($sp)
/* B594E8 800E2348 AFB00018 */  sw    $s0, 0x18($sp)
/* B594EC 800E234C AFA60040 */  sw    $a2, 0x40($sp)
/* B594F0 800E2350 8FA50038 */  lw    $a1, 0x38($sp)
/* B594F4 800E2354 0C0389DA */  jal   func_800E2768
/* B594F8 800E2358 24040002 */   li    $a0, 2
/* B594FC 800E235C 00408025 */  move  $s0, $v0
/* B59500 800E2360 0C0389FE */  jal   func_800E27F8
/* B59504 800E2364 24040002 */   li    $a0, 2
/* B59508 800E2368 24040002 */  li    $a0, 2
/* B5950C 800E236C 02002825 */  move  $a1, $s0
/* B59510 800E2370 0C0389E9 */  jal   func_800E27A4
/* B59514 800E2374 AFA20030 */   sw    $v0, 0x30($sp)
/* B59518 800E2378 8FA30030 */  lw    $v1, 0x30($sp)
/* B5951C 800E237C 1040000F */  beqz  $v0, .L800E23BC
/* B59520 800E2380 00403025 */   move  $a2, $v0
/* B59524 800E2384 3C0E8017 */  lui   $t6, %hi(D_801725B8)
/* B59528 800E2388 01D07021 */  addu  $t6, $t6, $s0
/* B5952C 800E238C 91CE25B8 */  lbu   $t6, %lo(D_801725B8)($t6)
/* B59530 800E2390 24010001 */  li    $at, 1
/* B59534 800E2394 02002025 */  move  $a0, $s0
/* B59538 800E2398 11C10004 */  beq   $t6, $at, .L800E23AC
/* B5953C 800E239C 24050002 */   li    $a1, 2
/* B59540 800E23A0 0C0386B6 */  jal   func_800E1AD8
/* B59544 800E23A4 AFA20034 */   sw    $v0, 0x34($sp)
/* B59548 800E23A8 8FA60034 */  lw    $a2, 0x34($sp)
.L800E23AC:
/* B5954C 800E23AC 8FAF003C */  lw    $t7, 0x3c($sp)
/* B59550 800E23B0 00C01025 */  move  $v0, $a2
/* B59554 800E23B4 10000022 */  b     .L800E2440
/* B59558 800E23B8 ADE00000 */   sw    $zero, ($t7)
.L800E23BC:
/* B5955C 800E23BC 8FA50038 */  lw    $a1, 0x38($sp)
/* B59560 800E23C0 24010004 */  li    $at, 4
/* B59564 800E23C4 8FB90040 */  lw    $t9, 0x40($sp)
/* B59568 800E23C8 0005C100 */  sll   $t8, $a1, 4
/* B5956C 800E23CC 00783821 */  addu  $a3, $v1, $t8
/* B59570 800E23D0 80E20019 */  lb    $v0, 0x19($a3)
/* B59574 800E23D4 8FA9003C */  lw    $t1, 0x3c($sp)
/* B59578 800E23D8 10410003 */  beq   $v0, $at, .L800E23E8
/* B5957C 800E23DC 24010001 */   li    $at, 1
/* B59580 800E23E0 17210007 */  bne   $t9, $at, .L800E2400
/* B59584 800E23E4 24040002 */   li    $a0, 2
.L800E23E8:
/* B59588 800E23E8 80E80018 */  lb    $t0, 0x18($a3)
/* B5958C 800E23EC 00105100 */  sll   $t2, $s0, 4
/* B59590 800E23F0 006A5821 */  addu  $t3, $v1, $t2
/* B59594 800E23F4 AD280000 */  sw    $t0, ($t1)
/* B59598 800E23F8 10000011 */  b     .L800E2440
/* B5959C 800E23FC 8D620010 */   lw    $v0, 0x10($t3)
.L800E2400:
/* B595A0 800E2400 27A60040 */  addiu $a2, $sp, 0x40
/* B595A4 800E2404 AFA30030 */  sw    $v1, 0x30($sp)
/* B595A8 800E2408 0C038956 */  jal   func_800E2558
/* B595AC 800E240C AFA70024 */   sw    $a3, 0x24($sp)
/* B595B0 800E2410 8FA30030 */  lw    $v1, 0x30($sp)
/* B595B4 800E2414 10400004 */  beqz  $v0, .L800E2428
/* B595B8 800E2418 8FA70024 */   lw    $a3, 0x24($sp)
/* B595BC 800E241C 8FAC003C */  lw    $t4, 0x3c($sp)
/* B595C0 800E2420 10000007 */  b     .L800E2440
/* B595C4 800E2424 AD800000 */   sw    $zero, ($t4)
.L800E2428:
/* B595C8 800E2428 80ED0018 */  lb    $t5, 0x18($a3)
/* B595CC 800E242C 8FAE003C */  lw    $t6, 0x3c($sp)
/* B595D0 800E2430 00107900 */  sll   $t7, $s0, 4
/* B595D4 800E2434 006FC021 */  addu  $t8, $v1, $t7
/* B595D8 800E2438 ADCD0000 */  sw    $t5, ($t6)
/* B595DC 800E243C 8F020010 */  lw    $v0, 0x10($t8)
.L800E2440:
/* B595E0 800E2440 8FBF001C */  lw    $ra, 0x1c($sp)
/* B595E4 800E2444 8FB00018 */  lw    $s0, 0x18($sp)
/* B595E8 800E2448 27BD0038 */  addiu $sp, $sp, 0x38
/* B595EC 800E244C 03E00008 */  jr    $ra
/* B595F0 800E2450 00000000 */   nop
