// ================= Topic 1 =================
// Introduction to Pointers

// A pointer is a variable that stores the address of another variable.

// Example:
// To store different types of values, we use different data types.
// Similarly, to store addresses, we use pointers.
// The pointer type should match the data type of the variable whose address it stores.

// int x = 23;
// float y = 40;
// bool flag = false;
// char ch = 'A';

// int *p1 = &x;
// float *p2 = &y;
// bool *p3 = &flag;
// char *p4 = &ch;


// ================= Topic 2 =================
// Syntax of a Pointer

// data_type *pointer_name = &variable_name;
// OR
// data_type *pointer_name = variable_that_contains_an_address;




// ================= Topic 3 =================
// Dereference Operator (*)  (* means Dereference)

// Dereference (*) ko meaning:
// Pointer vitra store bhayeko address ma jane
// ra tyo address ma bhayeko value access (print/use) garne.

// Example:
// int x = 23;
// int *p = &x;
// cout << *p;
// cout << p;

// Working:
// 1. p is a pointer variable that stores the address of x.
//    cout << p; simply prints the address stored inside p.
//    (It does not go to that address.)
// 2. *p means: go to the address stored inside p
//    and print (or access/use) the value stored at that address.

// ================= Topic 4 =================
// Updating Values Using Pointers

// A pointer stores the address of a variable.
// We can update the value stored at that address
// either by using the variable name or by using *pointer.

#include<iostream>
using namespace std;

int main(){

    int x = 20;            // Declaration + Initialization
    int *pointer = &x;     // Store the address of x in pointer

    cout << x << endl;     // Prints 20 before updation

    x = 40;                // Update using the variable name
    cout << *pointer << endl;  // Prints 40 after updation using variable

    *pointer = 80;         // Update using the pointer
    cout << x << endl;     // Prints 80 after updation using *pointer

}