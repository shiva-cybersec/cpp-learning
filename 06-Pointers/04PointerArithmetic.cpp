// Topic 1:
// Increment and Decrement with Pointers

// A pointer stores the address of a variable (e.g., 0x61ff08).

// If we add or subtract a number from a pointer:
// Example:
// ptr = ptr + 1;

// The pointer moves by the size of the data type it points to.
// For example:
// int   -> 4 bytes
// char  -> 1 byte
// float -> 4 bytes
// double -> 8 bytes

// So if ptr is an int pointer, ptr = ptr + 1 means:
// New Address = Old Address + 4 bytes.

// If we now print the pointer, it prints the new address.
// If we print *ptr, it tries to access the value at that new address.
// Since no variable was created there, the value printed is garbage
// (or it may even cause undefined behavior).

// Example:
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 20;
//     int *p = &x;
//
//     cout << *p << endl;   // 20
//     p = p + 1;            // Move pointer by 4 bytes (for int)
//
//     cout << p;            // Prints the new address.
//     // cout << *p;         // Garbage value / Undefined Behavior
// }


// ==================================================
// What happens if we increment or decrement *p ?
// ==================================================

#include<iostream>
using namespace std;

int main(){
    int x = 30;
    int *p = &x;

    *p = *p + 1;    // Same as: x = x + 1;

    // Can also be written as:
    // *p++;        // Wrong: Same as *(p++). It moves the pointer, not the value.

    (*p)++;          // Correct: Same as *p = *p + 1;
    cout << *p;      // 32
}



// ==================================================
//  p++   -> Move the pointer to the next address.
// (*p)++ -> Increase the value stored at that address.
// ==================================================