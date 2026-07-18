// ================= Topic =================
// Null Pointer

// A null pointer is a pointer that does not point to any valid memory location.
// It is initialized with NULL (or nullptr in modern C++).
// NULL does not reserve or allocate any memory.
// It simply means "this pointer is currently pointing to nothing."

#include<iostream>
using namespace std;

int main(){

    // Uninitialized Pointer
    // int *ptr;
    // cout << ptr;
    // An uninitialized pointer contains a garbage address,
    // so every program execution may print a different address.

    // Null Pointer
    int *ptr1 = nullptr;   // Recommended (Modern C++)
    // or
    int *ptr1 = NULL;      // Older C/C++ style
    // or
    int *ptr1 = 0;         // Valid but old style
    // '\0' is a null character, not a null pointer, so it should not be used to initialize pointers.

    // ptr1 always prints the same null value (0),
    // because it is initialized with NULL.
    // This indicates that ptr1 is not pointing to any valid variable or memory location.
}



// ********** ************************** *********
// Uninitialized Pointer -> Contains a garbage address (random value).
// NULL Pointer          -> Contains the null address (0)meaning          it points to nothing.
// ********** ************************** **********
