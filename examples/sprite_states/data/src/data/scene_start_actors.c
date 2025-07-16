#pragma bank 255

// Scene: Start
// Actors

#include "gbs_types.h"
#include "data/sprite_box.h"
#include "data/actor_0_interact.h"

BANKREF(scene_start_actors)

const struct actor_t scene_start_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 1024,
            .y = 1792
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_box),
        .move_speed = 32,
        .anim_tick = 3,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_0_interact),
        .reserve_tiles = 0
    }
};
