#ifndef TABLA_H
#define TABLA_H
#include <iostream>
#include "Rs/R.h"
#include "Rs/R1.h"
#include "Rs/R2.h"
#include "Rs/R3.h"
#include "Rs/R4.h"
#include "Rs/R5.h"
#include "Rs/R6.h"
#include "Rs/R7.h"
#include "Rs/R8.h"
#include "Rs/R9.h"
#include "Rs/R10.h"
#include "Rs/R11.h"
#include "Rs/R12.h"
#include "Rs/R13.h"
#include "Rs/R14.h"
#include "Rs/R15.h"
#include "Rs/R16.h"
#include "Rs/R17.h"
#include "Rs/R18.h"
#include "Rs/R19.h"
#include "Rs/R20.h"
#include "Rs/R21.h"
#include "Rs/R22.h"
#include "Rs/R23.h"
#include "Rs/R24.h"
#include "Rs/R25.h"
#include "Rs/R26.h"
#include "Rs/R27.h"
#include "Rs/R28.h"
#include "Rs/R29.h"
#include "Rs/R30.h"
#include "Rs/R31.h"
#include "Rs/R32.h"
#include "Rs/R33.h"
#include "Rs/R34.h"
#include "Rs/R35.h"
#include "Rs/R36.h"
#include "Rs/R37.h"
#include "Rs/R38.h"
#include "Rs/R39.h"
#include "Rs/R40.h"
#include "Rs/R41.h"
#include "Rs/R42.h"
#include "Rs/R43.h"
#include "Rs/R44.h"
#include "Rs/R45.h"
#include "Rs/R46.h"
#include "Rs/R47.h"
#include "Rs/R48.h"
#include "Rs/R49.h"
#include "Rs/R50.h"
#include "Rs/R51.h"
#include "Rs/R52.h"
R r;
R1 r1; R2 r2; R3 r3; R4 r4; R5 r5; R6 r6; R7 r7; R8 r8; R9 r9; R10 r10;
R11 r11; R12 r12; R13 r13; R14 r14; R15 r15; R16 r16; R17 r17; R18 r18; R19 r19; R20 r20;
R21 r21; R22 r22; R23 r23; R24 r24; R25 r25; R26 r26; R27 r27; R28 r28; R29 r29; R30 r30;
R31 r31; R32 r32; R33 r33; R34 r34; R35 r35; R36 r36; R37 r37; R38 r38; R39 r39; R40 r40; R41 r41;
R42 r42; R43 r43; R44 r44; R45 r45; R46 r46; R47 r47; R48 r48; R49 r49; R50 r50; R51 r51; R52 r52; 
//R37 r37; R28 r28; R29 r29; R30 r30;
using namespace std;
auto TablaF()
{
    static int tf[96][46]{
        0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 1, 2, 3, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -3, 0, 7, 3, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -7, 0, 0, 0, -7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -7, 0, -7, -7, -7, 0, -7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        27, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -16, 0, 28, 29, 30, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 23, 24, 0, 26, 0, 0, 0, 0, 0, 0, 31, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        27, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -16, 0, 28, 29, 30, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 34, 24, 0, 26, 0, 0, 0, 0, 0, 0, 31, 0, 0,
        -18, 0, 0, 0, -18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -18, 0, -18, -18, -18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -19, 0, 0, 0, -19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -19, 0, -19, -19, -19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, -30, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 44, 45, 0, 40,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 52,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, -32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 44, 45, 0, 54,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 55,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 56,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, 63, 62, 0, 61, -31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 64,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 65,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 66,
        0, 0, 0, 0, 0, -53, -53, -53, -53, -53, 0, -53, -53, -53, 0, -53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -36, -36, -36, -36, -36, 0, -36, -36, -36, 0, -36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -37, -37, -37, -37, -37, 0, -37, -37, -37, 36, -37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -38, -38, -38, -38, -38, 0, -38, -38, -38, 0, -38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -39, -39, -39, -39, -39, 0, -39, -39, -39, 0, -39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -40, -40, -40, -40, -40, 0, -40, -40, -40, 0, -40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -26, 0, 0, 0, -26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -26, 0, -26, -26, -26, -26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, -13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, 63, 62, 0, 61, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, 63, 62, 0, 61, 0, 71, 0, -34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, 63, 62, 0, 61, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, 63, 62, 0, 61, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -25, 0, 0, 0, -25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -25, 0, -25, -25, -25, -25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 74,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 75,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 76,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 77,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 78,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 79,
        0, 0, 0, 0, 0, 59, 58, 60, 63, 62, 0, 61, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -45, -45, -45, -45, -45, 0, -45, -45, -45, 0 - 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -46, -46, -46, -46, -46, 0 - 46, -46, -46, 0 - 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -22, 0, 0, 0, -22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -22, 0, -22, -22, -22, -22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -41, -41, -41, -41, -41, 0, -41, -41, -41, 0, -41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        46, 47, 48, 49, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 81,
        27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 28, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 31, 82, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -47, -47, -47, -47, -47, 0, -47, -47, -47, 0, -47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -48, 58, -48, -48, -48, 0, -48, -48, -48, 0, -48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, -49, -49, -49, 0, -49, -49, -49, 0, -49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, -50, -50, 0, -50, -50, -50, 0, -50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, -51, -51, 0, 61, -51, -51, 0, -51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, -52, 62, 0, 61, -52, -52, 0 - 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -44, -44, -44, -44, -44, 0, -44, -44, -44, 0, -44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 59, 58, 60, 63, 62, 0, 61, 0, 71, 0, -34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
        -27, 0, 0, 0, -27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -27, 0, -27, -27, -27, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
        -42, 0, 0, 0, -42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -42, 0, -42, -42, -42, -42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -43, 0, 0, 0, -43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -43, 0, -43, -43, -43, -43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -20, 0, 28, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 0, 0, 0, 0, 0, 31, 0, 0,
        -24, 0, 0, 0, -24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -24, 0, -24, -24, -24, -24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -23, 0, 0, 0, -23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -23, 0, -23, -23, -23, -23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 28, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 31, 92, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -20, 0, 28, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 91, 0, 0, 0, 0, 0, 0, 31, 0, 0,
        -28, 0, 0, 0, -28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -28, 0, -28, -28, -28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        -29, 0, 0, 0, -29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -29, 0, -29, -29, -29, -29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    return tf;
}

R reglasTabFinal(int value)
{
    string forma;
    switch (value)
    {
        case -1:
        {
            r.forma = "r0(acept)";
            break;
        }
        case -2:
        {
            r = r.Constructor(r1.cantidadTokens, r1.forma, r1.id, r1.tipo, r1.tipoS);
            break;
        }
        case -3:
        {
            r = r.Constructor(r2.cantidadTokens, r2.forma, r2.id, r2.tipo, r2.tipoS);
            break;
        }
        case -4:
        {
            r = r.Constructor(r3.cantidadTokens, r3.forma, r3.id, r3.tipo, r3.tipoS);
            break;
        }
        case -5:
        {
            r = r.Constructor(r4.cantidadTokens, r4.forma, r4.id, r4.tipo, r4.tipoS);
            break;
        }
        case -6:
        {
            r = r.Constructor(r5.cantidadTokens, r5.forma, r5.id, r5.tipo, r5.tipoS);
            break;
        }
        case -7:
        {
            r = r.Constructor(r6.cantidadTokens, r6.forma, r6.id, r6.tipo, r6.tipoS);
            break;
        }
        case -8:
        {
            r = r.Constructor(r7.cantidadTokens, r7.forma, r7.id, r7.tipo, r7.tipoS);
            break;
        }
        case -9:
        {
            r = r.Constructor(r8.cantidadTokens, r8.forma, r8.id, r8.tipo, r8.tipoS);
            break;
        }
        case -10:
        {
            r = r.Constructor(r9.cantidadTokens, r9.forma, r9.id, r9.tipo, r9.tipoS);
            break;
        }
        case -11:
        {
            r = r.Constructor(r10.cantidadTokens, r10.forma, r10.id, r10.tipo, r10.tipoS);
            break;
        }
        case -12:
        {
            r = r.Constructor(r11.cantidadTokens, r11.forma, r11.id, r11.tipo, r11.tipoS);
            break;
        }
        case -13:
        {
            r = r.Constructor(r12.cantidadTokens, r12.forma, r12.id, r12.tipo, r12.tipoS);
            break;
        }
        case -14:
        {
            r = r.Constructor(r13.cantidadTokens, r13.forma, r13.id, r13.tipo, r13.tipoS);
            break;
        }
        case -15:
        {
            r = r.Constructor(r14.cantidadTokens, r14.forma, r14.id, r14.tipo, r14.tipoS);
            break;
        }
        case -16:
        {
            r = r.Constructor(r15.cantidadTokens, r15.forma, r15.id, r15.tipo, r15.tipoS);
            break;
        }
        case -17:
        {
            r = r.Constructor(r16.cantidadTokens, r16.forma, r16.id, r16.tipo, r16.tipoS);
            break;
        }
        case -18:
        {
            r = r.Constructor(r17.cantidadTokens, r17.forma, r17.id, r17.tipo, r17.tipoS);
            break;
        }
        case -19:
        {
            r = r.Constructor(r18.cantidadTokens, r18.forma, r18.id, r18.tipo, r18.tipoS);
            break;
        }
        case -20:
        {
            r = r.Constructor(r19.cantidadTokens, r19.forma, r19.id, r19.tipo, r19.tipoS);
            break;
        }
        case -21:
        {
            r = r.Constructor(r20.cantidadTokens, r20.forma, r20.id, r20.tipo, r20.tipoS);
            break;
        }
        case -22:
        {
            r = r.Constructor(r21.cantidadTokens, r21.forma, r21.id, r21.tipo, r21.tipoS);
            break;
        }
        case -23:
        {
            r = r.Constructor(r22.cantidadTokens, r22.forma, r22.id, r22.tipo, r22.tipoS);
            break;
        }
        case -24:
        {
            r = r.Constructor(r23.cantidadTokens, r23.forma, r23.id, r23.tipo, r23.tipoS);
            break;
        }
        case -25:
        {
            r = r.Constructor(r24.cantidadTokens, r24.forma, r24.id, r24.tipo, r24.tipoS);
            break;
        }
        case -26:
        {
            r = r.Constructor(r25.cantidadTokens, r25.forma, r25.id, r25.tipo, r25.tipoS);
            break;
        }
        case -27:
        {
            r = r.Constructor(r26.cantidadTokens, r26.forma, r26.id, r26.tipo, r26.tipoS);
            break;
        }
        case -28:
        {
            r = r.Constructor(r27.cantidadTokens, r27.forma, r27.id, r27.tipo, r27.tipoS);
            break;
        }
        case -29:
        {
            r = r.Constructor(r28.cantidadTokens, r28.forma, r28.id, r28.tipo, r28.tipoS);
            break;
        }
        case -30:
        {
            r = r.Constructor(r29.cantidadTokens, r29.forma, r29.id, r29.tipo, r29.tipoS);
            break;
        }
        case -31:
        {
            r = r.Constructor(r30.cantidadTokens, r30.forma, r30.id, r30.tipo, r30.tipoS);
            break;
        }
        //
        case -32:
        {
            r = r.Constructor(r31.cantidadTokens, r31.forma, r31.id, r31.tipo, r31.tipoS);
            break;
        }
        case -33:
        {
            r = r.Constructor(r32.cantidadTokens, r32.forma, r32.id, r32.tipo, r32.tipoS);
            break;
        }
        case -34:
        {
            r = r.Constructor(r33.cantidadTokens, r33.forma, r33.id, r33.tipo, r33.tipoS);
            break;
        }
        case -35:
        {
            r = r.Constructor(r34.cantidadTokens, r34.forma, r34.id, r34.tipo, r34.tipoS);
            break;
        }
        case -36:
        {
            r = r.Constructor(r35.cantidadTokens, r35.forma, r35.id, r35.tipo, r35.tipoS);
            break;
        }
        case -37:
        {
            r = r.Constructor(r36.cantidadTokens, r36.forma, r36.id, r36.tipo, r36.tipoS);
            break;
        }
        //A
        case -38:
        {
            r = r.Constructor(r37.cantidadTokens, r37.forma, r37.id, r37.tipo, r37.tipoS);
            break;
        }
        case -39:
        {
            r = r.Constructor(r38.cantidadTokens, r38.forma, r38.id, r38.tipo, r38.tipoS);
            break;
        }
        case -40:
        {
            r = r.Constructor(r39.cantidadTokens, r39.forma, r39.id, r39.tipo, r39.tipoS);
            break;
        }
        case -41:
        {
            r = r.Constructor(r40.cantidadTokens, r40.forma, r40.id, r40.tipo, r40.tipoS);
            break;
        }
        case -42:
        {
            r = r.Constructor(r41.cantidadTokens, r41.forma, r41.id, r41.tipo, r41.tipoS);
            break;
        }
        case -43:
        {
            r = r.Constructor(r42.cantidadTokens, r42.forma, r42.id, r42.tipo, r42.tipoS);
            break;
        }
        case -44:
        {
            r = r.Constructor(r43.cantidadTokens, r43.forma, r43.id, r43.tipo, r43.tipoS);
            break;
        }
        case -45:
        {
            r = r.Constructor(r44.cantidadTokens, r44.forma, r44.id, r44.tipo, r44.tipoS);
            break;
        }
        case -46:
        {
            r = r.Constructor(r45.cantidadTokens, r45.forma, r45.id, r45.tipo, r45.tipoS);
            break;
        }
        case -47:
        {
            r = r.Constructor(r46.cantidadTokens, r46.forma, r46.id, r46.tipo, r46.tipoS);
            break;
        }
        case -48:
        {
            r = r.Constructor(r47.cantidadTokens, r47.forma, r47.id, r47.tipo, r47.tipoS);
            break;
        }
        case -49:
        {
            r = r.Constructor(r48.cantidadTokens, r48.forma, r48.id, r48.tipo, r48.tipoS);
            break;
        }
        case -50:
        {
            r = r.Constructor(r49.cantidadTokens, r49.forma, r49.id, r49.tipo, r49.tipoS);
            break;
        }
        case -51:
        {
            r = r.Constructor(r50.cantidadTokens, r50.forma, r50.id, r50.tipo, r50.tipoS);
            break;
        }
        case -52:
        {
            r = r.Constructor(r51.cantidadTokens, r51.forma, r51.id, r51.tipo, r51.tipoS);
            break;
        }
        case -53:
        {
            r = r.Constructor(r52.cantidadTokens, r52.forma, r52.id, r52.tipo, r52.tipoS);
            break;
        }
        default:
        {
            return r;
            break;
        }
    }
    return r;
}
#endif // PILA_H
