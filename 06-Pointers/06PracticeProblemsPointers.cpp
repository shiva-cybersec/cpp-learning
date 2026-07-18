// Qn. Write a function to find out the first and last digits of a number without returning anything.

#include<iostream>
using namespace std;
void find(int n, int *ptr1, int *ptr2){

    // New variable n is created and receives a copy of the value from main().
    // ptr1 and ptr2 are new pointer variables that receive copies of the
    // addresses of firstDigit and lastDigit.

    *ptr2 = n % 10; // Find the last digit and store it in lastDigit.

    while(n > 9){   // Keep removing the last digit until only the first digit remains.
        n /= 10;
    }

    *ptr1 = n;      // Store the remaining digit (first digit) in firstDigit.

    return;         // Return control back to main().
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n; 

    int firstDigit, lastDigit;
    int *ptr1 = &firstDigit, *ptr2 = &lastDigit;

    // Pass the number and the addresses of firstDigit and lastDigit.
    find(n, ptr1, ptr2);

    // Since the function updated the values using pointers,
    // firstDigit and lastDigit now contain the answer.
    cout << firstDigit << " " << lastDigit;
}


// *********************************************
// 1. main() function starts executing.
// 2. User enters a number.

// 3. Two variables are created:
//    firstDigit and lastDigit.

// 4. Two pointers are created:
//    ptr1 stores the address of firstDigit.
//    ptr2 stores the address of lastDigit.

// 5. find(n, ptr1, ptr2) is called.
// 6. Inside find():
//    - A new variable n receives a copy of the number (Pass by Value).
//    - New pointers ptr1 and ptr2 receive copies of the addresses.
//      Both pointers still point to firstDigit and lastDigit in main().

// 7. *ptr2 = n % 10;
//    Finds the last digit and stores it in lastDigit.

// 8. while(n > 9)
//    Keeps removing the last digit until only the first digit remains.
//    We use n > 9 because we want to stop when only one digit is left.
//    If we used n > 0, n would become 0 and we would lose the first digit.

// 9. *ptr1 = n;
//    Stores the first digit in firstDigit.

// 10. Control returns to main().

// 11. firstDigit and lastDigit are printed.