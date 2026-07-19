// Checklist
// 1) Passing array to functions ✅
// 2) Dynamic allocation
// 3) Vectors in C++
// 4) Operations on Vector
// 5) Problem on arrays and Two pointers

// 1) Passing Array to Functions
// Array lai function ma pass garda pura array copy hudaina.
// Array ko first element ko address (&arr[0]) pass huncha.
// Tesaile function le original array ko data access ra modify garna sakcha.
// Function parameter ma int arr[] ra int *arr eutai (same) hun.
// ✔ Function vitra gareko change original array ma reflect huncha.
// ✔ Array pass garda memory efficient huncha because copy banaudaina.


// Example Program
#include<iostream>
using namespace std;

// Function to print all array elements
void display(int arr[]){
    for(int i = 0; i < 7; i++){  
        // arr[] = original array ko address receive garcha
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to modify array
void change(int arr[]){
    arr[1] = 100;      // Original array ko second element change huncha
}

int main(){
    int arr[] = {1, 2, 34, 22, 1, 24, 66};  // Array declaration & initialization

    display(arr);           // Passing array to display function
    change(arr);           // Passing array to change function
    display(arr);      // Printing array after modification
    return 0;
}

/*
Output:
1 2 34 22 1 24 66
1 100 34 22 1 24 66

Explanation:
1. display(arr)
   - Array ko address function ma jancha.
   - Sabai elements print huncha.

2. change(arr)
   - Function le original array ko address receive garcha.
   - arr[1] = 100 gareko le original array ko second element change huncha.

3. display(arr)
   - Updated array print huncha.
   */