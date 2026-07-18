// ================= Topic =================
// Double Pointer
// A double pointer is a pointer that stores the address of another pointer.

// Similarly:
// Triple Pointer    -> Stores the address of a double pointer.
// Quadruple Pointer -> Stores the address of a triple pointer.
// and so on...

#include<iostream>
using namespace std;
int main(){
    int x = 20;

    int *ptr1 = &x;       // Stores the address of x.
    int **ptr2 = &ptr1;   // Stores the address of ptr1.
    int ***ptr3 = &ptr2;  // Stores the address of ptr2.

    cout << &x << endl;     // Address of x
    cout << ptr1 << endl;   // Address of x

    cout << &ptr1 << endl;  // Address of ptr1
    cout << ptr2 << endl;   // Address of ptr1

    cout << &ptr2 << endl;  // Address of ptr2
    cout << ptr3 << endl;   // Address of ptr2
}