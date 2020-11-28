// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

#define XXX KC_NO

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
XXX, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, XXX, \
               XXX, XXX, K32, K33, K34,      K35, K36, K37, XXX, XXX \
)
#else // ok i don't know what exactly is going on here but i think i can put kyria's extra keys where the xxx are.

/*** //old
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
XXX, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, XXX, \
               XXX, K32, K33, K34, XXX,      XXX, K35, K36, K37, XXX \
)
***/
// new:
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
KC_ESC,  K00, K01, K02, K03, K04,                                                      K05, K06, K07, K08, K09, KC_PIPE, \
KC_BSPC, K10, K11, K12, K13, K14,                                                      K15, K16, K17, K18, K19, KC_QUOT, \
KC_LSFT, K20, K21, K22, K23, K24, SGUI(KC_4), XXX,              XXX,    LCTL(KC_DOWN), K25, K26, K27, K28, K29, KC_MINS, \
                   XXX, K32, K33, K34,        LCTL(KC_UP),      KC_ENT, K35,           K36, K37, XXX \
)
#endif
