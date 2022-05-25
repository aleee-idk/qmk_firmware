OLED_ENABLE = yes
ENCODER_ENABLE = yes
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes
WPM_ENABLE = no

#Debug options
VERBOSE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

LTO_ENABLE = yes

SPLIT_KEYBOARD = yes

VIA_ENABLE = yes

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pimoroni_trackball

ifeq ($(PROMICRO), yes)
  BOOTLOADER = caterina
else ifeq ($(ELITEC), yes)
  BOOTLOADER = atmel-dfu
endif
