// Example: y = f(x) = x² + 2
// If we change the value of x, we get a different value of y (or f(x)).
// Similarly, a C++ function takes an input and gives the required output.

// Example:
// Task: Print star triangles of different sizes.

// Method 1: (Writing the same loops multiple times)
// Give different inputs (3, 4, 6) and write the same nested loops again and again.
// This creates duplicate code and violates the DRY (Don't Repeat Yourself) principle.

// Method 2: (Using one nested loop and taking input repeatedly)
// Write the nested loops only once and ask the user for input each time.
// This removes duplicate code, but every time the program runs, we must enter
// all the inputs one by one before the program finishes.
// If we get interrupted in the middle, we must continue giving the remaining inputs.

// Method 3: (Using Functions)  
// Create a function that prints a star triangle.
// Pass the required size as an argument whenever needed.
// We can call the function any number of times with different inputs.
// This avoids duplicate code, makes the program shorter, easier to read,
// easier to maintain, and we don't need to rewrite the same loops again.

// Difference between LOOP & FUNCTION:
// Use loops for continuous repetitive work in the same execution.
// Use functions when you need to perform the same task multiple times
// from different places in the program without rewriting the code.

// Method 1:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 3, b = 4, c = 6;
//     // Triangle of size 3
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         cout << endl;
//     }
//     // Triangle of size 4
//     for (int i = 1; i <= b; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         cout << endl;
//     }
//     // Triangle of size 6
//     for (int i = 1; i <= c; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         cout << endl;
//     }
// }

// Method 2:
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     for(int i=1;i<=3;i++){
//         cin>>a;
//         for(int j = 1; j<=a;j++){
//             for(int k = 1;k<=j;k++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
// }



// Method 3: 
// Syntax of a Function
// return_type function_name(Arguments) {
//     // function body
// }

// Function Call
// function_name(input);

#include<bits/stdc++.h>
using namespace std;
void type1_stars(){ //return_type function_name
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    type1_stars(); // function calling
}