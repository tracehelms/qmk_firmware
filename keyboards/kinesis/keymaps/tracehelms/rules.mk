BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.
# CAPS_WORD_ENABLE = yes

# Disable this teensy 4.1 doesn't like it causes slow booting needed from QMK 22+
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=FALSE
