#ifndef STD_LOGIC_GATES_H
#define STD_LOGIC_GATES_H

typedef enum { false, true } bool;

#define NIBBLE  4
#define BYTE    8
#define WORD    16
#define DWORD   32

bool wire[NIBBLE];

// Basic logic gates
void and_gate(bool a[NIBBLE], bool b[NIBBLE], bool output[NIBBLE]);
void or_gate(bool a[NIBBLE], bool b[NIBBLE], bool output[NIBBLE]);
void not_gate(bool a[NIBBLE], bool output[NIBBLE]);
void xor_gate(bool a[NIBBLE], bool b[NIBBLE], bool output[NIBBLE]);

#endif // STD_LOGIC_GATES_H