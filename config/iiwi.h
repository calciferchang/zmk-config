/*     I'IWI KEY MATRIX / LAYOUT MAPPING

      ╭─────────────────┬─────────────────╮
      │   0   1   2   3 │   4   5   6   7 │
  ╭───╯   9  10  11  12 │  13  14  15  16 ╰───╮
  │   8  19  20  21     │      22  23  24  17 │
  │  18 ╭─────╮  30  31 │  32  33 ╭─────╮  25 │
  ╰─────╯     ╰─────────┴─────────╯     ╰─────╯

      ╭─────────────────┬─────────────────╮
      │ LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 │
  ╭───╯ LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 ╰───╮
  │ LM4 LB3 LB2 LB1     │     RB1 RB2 RB3 RM4 │
  │ LB4 ╭─────╮ LH1 LH0 │ RH0 RH1 ╭─────╮ RB4 │
  ╰─────╯     ╰─────────┴─────────╯     ╰─────╯ */

#pragma once

#define LT0  3  // left-top row
#define LT1  2
#define LT2  1
#define LT3  0

#define RT0  4  // right-top row
#define RT1  5
#define RT2  6
#define RT3  7

#define LM0 12  // left-middle row
#define LM1 11
#define LM2 10
#define LM3  9
#define LM4  8

#define RM0 13  // right-middle row
#define RM1 14
#define RM2 15
#define RM3 16
#define RM4 17

#define LB1 21 // left-bottom row
#define LB2 20
#define LB3 19
#define LB4 18

#define RB1 22 // right-bottom row
#define RB2 23
#define RB3 24
#define RB4 25

#define LH0 31  // left thumb keys
#define LH1 30

#define RH0 32  // right thumb keys
#define RH1 33
