/*
 * Automatically generated by SheenBidiGenerator tool.
 * DO NOT EDIT!!
 *
 * REQUIRED MEMORY: (37)+2326+(579*2) = 3558 Bytes
 */

#include "PairingLookup.h"

static const SBInt16 _SBPairDifferences[37] = {
    0,     1,     -1,    2,     -2,    16,    -16,   3,     -3,    2016,  2527,  1923,  1914,  1918,
    2250,  138,   7,     -7,    1824,  2104,  2108,  2106,  1316,  -138,  8,     -8,    -1316,
    -1914, -1918, -1923, -1824, -2016, -2104, -2106, -2108, -2250, -2527
};

static const SBUInt8 _SBPairData[2326] = {
/* DATA_BLOCK: -- 0x0000..0x0070 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   65,  130, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   3,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   67,  0,   132, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x0071..0x00E1 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   67,  0,   132, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x00E2..0x0152 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x0153..0x01C3 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   65,
    130, 65,  130, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x01C4..0x0234 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   65,  130, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x0235..0x02A5 -- */
    1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   65,  130, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   65,  130, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   65,  130, 0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x02A6..0x0316 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   7,   7,   8,   8,   8,   0,   0,
    0,   0,   0,   0,   0,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   10,  11,  12,  13,
    0,   14,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   0,   15,  0,   16,  0,   0,   0,
    0,   0,   0,   17,  0,   0,   0,   0,   0,   1,   2,   1,   2,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   1,   2,   1,   2,   1,   2,   0,   0,
/* DATA_BLOCK: -- 0x0317..0x0387 -- */
    1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,
    2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   0,   0,   0,   1,   2,   1,   2,   0,
    0,   0,   0,   0,   18,  0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   19,
    0,   20,  21,  0,   21,  0,   0,   0,   0,   1,   2,   1,   2,   1,   2,   1,   2,   22,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   1,   2,
    23,  0,   0,   1,   2,   0,   0,   0,   0,   1,   2,   1,   2,   1,   2,   1,   2,   1,
/* DATA_BLOCK: -- 0x0388..0x03F8 -- */
    2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   0,   0,   1,   2,
    24,  24,  24,  0,   16,  16,  0,   0,   25,  25,  25,  17,  17,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   65,  130, 65,  130, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   65,  130,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x03F9..0x0469 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   65,  130, 65,  130, 65,  130, 65,
    130, 65,  130, 65,  130, 65,  130, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x046A..0x04DA -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   65,  130, 0,   1,   2,   0,   3,   0,
    4,   0,   0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   0,   26,  1,   2,   0,
    0,   0,   1,   2,   1,   2,   65,  130, 65,  130, 65,  130, 65,  130, 65,  130, 0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x04DB..0x054B -- */
    0,   0,   0,   0,   0,   65,  130, 65,  130, 65,  130, 65,  130, 65,  130, 71,  129, 66,  136,
    65,  130, 65,  130, 65,  130, 65,  130, 0,   0,   27,  0,   0,   0,   0,   28,  0,   0,   29,
    1,   2,   0,   0,   1,   2,   1,   2,   1,   2,   1,   2,   0,   0,   0,   0,   0,   0,   0,
    0,   30,  0,   0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   1,   2,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   1,   2,   1,   2,   0,   1,   2,   0,   0,   65,  130, 65,  130, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x054C..0x05BC -- */
    0,   0,   0,   0,   0,   0,   31,  0,   0,   1,   2,   0,   0,   65,  130, 0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   1,   2,   1,   2,   0,   0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   0,
    0,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x05BD..0x062D -- */
    0,   0,   0,   0,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,
    2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,
    1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   0,   0,   0,   1,   2,   1,   2,   1,   2,
    1,   2,   0,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,
    1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,   1,   2,
/* DATA_BLOCK: -- 0x062E..0x069E -- */
    1,   2,   1,   2,   1,   2,   0,   0,   0,   0,   0,   0,   0,   32,  0,   0,   0,   0,   33,
    34,  33,  0,   0,   0,   0,   0,   0,   1,   2,   35,  0,   0,   0,   0,   0,   0,   0,   0,
    1,   2,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x069F..0x070F -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   36,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x0710..0x0780 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   1,   2,   1,   2,   0,   0,   0,   1,   2,   0,   1,   2,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   2,   0,   0,   1,
    2,   65,  130, 65,  130, 65,  130, 65,  130, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x0781..0x07F1 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   65,  130, 65,
    130, 65,  130, 65,  130, 65,  130, 0,   0,   65,  130, 65,  130, 65,  130, 65,  130, 0,
/* DATA_BLOCK: -- 0x07F2..0x0862 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   65,  130, 65,  130, 65,  130, 0,   0,   0,   0,   0,   1,   2,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
/* DATA_BLOCK: -- 0x0863..0x08D3 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   65,  130, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   4,   0,   0,   0,
/* DATA_BLOCK: -- 0x08D4..0x0915 -- */
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   67,  0,   132, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    67,  0,   132, 0,   65,  130, 0,   65,  130,
};

static const SBUInt16 _SBPairIndexes[579] = {
    0x0000, 0x0071, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x0153, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x01C4, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x0235, 0x00E2, 0x00E2, 0x00E2, 0x02A6, 0x0317, 0x0388, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x03F9, 0x046A, 0x00E2, 0x00E2, 0x00E2, 0x04DB, 0x054C,
    0x05BD, 0x062E, 0x00E2, 0x069F, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x0710, 0x00E2, 0x00E2, 0x00E2,
    0x0781, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2, 0x00E2,
    0x07F2, 0x0863, 0x08D4
};

SB_INTERNAL SBCodepoint SBPairingDetermineMirror(SBCodepoint codepoint)
{
    if (codepoint <= 0xFF63) {
        SBInt16 diff = _SBPairDifferences[
                        _SBPairData[
                         _SBPairIndexes[
                              codepoint / 0x071
                         ] + (codepoint % 0x071)
                        ] & BracketTypeInverseMask
                       ];

        if (diff != 0) {
            return (codepoint + diff);
        }
    }

    return 0;
}

SB_INTERNAL SBCodepoint SBPairingDetermineBracketPair(SBCodepoint codepoint, BracketType *type)
{
    if (codepoint <= 0xFF63) {
        SBUInt8 data = _SBPairData[
                        _SBPairIndexes[
                             codepoint / 0x071
                        ] + (codepoint % 0x071)
                       ];
        *type = (data & BracketTypePrimaryMask);

        if (*type != 0) {
            SBInt16 diff = _SBPairDifferences[
                            data & BracketTypeInverseMask
                           ];
            return (codepoint + diff);
        }
    } else {
        *type = BracketTypeNone;
    }

    return 0;
}