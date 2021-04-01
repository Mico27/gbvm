#pragma bank 255

// Palette: 1

#include "gbs_types.h"

const void __at(255) __bank_palette_1;

const palette_t palette_1 = {
    .mask = 0x03,
    .palette = {
        DMG_PALETTE(DMG_WHITE, DMG_WHITE, DMG_LITE_GRAY, DMG_BLACK),
        DMG_PALETTE(DMG_WHITE, DMG_LITE_GRAY, DMG_DARK_GRAY, DMG_BLACK)
    }
};
