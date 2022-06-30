# Build

## Dactyl

Use qmk_firmware.

Compile:
`qmk compile -kb handwired/dactyl_manuform/5x7 -km fleetscut`

Flash:
`qmk flash -kb handwired/dactyl_manuform/5x7 -km fleetscut -bl dfu`

## CRKBD

Use qmk_firmware.

Compile:
`qmk compile -kb crkbd/rev1 -km fleetscut`

Flash:
`qmk flash -kb crkbc/rev1 -km fleetscut -bl dfu`

## Skeletyl

Use bastardkb-qmk.

Compile:
`qmk compile -j0 -c -kb bastardkb/skeletyl/v2/elitec -km fleetscut`

Flash:
`qmk flash -km fleetscut -kb bastardkb/skeletyl/v2/elitec -bl dfu`

# Notes

In order for QK_BOOT to function need to set the boot loader type in rules.mk

