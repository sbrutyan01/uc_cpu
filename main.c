#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "std_logic_gates/std_logic_gates.h"
#include "macro_logic_elements/mux.h"

int main(void)
{
    // bool a = true
    bool a[NIBBLE] = { 1, 1, 1, 1 };

    // bool b = true
    bool b[NIBBLE] = { 1, 1, 1, 1 };

    and_gate(a, b, wire);

    mux(1, a, b, wire);

    for (int i = 0; i < NIBBLE; i++ ) {
        printf("Y is: %d\n", wire[i]);
    }

    for (int i = 0; i < NIBBLE; i++ ) {
        printf("A is: %d\n", wire[i]);
    }

return 0;
}