// Arrays and Pointers
// A pointer stores the address of a variable.
// For a normal variable, we use '&' to get its address.
// An array name already represents the address of its first element.
// So, 'arr' is the same as '&arr[0]'.

// #include<iostream>
// using namespace std;
// int main(){

//     // Normal variable
//     int x = 20;
//     int *ptr1 = &x;      // Correct: stores the address of x
//     // int *ptr1 = x;    // Incorrect: x is a value, not an address

//     // Array
//     int arr[] = {23, 44, 11, 2, 1, 90};
//     int *ptr2 = arr;      // Correct: arr = &arr[0]
//     // int *ptr2 = &arr;  // Incorrect: &arr is the address of the whole array
//     ptr2 = &arr[2];       // Correct: stores the address of the third element
//     // int *ptr2 = arr[2]; // Incorrect: arr[2] is a value, not an address

//     // Printing
//     cout << "Value of x: " << x << endl;
//     cout << "Value using ptr1: " << *ptr1 << endl;

//     cout << "First element of array: " << *arr << endl;
//     cout << "Third element of array: " << *ptr2 << endl;
//     return 0;
// }

/*
Important Points:
✔ Pointer stores an address.
✔ '&' is used to get the address of a variable.
✔ Array name is the address of its first element.
✔ arr == &arr[0]
✔ *arr gives the first element.
✔ *(arr + i) is the same as arr[i].
✔ A pointer must store an address, not a value.
*/





// ****************************
// Using Pointer to Iterate Through an Array
// A pointer can be used to access array elements one by one.
// 'arr' is the address of the first element (&arr[0]).
// 'ptr' starts by pointing to index 0.
// '*ptr' prints the value stored at the current address.
// 'ptr++' moves the pointer to the next element (next int address, usually +4 bytes).

#include<iostream>
using namespace std;
int main(){
    int arr[] = {20,30,40,10,90};   // Array of integers
    int *ptr = arr;   // Same as int *ptr = &arr[0]

    for(int i = 0; i < 5; i++){
        cout << *ptr << " ";   // Print the value at the current address
        ptr++;                 // Move pointer to the next array element
    }
    return 0;
}

/*
Output:
20 30 40 10 90
*/