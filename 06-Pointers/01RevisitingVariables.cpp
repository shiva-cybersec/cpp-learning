// =================== Pointers ===================

// Revisiting Variables:

// What is a variable?
// A variable is a named memory location used to store data.
// Example:
// int x;
// An int variable usually occupies 4 bytes of memory.
// These 4 bytes are stored in consecutive (continuous) memory locations.

// To find the size of a data type or variable:
// sizeof(data_type) or sizeof(variable)

// Common Data Type Sizes (usually):
// bool      -> 1 byte
// char      -> 1 byte
//              1 byte = 8 bits
//              2^8 = 256 different values can be represented.
// int       -> 4 bytes
// float     -> 4 bytes
// double    -> 8 bytes
// long long -> 8 bytes


// ===================================================
// Address of a Variable (&variable_name)
// ===================================================

// The '&' operator is called the Address-of Operator.
// It returns the memory address of a variable.

// Example:
// int x = 10;
// cout << &x;

// Understanding Memory Addresses:
// When a program runs, the operating system allocates memory (RAM)
// for the variables. Each variable gets its own memory address.

// Before the program runs, variables are just source code (text).
// After execution starts, they are created in RAM and assigned addresses.

// The memory addresses may be different every time you run the program because OS allocates random address of your variables