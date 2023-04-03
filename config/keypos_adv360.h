/*                                 ADVANTAGE 360 KEY MATRIX / CORE LAYOUT MAPPING
 ╭────────────────────────────┬────────────────────────────╮ ╭────────────────────────────┬────────────────────────────╮
 │  0   1   2   3   4   5   6 │  7   8   9  10  11  12  13 │ │ --  LN4 LN3 LN2 LN1 LN0 -- │ --  RN0 RN1 RN2 RN3 RN4 -- │
 │ 14  15  16  17  18  19  20 │ 21  22  23  24  25  26  27 │ │ --  LT4 LT3 LT2 LT1 LT0 -- │ --  RT0 RT1 RT2 RT3 RT4 -- │
 │ 28  29  30  31  32  33  34 │ 39  40  41  42  43  44  45 │ │ --  LM4 LM3 LM2 LM1 LM0 -- │ --  RM0 RM1 RM2 RM3 RM4 -- │
 │ 46  47  48  49  50  51 ╭───┴───╮ 60  61  62  63  64  65 │ │ --  LB4 LB3 LB2 LB1 LB0╭───┴───╮ RB0 RB1 RB2 RB3 RB4 -- │
 │ 66  67  68  69  70╭────╯       ╰────╮77  78  79  80  81 │ │ --  --  --  --  --╭────╯       ╰────╮--  --  --  --  -- │
 ╰───────────────────┼────────┬────────┼───────────────────╯ ╰───────────────────┼────────┬────────┼───────────────────╯
                 ╭───╯ 35  36 │ 37  38 ╰───╮     ╭───────╮                   ╭───╯ --  -- │ --  -- ╰───╮     ╭───────╮
                 │(52)(53) 54 │ 57 (58)(59)│     │ 55 56 │                   │         -- │ --         │     │ -- -- │
                 │ 71  72  73 │ 74  75  76 │     ╰───────╯                   │ LH1 LH0 -- │ --  RH0 RH1│     ╰───────╯
                 ╰────────────┴────────────╯                                 ╰────────────┴────────────╯ */

/*                                 ADVANTAGE 360 EXTRA KEYS MAPPINGS
 ╭────────────────────────────┬────────────────────────────╮
 │ XLT XLT XLT XLT XLT XLT XLT│ XLT XLT XLT XLT XLT XLT XLT│
 │ XLT --  --  --  --  --  XMT│ XMT --  --  --  --  --  XRT│
 │ XLM --  --  --  --  --  XMM│ XMM --  --  --  --  --  XRM│
 │ XLB --  --  --  --  -- ╭───┴───╮ --  --  --  --  --  XRB│
 │ XLH XLH XLH XLH XLH╭───╯       ╰────╮XRH XRH XRH XRH XRH│
 ╰────────────────────┼───────┬────────┼───────────────────╯
                 ╭────╯XMM XMM│ XMM XMM╰───╮     ╭───────╮
                 │(XMB XMB)XMB│XMB(XMB XMB)│     │XMB XMB│
                 │ --  --  XMH│ XMH --  -- │     ╰───────╯
                 ╰────────────┴────────────╯  */

#pragma once

#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

#define RN0  8  // right-number row
#define RN1  9
#define RN2 10
#define RN3 11
#define RN4 12
#define RN5 13

#define LT0 19  // left-top row
#define LT1 18
#define LT2 17
#define LT3 16
#define LT4 15
#define LT5 14

#define RT0 22  // right-top row
#define RT1 23
#define RT2 24
#define RT3 25
#define RT4 26
#define RT5 27

#define LM0 33  // left-middle row
#define LM1 32
#define LM2 31
#define LM3 30
#define LM4 29
#define LM5 28

#define RM0 40  // right-middle row
#define RM1 41
#define RM2 42
#define RM3 43
#define RM4 44
#define RM5 45

#define LB0 51  // left-bottom row
#define LB1 50
#define LB2 49
#define LB3 48
#define LB4 47
#define LB5 46

#define RB0 60  // right-bottom row
#define RB1 61
#define RB2 62
#define RB3 63
#define RB4 64
#define RB5 65

#define LH0 72  // left thumb keys
#define LH1 71
#define LH2 73
#define LH3 54
#define LH4 36
#define LH5 35

#define RH0 75  // right thumb keys
#define RH1 76
#define RH2 74
#define RH3 57
#define RH4 37
#define RH5 38


