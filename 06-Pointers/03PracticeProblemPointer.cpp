// Topic 2:
// Pass by Value and Pass by Reference

// Pointer syntax problem:
// While creating normal variables, we can do:
// int x, y, z;   // All are int variables

// For pointers, '*' belongs to the variable, not to the data type.
// So every pointer variable must have its own '*'.

#include<iostream>
using namespace std;

int main(){

    int x, y;

    // This will work
    // int *p1 = &x, *p2 = &y; // Two different int type pointers storing separate addresses.
    // cout << *p1 << " " << *p2;


    // This will also work
    int *p1, *p2; // two different int type pointers currently storing garbage value

    // **Wrong**
    // *p1 = &x; // Wrong because it says: go to the address stored in p1 (currently a garbage address)
    //           // and store the address of x there. Since p1 doesn't point anywhere valid,
    //           // the program doesn't know where to go.
    // *p2 = &y; // Same reason.

    // **Right**
    p1 = &x; // I am a pointer variable, so I store the address of x.
    p2 = &y; // I am a pointer variable, so I store the address of y.

    cout << *p1 << " " << *p2;


    // This will not work
    // int *p1 = &x, p2 = &y;

    // This means:
    // int *p1 = &x; // p1 is an int pointer (stores an address and can't store normal value until it first stores an address).
    // int p2 = &y;  // p2 is a normal int variable, but &y is an address.
    //               // A normal int variable cannot store an address.
}

