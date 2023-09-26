cd ~/repos/qmk_firmware/
qmk compile -kb handwired/dactyl_manuform/5x7 -km fleetscut
qmk flash -kb handwired/dactyl_manuform/5x7 -km fleetscut -bl dfu
