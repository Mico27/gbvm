#pragma bank 255

// Palette: 2

#include "gbs_types.h"

const void __at(255) __bank_palette_2;

const struct palette_t palette_2 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_LITE_GRAY, DMG_BLACK),
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(31, 29, 25), RGB(31, 29, 25), RGB(27, 18, 9), RGB(6, 3, 10)),
        CGB_PALETTE(RGB(28, 31, 20), RGB(28, 31, 20), RGB(15, 25, 7), RGB(1, 3, 1)),
        CGB_PALETTE(RGB(31, 27, 21), RGB(31, 27, 21), RGB(28, 21, 15), RGB(0, 4, 6)),
        CGB_PALETTE(RGB(23, 26, 26), RGB(23, 26, 26), RGB(27, 16, 27), RGB(7, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 23), RGB(31, 31, 23), RGB(18, 25, 25), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 27, 22), RGB(31, 27, 22), RGB(15, 24, 15), RGB(11, 7, 4)),
        CGB_PALETTE(RGB(31, 20, 8), RGB(31, 20, 8), RGB(0, 15, 31), RGB(0, 0, 1)),
        CGB_PALETTE(RGB(31, 31, 31), RGB(31, 31, 31), RGB(28, 11, 2), RGB(10, 6, 1)) 
    }
};
