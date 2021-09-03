#pragma bank 255

// Scene: Underground
// Triggers

#include "gbs_types.h"
#include "data/script_s6t0_interact.h"

BANKREF(scene_6_triggers)

const struct trigger_t scene_6_triggers[] = {
    {
        // Trigger 1,
        .x = 21,
        .y = 30,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(script_s6t0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
