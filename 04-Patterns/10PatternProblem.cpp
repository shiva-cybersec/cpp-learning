// Pattern 9: Diamond and Bridge
// Qn1. Print the given output (Star Diamond)
//      *
//     ***
//    *****
//   *******
//    *****
//     ***
//      *
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//      int nst = 1;
//      int nsp = n-1;
//      for(int i = 1; i<=2*n-1;i++){
//          for(int j =1;j<=nsp;j++){
//              cout<<" ";
//          }
//          if(i<=n-1) nsp--;
//          else nsp++;
//          for(int k=1;k<=nst;k++){
//              cout<<"*";
//          }
//          if(i<=n-1) nst +=2;
//          else nst -=2;
//          cout<<endl;
//      }
//  }

// Qn2. Print the given output (Star Bridge)
//  *******
//  *** ***
//  **   **
//  *     *
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//      for(int i = 1; i<=n;i++){
//          //2*n-1 means total no. of columns are 2 * no.of rows times -1
//          for(int j = 1;j<=2*n-1;j++){
//              //when exactly to print stars findout first print stars until j is smaller than given no. of rows
//              //second print stars again from j is equal to total no. of rows times until the total no. of columns left to print. and in other cases print space
//              if(j<=n+1-i || j>=n+i-1) cout<<"*";
//              else cout<<" ";
//          }
//          cout<<endl;
//      }
// }

// OR (Alternative Method)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter no. of rows: ";
//     cin >> n;

//     // Print first row (2*n-1 stars)
//     for (int i = 1; i <= 2 * n - 1; i++) cout << "*";

//     cout << endl;

//     int m = n - 1; // Remaining rows after first row
//     int nsp = 1;   // Middle spaces start from 1
//     // Print remaining rows
//     for (int i = 1; i <= m; i++)
//     {
//         // Print left-side stars (decrease by 1 every row)
//         for (int j = 1; j <= m + 1 - i; j++)
//         {
//             cout << "*";
//         }

//         // Print middle spaces (increase by 2 every row)
//         for (int k = 1; k <= nsp; k++) cout << " ";
//         nsp += 2; // Increase spaces for next row

//         // Print right-side stars (same as left-side stars)
//         for (int j = 1; j <= m + 1 - i; j++) cout<<"*"
//       
//         cout << endl; // Move to next row
//     }
//     return 0;
// }




//Qn3. Print the given output (Number Bridge)
// 1234567
// 123 567
// 12   67
// 1     7
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//      for(int i = 1; i<=n;i++){
//          //2*n-1 means total no. of columns are 2 * no.of rows times -1
//          for(int j = 1;j<=2*n-1;j++){
//              //when exactly to print stars findout first print numbers until j is smaller than given no. of rows
//              //second print numbers again from j is equal to total no. of rows times until the total no. of columns left to print. and in other cases print space
//              if(j<=n+1-i || j>=n+i-1) cout<<j;
//              else cout<<" ";
//          }
//          cout<<endl;
//      }
// }

//OR (Alternative Method)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;

    // Print first row (numbers from 1 to 2*n-1)
    for (int i = 1; i <= 2 * n - 1; i++)
        cout << i;
    cout << endl;

    int m = n - 1;      // Remaining rows after first row
    int nsp = 1;        // Middle spaces start from 1

    // Print remaining rows
    for (int i = 1; i <= m; i++)
    {
        int a = 1;      // Number to print starts from 1 in every row

        // Print left-side numbers (decrease by 1 every row)
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;         // Print next number
        }

        // Print middle spaces (increase by 2 every row)
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            a++;         // Skip numbers hidden by spaces
        }
        nsp += 2;        // Increase spaces for next row

        // Print right-side numbers (same count as left side)
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;         // Continue printing remaining numbers
        }
        cout << endl;    // Move to next row
    }

    return 0;
}