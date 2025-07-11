#pragma bank 255

// Scene: town/Launch Site
// Actors

#include "gbs_types.h"
#include "data/sprite_pod_door.h"
#include "data/sprite_npc005.h"
#include "data/actor_scientist_update.h"
#include "data/actor_scientist_interact.h"
#include "data/sprite_machine.h"
#include "data/actor_machine_interact.h"
#include "data/sprite_machine.h"
#include "data/actor_machine_0_interact.h"
#include "data/sprite_machine.h"
#include "data/actor_machine_1_interact.h"
#include "data/sprite_machine.h"
#include "data/actor_machine_2_interact.h"

BANKREF(scene_launch_site_actors)

const struct actor_t scene_launch_site_actors[] = {
    {
        // Pod Door,
        .pos = {
            .x = 3840,
            .y = 2304
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_pod_door),
        .move_speed = 32,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // Scientist,
        .pos = {
            .x = 2048,
            .y = 3072
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_UP,
        .sprite = TO_FAR_PTR_T(sprite_npc005),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_scientist_update),
        .script = TO_FAR_PTR_T(actor_scientist_interact),
        .reserve_tiles = 0
    },
    {
        // Machine,
        .pos = {
            .x = 1024,
            .y = 2048
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_machine),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_machine_interact),
        .reserve_tiles = 0
    },
    {
        // Machine,
        .pos = {
            .x = 512,
            .y = 2048
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_machine),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_machine_0_interact),
        .reserve_tiles = 0
    },
    {
        // Machine,
        .pos = {
            .x = 1536,
            .y = 2560
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_machine),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_machine_1_interact),
        .reserve_tiles = 0
    },
    {
        // Machine,
        .pos = {
            .x = 2048,
            .y = 2560
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_machine),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_machine_2_interact),
        .reserve_tiles = 0
    }
};
