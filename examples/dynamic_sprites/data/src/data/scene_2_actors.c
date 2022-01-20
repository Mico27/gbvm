#pragma bank 255

// Scene: Dynamic Player Sprite
// Actors

#include "gbs_types.h"
#include "data/spritesheet_4.h"
#include "data/script_s2a0_interact.h"
#include "data/spritesheet_5.h"
#include "data/script_s2a1_interact.h"
#include "data/spritesheet_1.h"
#include "data/script_s2a2_interact.h"
#include "data/spritesheet_2.h"
#include "data/script_s2a3_interact.h"
#include "data/spritesheet_0.h"
#include "data/script_s2a4_interact.h"
#include "data/spritesheet_6.h"
#include "data/script_s2a5_interact.h"

BANKREF(scene_2_actors)

const struct actor_t scene_2_actors[] = {
    {
        // Portal,
        .pos = {
            .x = 72 * 16,
            .y = 16 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_4),
        .move_speed = 16,
        .anim_tick = 7,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s2a0_interact),
        .exclusive_sprite = 0
    },
    {
        // Signpost,
        .pos = {
            .x = 56 * 16,
            .y = 16 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_5),
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s2a1_interact),
        .exclusive_sprite = 0
    },
    {
        // SetPlayerToPlayer,
        .pos = {
            .x = 32 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_1),
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s2a2_interact),
        .exclusive_sprite = 0
    },
    {
        // SetPlayerToCat,
        .pos = {
            .x = 112 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_2),
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s2a3_interact),
        .exclusive_sprite = 0
    },
    {
        // SetPlayerToDog,
        .pos = {
            .x = 112 * 16,
            .y = 112 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_0),
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s2a4_interact),
        .exclusive_sprite = 0
    },
    {
        // SetPlayerToNPC006,
        .pos = {
            .x = 32 * 16,
            .y = 112 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_6),
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(script_s2a5_interact),
        .exclusive_sprite = 0
    }
};
