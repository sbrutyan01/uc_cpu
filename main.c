#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "std_logic_gates/std_logic_gates.h"

int main(void)
{
    // bool a = true
    bool a[NIBBLE] = { true, true, true, true };

    // bool b = true
    bool b[NIBBLE] = { true, true, true, true };

    and_gate(a, b, wire);

    for (int i = 0; i < NIBBLE; i++ ) {
        printf("Y is: %d\n", wire[i]);
    }

return 0;
}