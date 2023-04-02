cd ../bastardkb-qmk
qmk compile -j0 -c -kb bastardkb/skeletyl/v2/elitec -km fleetscut
qmk flash -km fleetscut -kb bastardkb/skeletyl/v2/elitec -bl dfu
