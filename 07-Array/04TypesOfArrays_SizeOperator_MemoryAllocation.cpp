// Types of Arrays ✅
// 1) One dimensional Array (having single index)
//    Example: arr[5]
//
//    Index:
//    arr[0], arr[1], arr[2], arr[3], arr[4]

// 2) Two dimensional Array (Matrix form having double index)
//    Example: arr[3][3]
//
//    Access using row and column:
//    arr[0][0], arr[1][2] etc.






// Size and sizeof operator (How can we use it to find the length of array?) ✅
// Formula to find length of array:
// int length = sizeof(arr) / sizeof(arr[0]);
//
// sizeof(arr):
// Gives total memory occupied by the complete array.
// Example: int arr[5]
// Each int = 4 bytes
// Total size = 5 × 4 = 20 bytes
//
// sizeof(arr[0]):
// Gives size of one element.
// Example:
// sizeof(arr[0]) = 4 bytes
//
// Therefore:   20 / 4 = 5 elements

// Example:
#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,44,11,2,3,80,234,89,99,20,112,334,45,17,82};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << len;  //output: 15
}








// Memory Allocation in Arrays ✅
// int arr[4];
//
// Array automatically gets continuous memory locations.
// Each box has the same size.
//
// Since int takes 4 bytes:
//
// arr[0] → address 0x61ff00
// arr[1] → address 0x61ff04 (+4 bytes)
// arr[2] → address 0x61ff08 (+4 bytes)
// arr[3] → address 0x61ff0c (+4 bytes)


// Example:
#include<iostream>
using namespace std;
int main(){
    int arr[4];

    cout << &arr << endl;      // address of complete array
    cout << arr << endl;       // address of first element

    cout << &arr[0] << endl;   // first element address
    cout << &arr[1] << endl;   // second element address
    cout << &arr[2] << endl;   // third element address
    cout << &arr[3] << endl;   // fourth element address

}


// Output example:
//
// 0x61ff00  → &arr (array address)
// 0x61ff00  → arr (first element address)
// 0x61ff00  → &arr[0]
// 0x61ff04  → &arr[1]
// 0x61ff08  → &arr[2]
// 0x61ff0c  → &arr[3]


// Important:
//
// &arr, arr, &arr[0]
// all represent the address of the first element.
//
// Array elements are stored continuously in memory.