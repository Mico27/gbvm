#pragma bank 255

// Scene: Title
// Actors

#include "gbs_types.h"
#include "data/sprite_press_start.h"
#include "data/sprite_continue.h"
#include "data/sprite_new_game.h"
#include "data/sprite_button_a.h"
#include "data/sprite_button_b.h"

BANKREF(scene_title_actors)

const struct actor_t scene_title_actors[] = {
    {
        // Start,
        .pos = {
            .x = 512,
            .y = 768
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_press_start),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // Continue,
        .pos = {
            .x = 2560,
            .y = 256
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_continue),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // New_Game,
        .pos = {
            .x = 2560,
            .y = 768
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_new_game),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // C_Button,
        .pos = {
            .x = 4096,
            .y = 256
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_button_a),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // NG_Button,
        .pos = {
            .x = 4096,
            .y = 768
        },
        .bounds = {
            .left = PX_TO_SUBPX(0),
            .bottom = PX_TO_SUBPX(7),
            .right = PX_TO_SUBPX(15),
            .top = PX_TO_SUBPX(-8)
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_button_b),
        .move_speed = 32,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    }
};
