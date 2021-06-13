#pragma bank 255

// Palette: 7

#include "gbs_types.h"

const void __at(255) __bank_palette_7;

const struct palette_t palette_7 = {
    .mask = 0xFF,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_LITE_GRAY, DMG_BLACK),
    },
    .cgb_palette = {
        CGB_PALETTE(RGB(24, 12, 28), RGB(24, 12, 28), RGB(5, 11, 28), RGB(9, 4, 10)),
        CGB_PALETTE(RGB(24, 12, 28), RGB(24, 12, 28), RGB(5, 11, 28), RGB(9, 4, 10)),
        CGB_PALETTE(RGB(31, 31, 23), RGB(31, 31, 23), RGB(18, 25, 25), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 30, 28), RGB(31, 30, 28), RGB(27, 16, 15), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 30, 28), RGB(31, 30, 28), RGB(27, 16, 15), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 30, 28), RGB(31, 30, 28), RGB(27, 16, 15), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 30, 28), RGB(31, 30, 28), RGB(27, 16, 15), RGB(1, 4, 9)),
        CGB_PALETTE(RGB(31, 30, 28), RGB(31, 30, 28), RGB(27, 16, 15), RGB(1, 4, 9)) 
    }
};
