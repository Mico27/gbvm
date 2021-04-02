#pragma bank 255

// SpriteSheet: hidden_stairs

#include "gbs_types.h"
#include "data/spritesheet_8_tiles.h"

const void __at(255) __bank_spritesheet_8;

const metasprite_t spritesheet_8_metasprite_0[]  = {
    {0, 0, 0, 0}, {0, 8, 2, 0}, {metasprite_end}
};

const metasprite_t spritesheet_8_metasprite_1[]  = {
    {0, 0, 4, 0}, {0, 8, 6, 0}, {metasprite_end}
};

const metasprite_t spritesheet_8_metasprite_2[]  = {
    {0, 0, 8,  0}, {0, 8, 10, 0}, {metasprite_end}
};

const metasprite_t spritesheet_8_metasprite_3[]  = {
    {0, 0, 12, 0}, {0, 8, 14, 0}, {metasprite_end}
};

const metasprite_t spritesheet_8_metasprite_4[]  = {
    {0, 0, 16, 0}, {0, 8, 18, 0}, {metasprite_end}
};

const metasprite_t spritesheet_8_metasprite_5[]  = {
    {0, 0, 20, 0}, {0, 8, 22, 0}, {metasprite_end}
};

const metasprite_t spritesheet_8_metasprite_6[]  = {
    {0, 0, 18, 32}, {0, 8, 16, 32}, {metasprite_end}
};

const metasprite_t spritesheet_8_metasprite_7[]  = {
    {0, 0, 22, 32}, {0, 8, 20, 32}, {metasprite_end}
};

const metasprite_t * const spritesheet_8_metasprites[] = {
    spritesheet_8_metasprite_0,
    spritesheet_8_metasprite_1,
    spritesheet_8_metasprite_2,
    spritesheet_8_metasprite_3,
    spritesheet_8_metasprite_4,
    spritesheet_8_metasprite_5,
    spritesheet_8_metasprite_6,
    spritesheet_8_metasprite_7
};

const struct spritesheet_t spritesheet_8 = {
  .n_tiles = 4,
  .n_metasprites = 6,
  .metasprites = spritesheet_8_metasprites,
  .tileset = TO_FAR_PTR_T(spritesheet_8_tiles),
  .cgb_tileset = { NULL, NULL },
};
