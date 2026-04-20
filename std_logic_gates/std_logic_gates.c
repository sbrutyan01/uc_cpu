#include "std_logic_gates.h"

void and_gate(bool a[NIBBLE], bool b[NIBBLE], bool output[NIBBLE]) {
    for (int i = 0; i < NIBBLE; i++) {
        output[i] = a[i] && b[i];
    }
}

void or_gate(bool a[NIBBLE], bool b[NIBBLE], bool output[NIBBLE]) {
    for (int i = 0; i < NIBBLE; i++) {
        output[i] = a[i] || b[i];
    }
}

void not_gate(bool a[NIBBLE], bool output[NIBBLE]) {
    for (int i = 0; i < NIBBLE; i++) {
        output[i] = !a[i];
    }
}

void xor_gate(bool a[NIBBLE], bool b[NIBBLE], bool output[NIBBLE]) {
    for (int i = 0; i < NIBBLE; i++) {
        output[i] = a[i] ^ b[i];
    }
}