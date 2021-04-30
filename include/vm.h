#ifndef _VM_H_INCLUDE
#define _VM_H_INCLUDE

#include <gb/gb.h>
#include <gb/far_ptr.h>

#ifdef VM_DEBUG_OUTPUT
    #include <stdio.h>
#endif

typedef void * SCRIPT_CMD_FN;

typedef struct _SCRIPT_CMD {
    SCRIPT_CMD_FN fn;  
    UBYTE args_len;
} SCRIPT_CMD;

#define FAR_CALL_EX(addr, seg, typ, ...) (__call_banked_addr=(addr),__call_banked_bank=(seg),((typ)(&__call__banked))(__VA_ARGS__))
typedef UBYTE (*SCRIPT_UPDATE_FN)(void * THIS, UBYTE start, UWORD * stack_frame) __banked;

#define VM_REF_TO_PTR(idx) (void *)(((idx) < 0) ? THIS->stack_ptr + (idx) : script_memory + (idx))

typedef struct SCRIPT_CTX {
    const UBYTE * PC;
    UBYTE bank;
    // linked list of contexts for cooperative multitasking
    struct SCRIPT_CTX * next;
    // update function
    void * update_fn;
    UBYTE update_fn_bank;
    // VM stack pointer
    UWORD * stack_ptr;
    UWORD * base_addr;
    // thread control
    UBYTE ID;
    UWORD * hthread;
    UBYTE terminated;
    // waitable state
    UBYTE waitable;
    UBYTE lock_count;
    UBYTE flags;
} SCRIPT_CTX;

#define INSTRUCTION_SIZE 1

// maximum number of concurrent running VM threads
#define SCRIPT_MAX_CONTEXTS 16
// stack size of each VM thread
#define CONTEXT_STACK_SIZE 64
// number of shared variables
#define MAX_GLOBAL_VARS 32
// quant size
#define INSTRUCTIONS_PER_QUANT 0x10
// termination flag
#define SCRIPT_TERMINATED 0x8000

// logical operators
#define VM_OP_EQ  1
#define VM_OP_LT  2
#define VM_OP_LE  3
#define VM_OP_GT  4
#define VM_OP_GE  5
#define VM_OP_NE  6
#define VM_OP_AND 7
#define VM_OP_OR  8
#define VM_OP_NOT 9

// shared context memory
extern UWORD script_memory[MAX_GLOBAL_VARS + (SCRIPT_MAX_CONTEXTS * CONTEXT_STACK_SIZE)];  // maximum stack depth is 16 words

// contexts for executing scripts 
// ScriptRunnerInit(), ExecuteScript(), ScriptRunnerUpdate() manipulate these contexts
extern SCRIPT_CTX CTXS[SCRIPT_MAX_CONTEXTS];
extern SCRIPT_CTX * first_ctx, * free_ctxs;

// lock state 
extern UBYTE vm_lock_state;
// loaded state
extern UBYTE vm_loaded_state;
// exception flag and parameters
extern UBYTE vm_exception_code;
extern UBYTE vm_exception_params_length;
extern UBYTE vm_exception_params_bank;
extern const void * vm_exception_params_offset;

