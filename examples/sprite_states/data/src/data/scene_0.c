#pragma bank 255

// Scene: Start

#include "gbs_types.h"
#include "data/background_0.h"
#include "data/scene_0_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/spritesheet_0.h"
#include "data/scene_0_actors.h"
#include "data/scene_0_triggers.h"
#include "data/scene_0_sprites.h"
#include "data/script_s0_init.h"

BANKREF(scene_0)

const struct scene_t scene_0 = {
    .width = 32,
    .height = 32,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(background_0),
    .collisions = TO_FAR_PTR_T(scene_0_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(spritesheet_0),
    .n_actors = 1,
    .n_triggers = 4,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_0_actors),
    .triggers = TO_FAR_PTR_T(scene_0_triggers),
    .sprites = TO_FAR_PTR_T(scene_0_sprites),
    .script_init = TO_FAR_PTR_T(script_s0_init)
};
