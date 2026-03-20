                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler
                                      3 ; Version 4.5.0 #15242 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _ledfade
                                     13 	.globl _delay
                                     14 	.globl _CY
                                     15 	.globl _AC
                                     16 	.globl _F0
                                     17 	.globl _RS1
                                     18 	.globl _RS0
                                     19 	.globl _OV
                                     20 	.globl _F1
                                     21 	.globl _P
                                     22 	.globl _PS
                                     23 	.globl _PT1
                                     24 	.globl _PX1
                                     25 	.globl _PT0
                                     26 	.globl _PX0
                                     27 	.globl _RD
                                     28 	.globl _WR
                                     29 	.globl _T1
                                     30 	.globl _T0
                                     31 	.globl _INT1
                                     32 	.globl _INT0
                                     33 	.globl _TXD
                                     34 	.globl _RXD
                                     35 	.globl _P3_7
                                     36 	.globl _P3_6
                                     37 	.globl _P3_5
                                     38 	.globl _P3_4
                                     39 	.globl _P3_3
                                     40 	.globl _P3_2
                                     41 	.globl _P3_1
                                     42 	.globl _P3_0
                                     43 	.globl _EA
                                     44 	.globl _ES
                                     45 	.globl _ET1
                                     46 	.globl _EX1
                                     47 	.globl _ET0
                                     48 	.globl _EX0
                                     49 	.globl _P2_7
                                     50 	.globl _P2_6
                                     51 	.globl _P2_5
                                     52 	.globl _P2_4
                                     53 	.globl _P2_3
                                     54 	.globl _P2_2
                                     55 	.globl _P2_1
                                     56 	.globl _P2_0
                                     57 	.globl _SM0
                                     58 	.globl _SM1
                                     59 	.globl _SM2
                                     60 	.globl _REN
                                     61 	.globl _TB8
                                     62 	.globl _RB8
                                     63 	.globl _TI
                                     64 	.globl _RI
                                     65 	.globl _P1_7
                                     66 	.globl _P1_6
                                     67 	.globl _P1_5
                                     68 	.globl _P1_4
                                     69 	.globl _P1_3
                                     70 	.globl _P1_2
                                     71 	.globl _P1_1
                                     72 	.globl _P1_0
                                     73 	.globl _TF1
                                     74 	.globl _TR1
                                     75 	.globl _TF0
                                     76 	.globl _TR0
                                     77 	.globl _IE1
                                     78 	.globl _IT1
                                     79 	.globl _IE0
                                     80 	.globl _IT0
                                     81 	.globl _P0_7
                                     82 	.globl _P0_6
                                     83 	.globl _P0_5
                                     84 	.globl _P0_4
                                     85 	.globl _P0_3
                                     86 	.globl _P0_2
                                     87 	.globl _P0_1
                                     88 	.globl _P0_0
                                     89 	.globl _B
                                     90 	.globl _ACC
                                     91 	.globl _PSW
                                     92 	.globl _IP
                                     93 	.globl _P3
                                     94 	.globl _IE
                                     95 	.globl _P2
                                     96 	.globl _SBUF
                                     97 	.globl _SCON
                                     98 	.globl _P1
                                     99 	.globl _TH1
                                    100 	.globl _TH0
                                    101 	.globl _TL1
                                    102 	.globl _TL0
                                    103 	.globl _TMOD
                                    104 	.globl _TCON
                                    105 	.globl _PCON
                                    106 	.globl _DPH
                                    107 	.globl _DPL
                                    108 	.globl _SP
                                    109 	.globl _P0
                                    110 	.globl _atime
                                    111 ;--------------------------------------------------------
                                    112 ; special function registers
                                    113 ;--------------------------------------------------------
                                    114 	.area RSEG    (ABS,DATA)
      000000                        115 	.org 0x0000
                           000080   116 _P0	=	0x0080
                           000081   117 _SP	=	0x0081
                           000082   118 _DPL	=	0x0082
                           000083   119 _DPH	=	0x0083
                           000087   120 _PCON	=	0x0087
                           000088   121 _TCON	=	0x0088
                           000089   122 _TMOD	=	0x0089
                           00008A   123 _TL0	=	0x008a
                           00008B   124 _TL1	=	0x008b
                           00008C   125 _TH0	=	0x008c
                           00008D   126 _TH1	=	0x008d
                           000090   127 _P1	=	0x0090
                           000098   128 _SCON	=	0x0098
                           000099   129 _SBUF	=	0x0099
                           0000A0   130 _P2	=	0x00a0
                           0000A8   131 _IE	=	0x00a8
                           0000B0   132 _P3	=	0x00b0
                           0000B8   133 _IP	=	0x00b8
                           0000D0   134 _PSW	=	0x00d0
                           0000E0   135 _ACC	=	0x00e0
                           0000F0   136 _B	=	0x00f0
                                    137 ;--------------------------------------------------------
                                    138 ; special function bits
                                    139 ;--------------------------------------------------------
                                    140 	.area RSEG    (ABS,DATA)
      000000                        141 	.org 0x0000
                           000080   142 _P0_0	=	0x0080
                           000081   143 _P0_1	=	0x0081
                           000082   144 _P0_2	=	0x0082
                           000083   145 _P0_3	=	0x0083
                           000084   146 _P0_4	=	0x0084
                           000085   147 _P0_5	=	0x0085
                           000086   148 _P0_6	=	0x0086
                           000087   149 _P0_7	=	0x0087
                           000088   150 _IT0	=	0x0088
                           000089   151 _IE0	=	0x0089
                           00008A   152 _IT1	=	0x008a
                           00008B   153 _IE1	=	0x008b
                           00008C   154 _TR0	=	0x008c
                           00008D   155 _TF0	=	0x008d
                           00008E   156 _TR1	=	0x008e
                           00008F   157 _TF1	=	0x008f
                           000090   158 _P1_0	=	0x0090
                           000091   159 _P1_1	=	0x0091
                           000092   160 _P1_2	=	0x0092
                           000093   161 _P1_3	=	0x0093
                           000094   162 _P1_4	=	0x0094
                           000095   163 _P1_5	=	0x0095
                           000096   164 _P1_6	=	0x0096
                           000097   165 _P1_7	=	0x0097
                           000098   166 _RI	=	0x0098
                           000099   167 _TI	=	0x0099
                           00009A   168 _RB8	=	0x009a
                           00009B   169 _TB8	=	0x009b
                           00009C   170 _REN	=	0x009c
                           00009D   171 _SM2	=	0x009d
                           00009E   172 _SM1	=	0x009e
                           00009F   173 _SM0	=	0x009f
                           0000A0   174 _P2_0	=	0x00a0
                           0000A1   175 _P2_1	=	0x00a1
                           0000A2   176 _P2_2	=	0x00a2
                           0000A3   177 _P2_3	=	0x00a3
                           0000A4   178 _P2_4	=	0x00a4
                           0000A5   179 _P2_5	=	0x00a5
                           0000A6   180 _P2_6	=	0x00a6
                           0000A7   181 _P2_7	=	0x00a7
                           0000A8   182 _EX0	=	0x00a8
                           0000A9   183 _ET0	=	0x00a9
                           0000AA   184 _EX1	=	0x00aa
                           0000AB   185 _ET1	=	0x00ab
                           0000AC   186 _ES	=	0x00ac
                           0000AF   187 _EA	=	0x00af
                           0000B0   188 _P3_0	=	0x00b0
                           0000B1   189 _P3_1	=	0x00b1
                           0000B2   190 _P3_2	=	0x00b2
                           0000B3   191 _P3_3	=	0x00b3
                           0000B4   192 _P3_4	=	0x00b4
                           0000B5   193 _P3_5	=	0x00b5
                           0000B6   194 _P3_6	=	0x00b6
                           0000B7   195 _P3_7	=	0x00b7
                           0000B0   196 _RXD	=	0x00b0
                           0000B1   197 _TXD	=	0x00b1
                           0000B2   198 _INT0	=	0x00b2
                           0000B3   199 _INT1	=	0x00b3
                           0000B4   200 _T0	=	0x00b4
                           0000B5   201 _T1	=	0x00b5
                           0000B6   202 _WR	=	0x00b6
                           0000B7   203 _RD	=	0x00b7
                           0000B8   204 _PX0	=	0x00b8
                           0000B9   205 _PT0	=	0x00b9
                           0000BA   206 _PX1	=	0x00ba
                           0000BB   207 _PT1	=	0x00bb
                           0000BC   208 _PS	=	0x00bc
                           0000D0   209 _P	=	0x00d0
                           0000D1   210 _F1	=	0x00d1
                           0000D2   211 _OV	=	0x00d2
                           0000D3   212 _RS0	=	0x00d3
                           0000D4   213 _RS1	=	0x00d4
                           0000D5   214 _F0	=	0x00d5
                           0000D6   215 _AC	=	0x00d6
                           0000D7   216 _CY	=	0x00d7
                                    217 ;--------------------------------------------------------
                                    218 ; overlayable register banks
                                    219 ;--------------------------------------------------------
                                    220 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        221 	.ds 8
                                    222 ;--------------------------------------------------------
                                    223 ; internal ram data
                                    224 ;--------------------------------------------------------
                                    225 	.area DSEG    (DATA)
      000008                        226 _atime::
      000008                        227 	.ds 2
                                    228 ;--------------------------------------------------------
                                    229 ; overlayable items in internal ram
                                    230 ;--------------------------------------------------------
                                    231 	.area	OSEG    (OVR,DATA)
                                    232 ;--------------------------------------------------------
                                    233 ; Stack segment in internal ram
                                    234 ;--------------------------------------------------------
                                    235 	.area SSEG
      00000A                        236 __start__stack:
      00000A                        237 	.ds	1
                                    238 
                                    239 ;--------------------------------------------------------
                                    240 ; indirectly addressable internal ram data
                                    241 ;--------------------------------------------------------
                                    242 	.area ISEG    (DATA)
                                    243 ;--------------------------------------------------------
                                    244 ; absolute internal ram data
                                    245 ;--------------------------------------------------------
                                    246 	.area IABS    (ABS,DATA)
                                    247 	.area IABS    (ABS,DATA)
                                    248 ;--------------------------------------------------------
                                    249 ; bit data
                                    250 ;--------------------------------------------------------
                                    251 	.area BSEG    (BIT)
                                    252 ;--------------------------------------------------------
                                    253 ; paged external ram data
                                    254 ;--------------------------------------------------------
                                    255 	.area PSEG    (PAG,XDATA)
                                    256 ;--------------------------------------------------------
                                    257 ; uninitialized external ram data
                                    258 ;--------------------------------------------------------
                                    259 	.area XSEG    (XDATA)
                                    260 ;--------------------------------------------------------
                                    261 ; absolute external ram data
                                    262 ;--------------------------------------------------------
                                    263 	.area XABS    (ABS,XDATA)
                                    264 ;--------------------------------------------------------
                                    265 ; initialized external ram data
                                    266 ;--------------------------------------------------------
                                    267 	.area XISEG   (XDATA)
                                    268 	.area HOME    (CODE)
                                    269 	.area GSINIT0 (CODE)
                                    270 	.area GSINIT1 (CODE)
                                    271 	.area GSINIT2 (CODE)
                                    272 	.area GSINIT3 (CODE)
                                    273 	.area GSINIT4 (CODE)
                                    274 	.area GSINIT5 (CODE)
                                    275 	.area GSINIT  (CODE)
                                    276 	.area GSFINAL (CODE)
                                    277 	.area CSEG    (CODE)
                                    278 ;--------------------------------------------------------
                                    279 ; interrupt vector
                                    280 ;--------------------------------------------------------
                                    281 	.area HOME    (CODE)
      000000                        282 __interrupt_vect:
      000000 02 00 4C         [24]  283 	ljmp	__sdcc_gsinit_startup
                                    284 ; restartable atomic support routines
      000003                        285 	.ds	5
      000008                        286 sdcc_atomic_exchange_rollback_start::
      000008 00               [12]  287 	nop
      000009 00               [12]  288 	nop
      00000A                        289 sdcc_atomic_exchange_pdata_impl:
      00000A E2               [24]  290 	movx	a, @r0
      00000B FB               [12]  291 	mov	r3, a
      00000C EA               [12]  292 	mov	a, r2
      00000D F2               [24]  293 	movx	@r0, a
      00000E 80 2C            [24]  294 	sjmp	sdcc_atomic_exchange_exit
      000010 00               [12]  295 	nop
      000011 00               [12]  296 	nop
      000012                        297 sdcc_atomic_exchange_xdata_impl:
      000012 E0               [24]  298 	movx	a, @dptr
      000013 FB               [12]  299 	mov	r3, a
      000014 EA               [12]  300 	mov	a, r2
      000015 F0               [24]  301 	movx	@dptr, a
      000016 80 24            [24]  302 	sjmp	sdcc_atomic_exchange_exit
      000018                        303 sdcc_atomic_compare_exchange_idata_impl:
      000018 E6               [12]  304 	mov	a, @r0
      000019 B5 02 02         [24]  305 	cjne	a, ar2, .+#5
      00001C EB               [12]  306 	mov	a, r3
      00001D F6               [12]  307 	mov	@r0, a
      00001E 22               [24]  308 	ret
      00001F 00               [12]  309 	nop
      000020                        310 sdcc_atomic_compare_exchange_pdata_impl:
      000020 E2               [24]  311 	movx	a, @r0
      000021 B5 02 02         [24]  312 	cjne	a, ar2, .+#5
      000024 EB               [12]  313 	mov	a, r3
      000025 F2               [24]  314 	movx	@r0, a
      000026 22               [24]  315 	ret
      000027 00               [12]  316 	nop
      000028                        317 sdcc_atomic_compare_exchange_xdata_impl:
      000028 E0               [24]  318 	movx	a, @dptr
      000029 B5 02 02         [24]  319 	cjne	a, ar2, .+#5
      00002C EB               [12]  320 	mov	a, r3
      00002D F0               [24]  321 	movx	@dptr, a
      00002E 22               [24]  322 	ret
      00002F                        323 sdcc_atomic_exchange_rollback_end::
                                    324 
      00002F                        325 sdcc_atomic_exchange_gptr_impl::
      00002F 30 F6 E0         [24]  326 	jnb	b.6, sdcc_atomic_exchange_xdata_impl
      000032 A8 82            [24]  327 	mov	r0, dpl
      000034 20 F5 D3         [24]  328 	jb	b.5, sdcc_atomic_exchange_pdata_impl
      000037                        329 sdcc_atomic_exchange_idata_impl:
      000037 EA               [12]  330 	mov	a, r2
      000038 C6               [12]  331 	xch	a, @r0
      000039 F5 82            [12]  332 	mov	dpl, a
      00003B 22               [24]  333 	ret
      00003C                        334 sdcc_atomic_exchange_exit:
      00003C 8B 82            [24]  335 	mov	dpl, r3
      00003E 22               [24]  336 	ret
      00003F                        337 sdcc_atomic_compare_exchange_gptr_impl::
      00003F 30 F6 E6         [24]  338 	jnb	b.6, sdcc_atomic_compare_exchange_xdata_impl
      000042 A8 82            [24]  339 	mov	r0, dpl
      000044 20 F5 D9         [24]  340 	jb	b.5, sdcc_atomic_compare_exchange_pdata_impl
      000047 80 CF            [24]  341 	sjmp	sdcc_atomic_compare_exchange_idata_impl
                                    342 ;--------------------------------------------------------
                                    343 ; global & static initialisations
                                    344 ;--------------------------------------------------------
                                    345 	.area HOME    (CODE)
                                    346 	.area GSINIT  (CODE)
                                    347 	.area GSFINAL (CODE)
                                    348 	.area GSINIT  (CODE)
                                    349 	.globl __sdcc_gsinit_startup
                                    350 	.globl __sdcc_program_startup
                                    351 	.globl __start__stack
                                    352 	.globl __mcs51_genXINIT
                                    353 	.globl __mcs51_genXRAMCLEAR
                                    354 	.globl __mcs51_genRAMCLEAR
                                    355 ;	main.c:9: int atime = 64;
      0000A5 75 08 40         [24]  356 	mov	_atime,#0x40
      0000A8 75 09 00         [24]  357 	mov	(_atime + 1),#0x00
                                    358 	.area GSFINAL (CODE)
      0000AB 02 00 49         [24]  359 	ljmp	__sdcc_program_startup
                                    360 ;--------------------------------------------------------
                                    361 ; Home
                                    362 ;--------------------------------------------------------
                                    363 	.area HOME    (CODE)
                                    364 	.area HOME    (CODE)
      000049                        365 __sdcc_program_startup:
      000049 02 00 F2         [24]  366 	ljmp	_main
                                    367 ;	return from main will return to caller
                                    368 ;--------------------------------------------------------
                                    369 ; code
                                    370 ;--------------------------------------------------------
                                    371 	.area CSEG    (CODE)
                                    372 ;------------------------------------------------------------
                                    373 ;Allocation info for local variables in function 'delay'
                                    374 ;------------------------------------------------------------
                                    375 ;pms           Allocated to registers 
                                    376 ;x             Allocated to registers r6 r7 
                                    377 ;y             Allocated to registers r4 r5 
                                    378 ;------------------------------------------------------------
                                    379 ;	main.c:13: void delay(u16 pms) {
                                    380 ;	-----------------------------------------
                                    381 ;	 function delay
                                    382 ;	-----------------------------------------
      0000AE                        383 _delay:
                           000007   384 	ar7 = 0x07
                           000006   385 	ar6 = 0x06
                           000005   386 	ar5 = 0x05
                           000004   387 	ar4 = 0x04
                           000003   388 	ar3 = 0x03
                           000002   389 	ar2 = 0x02
                           000001   390 	ar1 = 0x01
                           000000   391 	ar0 = 0x00
      0000AE AE 82            [24]  392 	mov	r6, dpl
      0000B0 AF 83            [24]  393 	mov	r7, dph
                                    394 ;	main.c:17: for (x=pms; x>0; x--) {
      0000B2                        395 00106$:
      0000B2 EE               [12]  396 	mov	a,r6
      0000B3 4F               [12]  397 	orl	a,r7
      0000B4 60 14            [24]  398 	jz	00108$
                                    399 ;	main.c:19: for (y=11; y>0; y--);
      0000B6 7C 0B            [12]  400 	mov	r4,#0x0b
      0000B8 7D 00            [12]  401 	mov	r5,#0x00
      0000BA                        402 00104$:
      0000BA 1C               [12]  403 	dec	r4
      0000BB BC FF 01         [24]  404 	cjne	r4,#0xff,00141$
      0000BE 1D               [12]  405 	dec	r5
      0000BF                        406 00141$:
      0000BF EC               [12]  407 	mov	a,r4
      0000C0 4D               [12]  408 	orl	a,r5
      0000C1 70 F7            [24]  409 	jnz	00104$
                                    410 ;	main.c:17: for (x=pms; x>0; x--) {
      0000C3 1E               [12]  411 	dec	r6
      0000C4 BE FF 01         [24]  412 	cjne	r6,#0xff,00143$
      0000C7 1F               [12]  413 	dec	r7
      0000C8                        414 00143$:
      0000C8 80 E8            [24]  415 	sjmp	00106$
      0000CA                        416 00108$:
                                    417 ;	main.c:23: }
      0000CA 22               [24]  418 	ret
                                    419 ;------------------------------------------------------------
                                    420 ;Allocation info for local variables in function 'ledfade'
                                    421 ;------------------------------------------------------------
                                    422 ;i             Allocated to registers r6 r7 
                                    423 ;------------------------------------------------------------
                                    424 ;	main.c:27: void ledfade(u16 i) {
                                    425 ;	-----------------------------------------
                                    426 ;	 function ledfade
                                    427 ;	-----------------------------------------
      0000CB                        428 _ledfade:
      0000CB AE 82            [24]  429 	mov	r6, dpl
      0000CD AF 83            [24]  430 	mov	r7, dph
                                    431 ;	main.c:29: Led10 = 0;
                                    432 ;	assignBit
      0000CF C2 A5            [12]  433 	clr	_P2_5
                                    434 ;	main.c:31: delay(i);
      0000D1 8E 82            [24]  435 	mov	dpl, r6
      0000D3 8F 83            [24]  436 	mov	dph, r7
      0000D5 C0 07            [24]  437 	push	ar7
      0000D7 C0 06            [24]  438 	push	ar6
      0000D9 12 00 AE         [24]  439 	lcall	_delay
      0000DC D0 06            [24]  440 	pop	ar6
      0000DE D0 07            [24]  441 	pop	ar7
                                    442 ;	main.c:33: Led10 = 1;
                                    443 ;	assignBit
      0000E0 D2 A5            [12]  444 	setb	_P2_5
                                    445 ;	main.c:35: delay(atime-i);
      0000E2 AC 08            [24]  446 	mov	r4,_atime
      0000E4 AD 09            [24]  447 	mov	r5,(_atime + 1)
      0000E6 EC               [12]  448 	mov	a,r4
      0000E7 C3               [12]  449 	clr	c
      0000E8 9E               [12]  450 	subb	a,r6
      0000E9 F5 82            [12]  451 	mov	dpl,a
      0000EB ED               [12]  452 	mov	a,r5
      0000EC 9F               [12]  453 	subb	a,r7
      0000ED F5 83            [12]  454 	mov	dph,a
                                    455 ;	main.c:37: }
      0000EF 02 00 AE         [24]  456 	ljmp	_delay
                                    457 ;------------------------------------------------------------
                                    458 ;Allocation info for local variables in function 'main'
                                    459 ;------------------------------------------------------------
                                    460 ;a             Allocated to registers 
                                    461 ;b             Allocated to registers r4 r5 
                                    462 ;------------------------------------------------------------
                                    463 ;	main.c:41: int main(void) {
                                    464 ;	-----------------------------------------
                                    465 ;	 function main
                                    466 ;	-----------------------------------------
      0000F2                        467 _main:
                                    468 ;	main.c:47: for (a=0; a<atime; a++) {
      0000F2                        469 00127$:
      0000F2 7E 00            [12]  470 	mov	r6,#0x00
      0000F4 7F 00            [12]  471 	mov	r7,#0x00
      0000F6                        472 00112$:
      0000F6 AC 08            [24]  473 	mov	r4,_atime
      0000F8 AD 09            [24]  474 	mov	r5,(_atime + 1)
      0000FA C3               [12]  475 	clr	c
      0000FB EE               [12]  476 	mov	a,r6
      0000FC 9C               [12]  477 	subb	a,r4
      0000FD EF               [12]  478 	mov	a,r7
      0000FE 9D               [12]  479 	subb	a,r5
      0000FF 50 45            [24]  480 	jnc	00102$
                                    481 ;	main.c:49: for (b=0; b < (atime - a)/4; b++) {
      000101 7C 00            [12]  482 	mov	r4,#0x00
      000103 7D 00            [12]  483 	mov	r5,#0x00
      000105                        484 00109$:
      000105 AA 08            [24]  485 	mov	r2,_atime
      000107 AB 09            [24]  486 	mov	r3,(_atime + 1)
      000109 EA               [12]  487 	mov	a,r2
      00010A C3               [12]  488 	clr	c
      00010B 9E               [12]  489 	subb	a,r6
      00010C FA               [12]  490 	mov	r2,a
      00010D EB               [12]  491 	mov	a,r3
      00010E 9F               [12]  492 	subb	a,r7
      00010F C3               [12]  493 	clr	c
      000110 13               [12]  494 	rrc	a
      000111 CA               [12]  495 	xch	a,r2
      000112 13               [12]  496 	rrc	a
      000113 CA               [12]  497 	xch	a,r2
      000114 C3               [12]  498 	clr	c
      000115 13               [12]  499 	rrc	a
      000116 CA               [12]  500 	xch	a,r2
      000117 13               [12]  501 	rrc	a
      000118 CA               [12]  502 	xch	a,r2
      000119 FB               [12]  503 	mov	r3,a
      00011A C3               [12]  504 	clr	c
      00011B EC               [12]  505 	mov	a,r4
      00011C 9A               [12]  506 	subb	a,r2
      00011D ED               [12]  507 	mov	a,r5
      00011E 9B               [12]  508 	subb	a,r3
      00011F 50 1E            [24]  509 	jnc	00113$
                                    510 ;	main.c:51: ledfade(a);
      000121 8E 82            [24]  511 	mov	dpl, r6
      000123 8F 83            [24]  512 	mov	dph, r7
      000125 C0 07            [24]  513 	push	ar7
      000127 C0 06            [24]  514 	push	ar6
      000129 C0 05            [24]  515 	push	ar5
      00012B C0 04            [24]  516 	push	ar4
      00012D 12 00 CB         [24]  517 	lcall	_ledfade
      000130 D0 04            [24]  518 	pop	ar4
      000132 D0 05            [24]  519 	pop	ar5
      000134 D0 06            [24]  520 	pop	ar6
      000136 D0 07            [24]  521 	pop	ar7
                                    522 ;	main.c:49: for (b=0; b < (atime - a)/4; b++) {
      000138 0C               [12]  523 	inc	r4
      000139 BC 00 C9         [24]  524 	cjne	r4,#0x00,00109$
      00013C 0D               [12]  525 	inc	r5
      00013D 80 C6            [24]  526 	sjmp	00109$
      00013F                        527 00113$:
                                    528 ;	main.c:47: for (a=0; a<atime; a++) {
      00013F 0E               [12]  529 	inc	r6
      000140 BE 00 B3         [24]  530 	cjne	r6,#0x00,00112$
      000143 0F               [12]  531 	inc	r7
      000144 80 B0            [24]  532 	sjmp	00112$
      000146                        533 00102$:
                                    534 ;	main.c:57: for (a=atime; a>0; a--) {
      000146 AE 08            [24]  535 	mov	r6,_atime
      000148 AF 09            [24]  536 	mov	r7,(_atime + 1)
      00014A                        537 00118$:
      00014A EE               [12]  538 	mov	a,r6
      00014B 4F               [12]  539 	orl	a,r7
      00014C 60 A4            [24]  540 	jz	00127$
                                    541 ;	main.c:59: for (b=0; b < (atime - a)/4; b++) {
      00014E 7C 00            [12]  542 	mov	r4,#0x00
      000150 7D 00            [12]  543 	mov	r5,#0x00
      000152                        544 00115$:
      000152 AA 08            [24]  545 	mov	r2,_atime
      000154 AB 09            [24]  546 	mov	r3,(_atime + 1)
      000156 EA               [12]  547 	mov	a,r2
      000157 C3               [12]  548 	clr	c
      000158 9E               [12]  549 	subb	a,r6
      000159 FA               [12]  550 	mov	r2,a
      00015A EB               [12]  551 	mov	a,r3
      00015B 9F               [12]  552 	subb	a,r7
      00015C C3               [12]  553 	clr	c
      00015D 13               [12]  554 	rrc	a
      00015E CA               [12]  555 	xch	a,r2
      00015F 13               [12]  556 	rrc	a
      000160 CA               [12]  557 	xch	a,r2
      000161 C3               [12]  558 	clr	c
      000162 13               [12]  559 	rrc	a
      000163 CA               [12]  560 	xch	a,r2
      000164 13               [12]  561 	rrc	a
      000165 CA               [12]  562 	xch	a,r2
      000166 FB               [12]  563 	mov	r3,a
      000167 C3               [12]  564 	clr	c
      000168 EC               [12]  565 	mov	a,r4
      000169 9A               [12]  566 	subb	a,r2
      00016A ED               [12]  567 	mov	a,r5
      00016B 9B               [12]  568 	subb	a,r3
      00016C 50 1E            [24]  569 	jnc	00119$
                                    570 ;	main.c:61: ledfade(a);
      00016E 8E 82            [24]  571 	mov	dpl, r6
      000170 8F 83            [24]  572 	mov	dph, r7
      000172 C0 07            [24]  573 	push	ar7
      000174 C0 06            [24]  574 	push	ar6
      000176 C0 05            [24]  575 	push	ar5
      000178 C0 04            [24]  576 	push	ar4
      00017A 12 00 CB         [24]  577 	lcall	_ledfade
      00017D D0 04            [24]  578 	pop	ar4
      00017F D0 05            [24]  579 	pop	ar5
      000181 D0 06            [24]  580 	pop	ar6
      000183 D0 07            [24]  581 	pop	ar7
                                    582 ;	main.c:59: for (b=0; b < (atime - a)/4; b++) {
      000185 0C               [12]  583 	inc	r4
      000186 BC 00 C9         [24]  584 	cjne	r4,#0x00,00115$
      000189 0D               [12]  585 	inc	r5
      00018A 80 C6            [24]  586 	sjmp	00115$
      00018C                        587 00119$:
                                    588 ;	main.c:57: for (a=atime; a>0; a--) {
      00018C 1E               [12]  589 	dec	r6
      00018D BE FF 01         [24]  590 	cjne	r6,#0xff,00189$
      000190 1F               [12]  591 	dec	r7
      000191                        592 00189$:
                                    593 ;	main.c:69: }
      000191 80 B7            [24]  594 	sjmp	00118$
                                    595 	.area CSEG    (CODE)
                                    596 	.area CONST   (CODE)
                                    597 	.area XINIT   (CODE)
                                    598 	.area CABS    (ABS,CODE)
