#pragma bank 255

// Scene: Scene 1
// Actors

#include "gbs_types.h"
#include "data/spritesheet_0.h"
#include "data/spritesheet_0.h"
#include "data/spritesheet_0.h"
#include "data/spritesheet_0.h"
#include "data/spritesheet_0.h"

const void __at(255) __bank_scene_0_actors;

const struct actor_t scene_0_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 0 * 16,
            .y = 8 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 0,
            .right = 16,
            .top = -16
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_0),
        .palette = 0,
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE
    },
    {
        // Actor 2,
        .pos = {
            .x = 16 * 16,
            .y = 24 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 0,
            .right = 16,
            .top = -16
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_0),
        .palette = 0,
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE
    },
    {
        // Actor 3,
        .pos = {
            .x = 32 * 16,
            .y = 40 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 0,
            .right = 16,
            .top = -16
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_0),
        .palette = 0,
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE
    },
    {
        // Actor 4,
        .pos = {
            .x = 48 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 0,
            .right = 16,
            .top = -16
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_0),
        .palette = 0,
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE
    },
    {
        // Actor 5,
        .pos = {
            .x = 64 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 0,
            .right = 16,
            .top = -16
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(spritesheet_0),
        .palette = 0,
        .move_speed = 16,
        .anim_tick = 3,
        .pinned = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE
    }
};
