#ifndef DATA_PTRS_H
#define DATA_PTRS_H

#include "BankData.h"
#include "data/data_types.h"

#define NUM_VARIABLES 500
#define TMP_VAR_1 -1
#define TMP_VAR_2 -1

extern const far_ptr_t music_tracks[];

extern int start_scene_x;
extern int start_scene_y;
extern char start_scene_dir_x;
extern char start_scene_dir_y;
extern far_ptr_t start_scene;
extern far_ptr_t start_player_sprite;
extern far_ptr_t start_player_palette;
extern unsigned char start_player_move_speed;
extern unsigned char start_player_anim_speed;

// Engine fields
extern WORD plat_min_vel;
extern WORD plat_walk_vel;
extern WORD plat_run_vel;
extern WORD plat_walk_acc;
extern WORD plat_run_acc;
extern WORD plat_dec;
extern WORD plat_jump_vel;
extern WORD plat_grav;
extern WORD plat_hold_grav;
extern WORD plat_max_fall_vel;
extern UBYTE topdown_grid;
extern UBYTE fade_style;
extern UBYTE *engine_fields_addr;

extern unsigned char script_variables[500];

#endif
