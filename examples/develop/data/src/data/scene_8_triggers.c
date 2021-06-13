#pragma bank 255

// Scene: Parallax
// Triggers

#include "gbs_types.h"
#include "data/script_s8t0_interact.h"
#include "data/script_s8t1_interact.h"

const void __at(255) __bank_scene_8_triggers;

const struct trigger_t scene_8_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 0,
        .width = 1,
        .height = 14,
        .script = TO_FAR_PTR_T(script_s8t0_interact)
    },
    {
        // Trigger 2,
        .x = 79,
        .y = 0,
        .width = 1,
        .height = 14,
        .script = TO_FAR_PTR_T(script_s8t1_interact)
    }
};
