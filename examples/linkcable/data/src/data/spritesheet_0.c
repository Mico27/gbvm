#pragma bank 255
// SpriteSheet: actor_animated
  
#include "gbs_types.h"
#include "data/tileset_1.h"

const void __at(255) __bank_spritesheet_0;

const metasprite_t spritesheet_0_metasprite_0[]  = {
  { 0, 8, 6, 0 }, { 0, -8, 6, 32 },
{metasprite_end}
};

const metasprite_t spritesheet_0_metasprite_1[]  = {
  { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
{metasprite_end}
};

const metasprite_t spritesheet_0_metasprite_2[]  = {
  { 0, 8, 4, 0 }, { 0, -8, 4, 32 },
{metasprite_end}
};

const metasprite_t spritesheet_0_metasprite_3[]  = {
  { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
{metasprite_end}
};

const metasprite_t spritesheet_0_metasprite_4[]  = {
  { 0, 8, 14, 0 }, { 0, -8, 14, 32 },
{metasprite_end}
};

const metasprite_t spritesheet_0_metasprite_5[]  = {
  { 0, 8, 8, 0 }, { 0, -8, 10, 0 },
{metasprite_end}
};

const metasprite_t spritesheet_0_metasprite_6[]  = {
  { 0, 8, 12, 0 }, { 0, -8, 12, 32 },
{metasprite_end}
};

const metasprite_t spritesheet_0_metasprite_7[]  = {
  { 0, 0, 8, 32 }, { 0, 8, 10, 32 },
{metasprite_end}
};

const metasprite_t * const spritesheet_0_metasprites[] = {
    spritesheet_0_metasprite_0,
    spritesheet_0_metasprite_1,
    spritesheet_0_metasprite_2,
    spritesheet_0_metasprite_3,
    spritesheet_0_metasprite_4,
    spritesheet_0_metasprite_0,
    spritesheet_0_metasprite_5,
    spritesheet_0_metasprite_1,
    spritesheet_0_metasprite_6,
    spritesheet_0_metasprite_2,
    spritesheet_0_metasprite_7,
    spritesheet_0_metasprite_3
};

const struct spritesheet_t spritesheet_0 = {
    .n_metasprites = 12,
    .metasprites = spritesheet_0_metasprites,
    .animations = {
        {
            .start = 0,
            .end = 0
        },
        {
            .start = 1,
            .end = 1
        },
        {
            .start = 2,
            .end = 2
        },
        {
            .start = 3,
            .end = 3
        },
        {
            .start = 4,
            .end = 5
        },
        {
            .start = 6,
            .end = 7
        },
        {
            .start = 8,
            .end = 9
        },
        {
            .start = 10,
            .end = 11
        }
    },
    .tileset = TO_FAR_PTR_T(tileset_1),
    .cgb_tileset = { NULL, NULL }
};
