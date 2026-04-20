#include "mux.h"

void mux(bool sel, bool a[NIBBLE], bool b[NIBBLE], bool output[NIBBLE]) {
    for (int i = 0; i < NIBBLE; i++) {
        output[i] = sel ? b[i] : a[i];
    }
}