;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.1.4 #12246 (Mac OS X x86_64)
;--------------------------------------------------------
	.module spritesheet_0
	.optsdcc -mgbz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _spritesheet_0
	.globl _spritesheet_0_animations_lookup
	.globl _spritesheet_0_animations
	.globl _spritesheet_0_metasprites
	.globl _spritesheet_0_metasprite_7
	.globl _spritesheet_0_metasprite_6
	.globl _spritesheet_0_metasprite_5
	.globl _spritesheet_0_metasprite_4
	.globl _spritesheet_0_metasprite_3
	.globl _spritesheet_0_metasprite_2
	.globl _spritesheet_0_metasprite_1
	.globl _spritesheet_0_metasprite_0
	.globl ___bank_spritesheet_0
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _DATA
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	.area _INITIALIZED
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area _DABS (ABS)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area _HOME
	.area _GSINIT
	.area _GSFINAL
	.area _GSINIT
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area _HOME
	.area _HOME
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area _CODE_255
	.area _CODE_255
___bank_spritesheet_0	=	0x00ff
_spritesheet_0_metasprite_0:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x02	; 2
	.db #0x00	; 0
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprite_1:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x04	; 4
	.db #0x00	; 0
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x06	; 6
	.db #0x00	; 0
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprite_2:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x08	; 8
	.db #0x00	; 0
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x0a	; 10
	.db #0x00	; 0
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprite_3:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x0c	; 12
	.db #0x00	; 0
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x0e	; 14
	.db #0x00	; 0
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprite_4:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x10	; 16
	.db #0x00	; 0
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x12	; 18
	.db #0x00	; 0
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprite_5:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x14	; 20
	.db #0x00	; 0
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x16	; 22
	.db #0x00	; 0
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprite_6:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x12	; 18
	.db #0x20	; 32
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x10	; 16
	.db #0x20	; 32
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprite_7:
	.db #0x00	;  0
	.db #0x00	;  0
	.db #0x16	; 22
	.db #0x20	; 32
	.db #0x00	;  0
	.db #0x08	;  8
	.db #0x14	; 20
	.db #0x20	; 32
	.db #0x80	; -128
	.db #0x00	;  0
	.db #0x00	; 0
	.db #0x00	; 0
_spritesheet_0_metasprites:
	.dw _spritesheet_0_metasprite_0
	.dw _spritesheet_0_metasprite_1
	.dw _spritesheet_0_metasprite_2
	.dw _spritesheet_0_metasprite_3
	.dw _spritesheet_0_metasprite_4
	.dw _spritesheet_0_metasprite_5
	.dw _spritesheet_0_metasprite_6
	.dw _spritesheet_0_metasprite_7
_spritesheet_0_animations:
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x04	; 4
	.db #0x04	; 4
	.db #0x02	; 2
	.db #0x02	; 2
	.db #0x06	; 6
	.db #0x06	; 6
	.db #0x00	; 0
	.db #0x01	; 1
	.db #0x04	; 4
	.db #0x05	; 5
	.db #0x02	; 2
	.db #0x03	; 3
	.db #0x06	; 6
	.db #0x07	; 7
_spritesheet_0_animations_lookup:
	.dw #0x0000
_spritesheet_0:
	.db #0x06	; 6
	.dw _spritesheet_0_metasprites
	.dw _spritesheet_0_animations
	.dw _spritesheet_0_animations_lookup
	.db #0x00	;  0
	.db #0x0f	;  15
	.db #0x00	;  0
	.db #0x07	;  7
	.byte ___bank_spritesheet_0_tiles
	.dw _spritesheet_0_tiles
	.db #0x00	; 0
	.dw #0x0000
	.area _INITIALIZER
	.area _CABS (ABS)
