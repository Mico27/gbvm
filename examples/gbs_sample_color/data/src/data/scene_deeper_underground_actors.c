#pragma bank 255

// Scene: caves/Deeper Underground
// Actors

#include "gbs_types.h"
#include "data/sprite_chest.h"
#include "data/actor_chest_interact.h"

BANKREF(scene_deeper_underground_actors)

const struct actor_t scene_deeper_underground_actors[] = {
    {
        // Chest,
        .pos = {
            .x = 6912,
            .y = 3840
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_chest),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_chest_interact),
        .reserve_tiles = 0
    }
};