// script core functions
void vm_push(SCRIPT_CTX * THIS, UWORD value) __banked;
UWORD vm_pop(SCRIPT_CTX * THIS, UBYTE n) __banked;
void vm_call_rel(SCRIPT_CTX * THIS, INT8 ofs) __banked;
void vm_call(SCRIPT_CTX * THIS, UBYTE * pc) __banked;
void vm_ret(SCRIPT_CTX * THIS, UBYTE n) __banked;
void vm_call_far(SCRIPT_CTX * THIS, UBYTE bank, UBYTE * pc) __banked;
void vm_ret_far(SCRIPT_CTX * THIS, UBYTE n) __banked;
void vm_loop_rel(SCRIPT_CTX * THIS, INT16 idx, INT8 ofs, UBYTE n) __banked;
void vm_loop(SCRIPT_CTX * THIS, INT16 idx, UINT8 * pc, UBYTE n) __banked;
void vm_jump_rel(SCRIPT_CTX * THIS, INT8 ofs) __banked;
void vm_jump(SCRIPT_CTX * THIS, UBYTE * pc) __banked;
void vm_systime(SCRIPT_CTX * THIS, INT16 idx) __banked;
void vm_invoke(SCRIPT_CTX * THIS, UBYTE bank, UBYTE * fn, UBYTE nparams, INT16 idx) __banked;
void vm_beginthread(UWORD dummy0, UWORD dummy1, SCRIPT_CTX * THIS, UBYTE bank, UBYTE * pc, INT16 idx, UBYTE nargs) __nonbanked;
void vm_if(SCRIPT_CTX * THIS, UBYTE condition, INT16 idxA, INT16 idxB, UBYTE * pc, UBYTE n) __banked;
void vm_if_const(SCRIPT_CTX * THIS, UBYTE condition, INT16 idxA, INT16 B, UBYTE * pc, UBYTE n) __banked;
void vm_push_value(SCRIPT_CTX * THIS, INT16 idx) __banked;
void vm_push_value_ind(SCRIPT_CTX * THIS, INT16 idx) __banked;
void vm_reserve(SCRIPT_CTX * THIS, INT8 ofs) __banked;
void vm_set(SCRIPT_CTX * THIS, INT16 idxA, INT16 idxB) __banked;
void vm_set_const(SCRIPT_CTX * THIS, INT16 idx, UWORD value) __banked;
void vm_rpn(UWORD dummy0, UWORD dummy1, SCRIPT_CTX * THIS) __nonbanked;
void vm_join(SCRIPT_CTX * THIS, INT16 idx) __banked;
void vm_terminate(SCRIPT_CTX * THIS, INT16 idx) __banked;
void vm_idle(SCRIPT_CTX * THIS) __banked;
void vm_get_tlocal(SCRIPT_CTX * THIS, INT16 idxA, INT16 idxB) __banked;
void vm_get_uint8(SCRIPT_CTX * THIS, INT16 idxA, UINT8 * addr) __banked;
void vm_get_int8(SCRIPT_CTX * THIS, INT16 idxA, INT8 * addr) __banked;
void vm_get_int16(SCRIPT_CTX * THIS, INT16 idxA, INT16 * addr) __banked;
void vm_set_uint8(SCRIPT_CTX * THIS, UINT8 * addr, INT16 idxA) __banked;
void vm_set_int8(SCRIPT_CTX * THIS, INT8 * addr, INT16 idxA) __banked;
void vm_set_int16(SCRIPT_CTX * THIS, INT16 * addr, INT16 idxA) __banked;
void vm_set_const_int8(SCRIPT_CTX * THIS, UINT8 * addr, UINT8 v) __banked;
void vm_set_const_int16(SCRIPT_CTX * THIS, INT16 * addr, INT16 v) __banked;
void vm_randomize() __banked;
void vm_rand(SCRIPT_CTX * THIS, INT16 idx, UINT16 min, UINT16 limit, UINT16 mask) __banked;
void vm_lock(SCRIPT_CTX * THIS) __banked;
void vm_unlock(SCRIPT_CTX * THIS) __banked;
void vm_raise(SCRIPT_CTX * THIS, UBYTE code, UBYTE size) __banked;
void vm_set_indirect(SCRIPT_CTX * THIS, INT16 idxA, INT16 idxB) __banked;
void vm_get_indirect(SCRIPT_CTX * THIS, INT16 idxA, INT16 idxB) __banked;
void vm_test_terminate(SCRIPT_CTX * THIS, UBYTE flags) __banked;
void vm_poll_loaded(SCRIPT_CTX * THIS, INT16 idx) __banked;
void vm_memset(SCRIPT_CTX * THIS, INT16 idx, INT16 value, INT16 count) __banked;
void vm_memcpy(SCRIPT_CTX * THIS, INT16 idxA, INT16 idxB, INT16 count) __banked;

// return zero if script end
// bank with VM code must be active
UBYTE VM_STEP(SCRIPT_CTX * CTX) __naked __nonbanked __preserves_regs(b, c);

// return TRUE if VM is in locked state
inline UBYTE VM_ISLOCKED() {
    return (vm_lock_state != 0);
} 

// initialize script runner contexts
void script_runner_init(UBYTE reset) __banked;
// execute a script in the new allocated context
SCRIPT_CTX * script_execute(UBYTE bank, UBYTE * pc, UWORD * handle, INT8 nargs, ...) __banked;
// terminate script by ID; returns non zero if no such thread is running
UBYTE script_terminate(UBYTE ID) __banked; 

#define RUNNER_DONE 0
#define RUNNER_IDLE 1
#define RUNNER_BUSY 2
#define RUNNER_EXCEPTION 3

#define EXCEPTION_CODE_NONE 0

// process all contexts
UBYTE script_runner_update() __nonbanked;

#endif