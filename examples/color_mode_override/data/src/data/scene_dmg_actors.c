#pragma bank 255

// Scene: DMGSupport
// Actors

#include "gbs_types.h"
#include "data/sprite_elephant.h"

BANKREF(scene_dmg_actors)

const struct actor_t scene_dmg_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 2560,
            .y = 3328
        },
        .bounds = {
            .left = PX_TO_SUBPX(-21),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(25),
            .top = PX_TO_SUBPX(-31)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_elephant),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    }
};
