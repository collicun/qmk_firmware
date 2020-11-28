# generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#### brickbots
OLED_DRIVER_ENABLE = yes   # Enables the use of OLED displays
ENCODER_ENABLE = yes       # ENables the use of one or more encoders
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow
WPM_ENABLE = yes           # Enable WPM calc and transport
MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = yes # Auto Shift

CONSOLE_ENABLE = no
MCP9808_ENABLE = no
VCNL4010_ENABLE = no
# BLING_BOARD = yes # I don't know what this is -collicun

#### miryoku
# redundant # MOUSEKEY_ENABLE = yes # Mouse keys
# redundant # EXTRAKEY_ENABLE = yes # Audio control and System control
# redundant # AUTO_SHIFT_ENABLE = yes # Auto Shift

#### all me baby
MIRYOKU_ALPHAS_COLLICUN = yes

SRC += manna-harbour_miryoku.c # keymap

# select alternative base layer alphas
ifneq ($(strip $(MIRYOKU_ALPHAS)),)
  OPT_DEFS += -DMIRYOKU_ALPHAS_$(MIRYOKU_ALPHAS)
endif

# select alternative nav
ifneq ($(strip $(MIRYOKU_NAV)),)
  OPT_DEFS += -DMIRYOKU_NAV_$(MIRYOKU_NAV)
endif

# select alternative subset mappings
ifneq ($(strip $(MIRYOKU_MAPPING)),)
  OPT_DEFS += -DMIRYOKU_MAPPING_$(MIRYOKU_MAPPING)
endif
