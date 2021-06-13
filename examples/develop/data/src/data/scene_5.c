#pragma bank 255

// Scene: Platform

#include "gbs_types.h"
#include "data/background_7.h"
#include "data/scene_5_collisions.h"
#include "data/palette_2.h"
#include "data/palette_6.h"
#include "data/spritesheet_11.h"
#include "data/scene_5_actors.h"
#include "data/scene_5_triggers.h"
#include "data/scene_5_sprites.h"
#include "data/script_s5_init.h"

const void __at(255) __bank_scene_5;

const struct scene_t scene_5 = {
    .width = 161,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(background_7),
    .collisions = TO_FAR_PTR_T(scene_5_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_2),
    .sprite_palette = TO_FAR_PTR_T(palette_6),
    .player_sprite = TO_FAR_PTR_T(spritesheet_11),
    .n_actors = 3,
    .n_triggers = 5,
    .n_sprites = 4,
    .actors = TO_FAR_PTR_T(scene_5_actors),
    .triggers = TO_FAR_PTR_T(scene_5_triggers),
    .sprites = TO_FAR_PTR_T(scene_5_sprites),
    .script_init = TO_FAR_PTR_T(script_s5_init)
};
