#pragma bank 255

// Scene: Deeper Underground
// Triggers

#include "gbs_types.h"
#include "data/script_s13t0_interact.h"

const void __at(255) __bank_scene_13_triggers;

const struct trigger_t scene_13_triggers[] = {
    {
        // Trigger 1,
        .x = 4,
        .y = 0,
        .width = 2,
        .height = 1,
        .script = TO_FAR_PTR_T(script_s13t0_interact)
    }
};
