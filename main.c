#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "std_logic_gates/std_logic_gates.h"

#define NIBBLE  4
#define BYTE    8
#define WORD    16
#define DWORD   32

typedef enum { false, true } bool;

bool wire[NIBBLE];

void and(bool a[NIBBLE], bool b[NIBBLE]);

int main(void)
{
    // bool a = true
    bool a[NIBBLE] = { true, true, true, true };

    // bool b = true
    bool b[NIBBLE] = { true, true, true, true };

    and(a, b);

    for (int i = 0; i < NIBBLE; i++ ) {
        printf("Y is: %d\n", wire[i]);
    }

return 0;
}

void and(bool a[NIBBLE], bool b[NIBBLE]) {
    and_gate(a, b, wire);
}