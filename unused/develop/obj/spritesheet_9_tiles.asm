;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.1.4 #12246 (Mac OS X x86_64)
;--------------------------------------------------------
	.module spritesheet_9_tiles
	.optsdcc -mgbz80
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _spritesheet_9_tiles
	.globl ___bank_spritesheet_9_tiles
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
___bank_spritesheet_9_tiles	=	0x00ff
_spritesheet_9_tiles:
	.dw #0x0018
	.db #0x07	; 7
	.db #0x07	; 7
	.db #0x18	; 24
	.db #0x1f	; 31
	.db #0x30	; 48	'0'
	.db #0x2f	; 47
	.db #0x6d	; 109	'm'
	.db #0x53	; 83	'S'
	.db #0x52	; 82	'R'
	.db #0x6f	; 111	'o'
	.db #0x4d	; 77	'M'
	.db #0x7e	; 126
	.db #0x53	; 83	'S'
	.db #0x7c	; 124
	.db #0x5b	; 91
	.db #0x76	; 118	'v'
	.db #0x5f	; 95
	.db #0x72	; 114	'r'
	.db #0x7f	; 127
	.db #0x58	; 88	'X'
	.db #0xcf	; 207
	.db #0xbc	; 188
	.db #0x9f	; 159
	.db #0xff	; 255
	.db #0x7f	; 127
	.db #0x7f	; 127
	.db #0x39	; 57	'9'
	.db #0x3f	; 63
	.db #0x1d	; 29
	.db #0x1b	; 27
	.db #0x0e	; 14
	.db #0x0e	; 14
	.db #0xe0	; 224
	.db #0xe0	; 224
	.db #0x18	; 24
	.db #0xf8	; 248
	.db #0x34	; 52	'4'
	.db #0xcc	; 204
	.db #0x5b	; 91
	.db #0xa7	; 167
	.db #0xa9	; 169
	.db #0xd7	; 215
	.db #0x46	; 70	'F'
	.db #0xfe	; 254
	.db #0xba	; 186
	.db #0x7e	; 126
	.db #0xda	; 218
	.db #0x6e	; 110	'n'
	.db #0xfa	; 250
	.db #0x4e	; 78	'N'
	.db #0xfb	; 251
	.db #0x1d	; 29
	.db #0xf1	; 241
	.db #0x3f	; 63
	.db #0xfe	; 254
	.db #0xfe	; 254
	.db #0x3c	; 60
	.db #0xe4	; 228
	.db #0xfc	; 252
	.db #0xe4	; 228
	.db #0xf8	; 248
	.db #0xf8	; 248
	.db #0x70	; 112	'p'
	.db #0x70	; 112	'p'
	.db #0x07	; 7
	.db #0x07	; 7
	.db #0x18	; 24
	.db #0x1f	; 31
	.db #0x30	; 48	'0'
	.db #0x2f	; 47
	.db #0x6d	; 109	'm'
	.db #0x53	; 83	'S'
	.db #0x52	; 82	'R'
	.db #0x6f	; 111	'o'
	.db #0x4d	; 77	'M'
	.db #0x7e	; 126
	.db #0x53	; 83	'S'
	.db #0x7c	; 124
	.db #0x5b	; 91
	.db #0x76	; 118	'v'
	.db #0x5f	; 95
	.db #0x72	; 114	'r'
	.db #0xff	; 255
	.db #0xd8	; 216
	.db #0xcf	; 207
	.db #0xbc	; 188
	.db #0x5f	; 95
	.db #0x7f	; 127
	.db #0x3c	; 60
	.db #0x27	; 39
	.db #0x3f	; 63
	.db #0x27	; 39
	.db #0x1f	; 31
	.db #0x1f	; 31
	.db #0x0e	; 14
	.db #0x0e	; 14
	.db #0xe0	; 224
	.db #0xe0	; 224
	.db #0x18	; 24
	.db #0xf8	; 248
	.db #0x34	; 52	'4'
	.db #0xcc	; 204
	.db #0x5a	; 90	'Z'
	.db #0xa6	; 166
	.db #0xaa	; 170
	.db #0xd6	; 214
	.db #0x41	; 65	'A'
	.db #0xff	; 255
	.db #0xbf	; 191
	.db #0x7f	; 127
	.db #0xda	; 218
	.db #0x6e	; 110	'n'
	.db #0xfa	; 250
	.db #0x4e	; 78	'N'
	.db #0xfb	; 251
	.db #0x1d	; 29
	.db #0xf3	; 243
	.db #0x3d	; 61
	.db #0xf9	; 249
	.db #0xff	; 255
	.db #0xfe	; 254
	.db #0xfe	; 254
	.db #0x9c	; 156
	.db #0xfc	; 252
	.db #0xb8	; 184
	.db #0xd8	; 216
	.db #0x70	; 112	'p'
	.db #0x70	; 112	'p'
	.db #0x07	; 7
	.db #0x07	; 7
	.db #0x18	; 24
	.db #0x1f	; 31
	.db #0x28	; 40
	.db #0x37	; 55	'7'
	.db #0x46	; 70	'F'
	.db #0x79	; 121	'y'
	.db #0xc1	; 193
	.db #0xfe	; 254
	.db #0x40	; 64
	.db #0x7f	; 127
	.db #0x40	; 64
	.db #0x7f	; 127
	.db #0x40	; 64
	.db #0x7f	; 127
	.db #0x4b	; 75	'K'
	.db #0x74	; 116	't'
	.db #0xdb	; 219
	.db #0xb6	; 182
	.db #0xdb	; 219
	.db #0xb6	; 182
	.db #0xb7	; 183
	.db #0xea	; 234
	.db #0x7e	; 126
	.db #0x7d	; 125
	.db #0x3f	; 63
	.db #0x27	; 39
	.db #0x1f	; 31
	.db #0x1f	; 31
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0xe0	; 224
	.db #0xe0	; 224
	.db #0x18	; 24
	.db #0xf8	; 248
	.db #0x14	; 20
	.db #0xec	; 236
	.db #0x62	; 98	'b'
	.db #0x9e	; 158
	.db #0x82	; 130
	.db #0x7e	; 126
	.db #0x02	; 2
	.db #0xfe	; 254
	.db #0x02	; 2
	.db #0xfe	; 254
	.db #0x06	; 6
	.db #0xfa	; 250
	.db #0x26	; 38
	.db #0xda	; 218
	.db #0x26	; 38
	.db #0xda	; 218
	.db #0x33	; 51	'3'
	.db #0xdd	; 221
	.db #0xb1	; 177
	.db #0xdf	; 223
	.db #0x9e	; 158
	.db #0xfe	; 254
	.db #0xfc	; 252
	.db #0xfc	; 252
	.db #0xb0	; 176
	.db #0xd0	; 208
	.db #0x70	; 112	'p'
	.db #0x70	; 112	'p'
	.db #0x07	; 7
	.db #0x07	; 7
	.db #0x18	; 24
	.db #0x1f	; 31
	.db #0x28	; 40
	.db #0x37	; 55	'7'
	.db #0x46	; 70	'F'
	.db #0x79	; 121	'y'
	.db #0x41	; 65	'A'
	.db #0x7e	; 126
	.db #0xc0	; 192
	.db #0xff	; 255
	.db #0x40	; 64
	.db #0x7f	; 127
	.db #0x40	; 64
	.db #0x7f	; 127
	.db #0x4b	; 75	'K'
	.db #0x74	; 116	't'
	.db #0xc9	; 201
	.db #0xb6	; 182
	.db #0xdb	; 219
	.db #0xb6	; 182
	.db #0x9a	; 154
	.db #0xf7	; 247
	.db #0x72	; 114	'r'
	.db #0x7f	; 127
	.db #0x3f	; 63
	.db #0x3f	; 63
	.db #0x0d	; 13
	.db #0x0b	; 11
	.db #0x0e	; 14
	.db #0x0e	; 14
	.db #0xe0	; 224
	.db #0xe0	; 224
	.db #0x18	; 24
	.db #0xf8	; 248
	.db #0x14	; 20
	.db #0xec	; 236
	.db #0x62	; 98	'b'
	.db #0x9e	; 158
	.db #0x82	; 130
	.db #0x7e	; 126
	.db #0x02	; 2
	.db #0xfe	; 254
	.db #0x02	; 2
	.db #0xfe	; 254
	.db #0x06	; 6
	.db #0xfa	; 250
	.db #0x26	; 38
	.db #0xda	; 218
	.db #0x26	; 38
	.db #0xda	; 218
	.db #0x6f	; 111	'o'
	.db #0xb9	; 185
	.db #0xed	; 237
	.db #0xbb	; 187
	.db #0x9e	; 158
	.db #0xfe	; 254
	.db #0xfc	; 252
	.db #0xe4	; 228
	.db #0xf8	; 248
	.db #0xf8	; 248
	.db #0x00	; 0
	.db #0x00	; 0
	.db #0x07	; 7
	.db #0x07	; 7
	.db #0x18	; 24
	.db #0x1f	; 31
	.db #0x22	; 34
	.db #0x3d	; 61
	.db #0x6c	; 108	'l'
	.db #0x53	; 83	'S'
	.db #0x54	; 84	'T'
	.db #0x6f	; 111	'o'
	.db #0x48	; 72	'H'
	.db #0x7f	; 127
	.db #0x49	; 73	'I'
	.db #0x7e	; 126
	.db #0x5f	; 95
	.db #0x7f	; 127
	.db #0x46	; 70	'F'
	.db #0x7d	; 125
	.db #0x67	; 103	'g'
	.db #0x5c	; 92
	.db #0x73	; 115	's'
	.db #0x4f	; 79	'O'
	.db #0xd4	; 212
	.db #0xbf	; 191
	.db #0x79	; 121	'y'
	.db #0x7f	; 127
	.db #0x1f	; 31
	.db #0x13	; 19
	.db #0x0f	; 15
	.db #0x0f	; 15
	.db #0x06	; 6
	.db #0x06	; 6
	.db #0xf0	; 240
	.db #0xf0	; 240
	.db #0x0c	; 12
	.db #0xfc	; 252
	.db #0x1a	; 26
	.db #0xe6	; 230
	.db #0x07	; 7
	.db #0xf9	; 249
	.db #0xb1	; 177
	.db #0x5f	; 95
	.db #0xe9	; 233
	.db #0x3f	; 63
	.db #0xd7	; 215
	.db #0xef	; 239
	.db #0x1d	; 29
	.db #0xf5	; 245
	.db #0xfc	; 252
	.db #0x14	; 20
	.db #0xfe	; 254
	.db #0x02	; 2
	.db #0x7c	; 124
	.db #0x84	; 132
	.db #0xf8	; 248
	.db #0xf8	; 248
	.db #0x30	; 48	'0'
	.db #0xd0	; 208
	.db #0xf8	; 248
	.db #0xe8	; 232
	.db #0x5c	; 92
	.db #0x64	; 100	'd'
	.db #0x38	; 56	'8'
	.db #0x38	; 56	'8'
	.db #0x07	; 7
	.db #0x07	; 7
	.db #0x18	; 24
	.db #0x1f	; 31
	.db #0x22	; 34
	.db #0x3d	; 61
	.db #0x6c	; 108	'l'
	.db #0x53	; 83	'S'
	.db #0x54	; 84	'T'
	.db #0x6f	; 111	'o'
	.db #0x48	; 72	'H'
	.db #0x7f	; 127
	.db #0x51	; 81	'Q'
	.db #0x7e	; 126
	.db #0x4f	; 79	'O'
	.db #0x7f	; 127
	.db #0x46	; 70	'F'
	.db #0x7d	; 125
	.db #0x67	; 103	'g'
	.db #0x5c	; 92
	.db #0x73	; 115	's'
	.db #0x4f	; 79	'O'
	.db #0xd4	; 212
	.db #0xbf	; 191
	.db #0x7e	; 126
	.db #0x7f	; 127
	.db #0x37	; 55	'7'
	.db #0x3f	; 63
	.db #0x17	; 23
	.db #0x19	; 25
	.db #0x0e	; 14
	.db #0x0e	; 14
	.db #0xf0	; 240
	.db #0xf0	; 240
	.db #0x0c	; 12
	.db #0xfc	; 252
	.db #0x1a	; 26
	.db #0xe6	; 230
	.db #0x07	; 7
	.db #0xf9	; 249
	.db #0xb1	; 177
	.db #0x5f	; 95
	.db #0xe9	; 233
	.db #0x3f	; 63
	.db #0xd6	; 214
	.db #0xee	; 238
	.db #0x1e	; 30
	.db #0xf6	; 246
	.db #0xfc	; 252
	.db #0x14	; 20
	.db #0xfe	; 254
	.db #0x02	; 2
	.db #0x7c	; 124
	.db #0x84	; 132
	.db #0xf8	; 248
	.db #0xf8	; 248
	.db #0x50	; 80	'P'
	.db #0xf0	; 240
	.db #0xfc	; 252
	.db #0x3c	; 60
	.db #0xfc	; 252
	.db #0xfc	; 252
	.db #0x30	; 48	'0'
	.db #0x30	; 48	'0'
	.area _INITIALIZER
	.area _CABS (ABS)
