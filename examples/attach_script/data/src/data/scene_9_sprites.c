#pragma bank 255

// Scene: Scene 10
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_1.h"

BANKREF(scene_9_sprites)

const far_ptr_t scene_9_sprites[] = {
    TO_FAR_PTR_T(spritesheet_1)
};
