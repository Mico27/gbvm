.module script_s7a5_interact

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_TMP1_PARAM0_VALUE = -4
.LOCAL_TMP2_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4
.LOCAL_TMP4_WAIT_ARGS = -5

___bank_script_s7a5_interact = 255
.globl ___bank_script_s7a5_interact

_script_s7a5_interact::
        VM_RESERVE              5

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST .EQ         .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; Call Script: Enemy Ship Hit Player
        VM_CALL_FAR             ___bank_script_enemy_ship_hit_player, _script_enemy_ship_hit_player

        ; Stop Script
        VM_STOP
2$:

        ; If Parameter 0 Equals 2
        VM_GET_TLOCAL           .LOCAL_TMP1_PARAM0_VALUE, 0
        VM_IF_CONST .EQ         .LOCAL_TMP1_PARAM0_VALUE, 2, 3$, 0
        VM_JUMP                 4$
3$:
        ; Call Script: Enemy Ship Destroy
        VM_PUSH_CONST           6 ; Actor SCRIPT_ARG_0_ACTOR
        VM_CALL_FAR             ___bank_script_enemy_ship_destroy, _script_enemy_ship_destroy

        ; Stop Script
        VM_STOP
4$:

        ; If Parameter 0 Equals 8
        VM_GET_TLOCAL           .LOCAL_TMP2_PARAM0_VALUE, 0
        VM_IF_CONST .EQ         .LOCAL_TMP2_PARAM0_VALUE, 8, 5$, 0
        VM_JUMP                 6$
5$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 6

        ; Actor Set Spritesheet
        VM_ACTOR_SET_SPRITESHEET .LOCAL_ACTOR, ___bank_spritesheet_4, _spritesheet_4

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP4_WAIT_ARGS, 30
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP4_WAIT_ARGS

        ; Actor Hide
        VM_SET_CONST            .LOCAL_ACTOR, 6
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Stop Script
        VM_STOP
6$:

        ; Stop Script
        VM_STOP
