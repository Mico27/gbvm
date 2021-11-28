#pragma bank 255
// SpriteSheet: player_platform
  
#include "gbs_types.h"
#include "data/tileset_22.h"

BANKREF(spritesheet_12)

#define SPRITE_12_STATE_DEFAULT 0
#define SPRITE_12_STATE_OPEN 0

const metasprite_t spritesheet_12_metasprite_0[]  = {
    { -12, 0, 0, 32 }, { 0, 8, 2, 32 }, { 12, -8, 10, 33 }, { 0, 8, 12, 33 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_1[]  = {
    { -12, 8, 0, 0 }, { 0, -8, 2, 0 }, { 12, 8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_2[]  = {
    { -12, 8, 8, 0 }, { 0, -8, 2, 0 }, { 12, 8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_3[]  = {
    { -11, 8, 0, 0 }, { 0, -8, 2, 0 }, { 11, 8, 4, 1 }, { 0, -8, 6, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_4[]  = {
    { -12, 8, 0, 0 }, { 0, -8, 2, 0 }, { 12, 8, 10, 1 }, { 0, -8, 12, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_5[]  = {
    { -12, 0, 0, 32 }, { 0, 8, 2, 32 }, { 12, -8, 4, 33 }, { 0, 8, 6, 33 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_6[]  = {
    { -12, 0, 8, 32 }, { 0, 8, 2, 32 }, { 12, -8, 4, 33 }, { 0, 8, 6, 33 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_7[]  = {
    { -11, 0, 0, 32 }, { 0, 8, 2, 32 }, { 11, -8, 4, 33 }, { 0, 8, 6, 33 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_8[]  = {
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_9[]  = {
    { -12, 8, 0, 0 }, { 0, -8, 2, 0 }, { 12, 8, 14, 1 }, { 0, -8, 16, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_10[]  = {
    { -12, 8, 0, 0 }, { 0, -8, 2, 0 }, { 12, 8, 18, 1 }, { 0, -8, 20, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_11[]  = {
    { -12, 8, 0, 0 }, { 0, -8, 2, 0 }, { 12, 8, 22, 1 }, { 0, -8, 24, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_12[]  = {
    { -12, 8, 26, 0 }, { 0, -8, 28, 0 }, { 12, 8, 30, 1 }, { 0, -8, 32, 1 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_13[]  = {
    { -12, 8, 26, 0 }, { 0, -8, 28, 0 }, { 12, 0, 30, 33 }, { 0, 8, 32, 33 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_14[]  = {
    { -12, 0, 0, 32 }, { 0, 8, 2, 32 }, { 12, -8, 14, 33 }, { 0, 8, 16, 33 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_15[]  = {
    { -12, 0, 0, 32 }, { 0, 8, 2, 32 }, { 12, -8, 18, 33 }, { 0, 8, 20, 33 },
    {metasprite_end}
};

const metasprite_t spritesheet_12_metasprite_16[]  = {
    { -12, 0, 0, 32 }, { 0, 8, 2, 32 }, { 12, -8, 22, 33 }, { 0, 8, 24, 33 },
    {metasprite_end}
};

const metasprite_t * const spritesheet_12_metasprites[] = {
    spritesheet_12_metasprite_0,
    spritesheet_12_metasprite_1,
    spritesheet_12_metasprite_2,
    spritesheet_12_metasprite_1,
    spritesheet_12_metasprite_1,
    spritesheet_12_metasprite_3,
    spritesheet_12_metasprite_1,
    spritesheet_12_metasprite_1,
    spritesheet_12_metasprite_1,
    spritesheet_12_metasprite_1,
    spritesheet_12_metasprite_4,
    spritesheet_12_metasprite_5,
    spritesheet_12_metasprite_6,
    spritesheet_12_metasprite_5,
    spritesheet_12_metasprite_5,
    spritesheet_12_metasprite_7,
    spritesheet_12_metasprite_5,
    spritesheet_12_metasprite_5,
    spritesheet_12_metasprite_5,
    spritesheet_12_metasprite_5,
    spritesheet_12_metasprite_8,
    spritesheet_12_metasprite_9,
    spritesheet_12_metasprite_10,
    spritesheet_12_metasprite_9,
    spritesheet_12_metasprite_11,
    spritesheet_12_metasprite_12,
    spritesheet_12_metasprite_13,
    spritesheet_12_metasprite_14,
    spritesheet_12_metasprite_15,
    spritesheet_12_metasprite_14,
    spritesheet_12_metasprite_16
};

const struct animation_t spritesheet_12_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 9
    },
    {
        .start = 10,
        .end = 10
    },
    {
        .start = 11,
        .end = 19
    },
    {
        .start = 20,
        .end = 20
    },
    {
        .start = 21,
        .end = 24
    },
    {
        .start = 25,
        .end = 26
    },
    {
        .start = 27,
        .end = 30
    }
};

const UWORD spritesheet_12_animations_lookup[] = {
    SPRITE_12_STATE_DEFAULT
};

const struct spritesheet_t spritesheet_12 = {
    .n_metasprites = 31,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = spritesheet_12_metasprites,
    .animations = spritesheet_12_animations,
    .animations_lookup = spritesheet_12_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(tileset_22),
    .cgb_tileset = { NULL, NULL }
};
