// Q1. Print the following pattern (Input : n = 4)
//     1
//    123
//   12345
//  1234567

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of lines: ";
//     cin>>n;
//     int nst = 1;
//     int nsp = n-1;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k =1; k<=nst;k++){
//             cout<<k;
//         }
//         nst+=2;
//         cout<<endl;

//     }
// }

// Qn2. Q2. Print the following pattern (Input : n = 4)
//       A
//     A B C
//   A B C D E
// A B C D E F G
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//      int nsp = n-1;
//      int nst = 1;
//      for(int i =1;i<=n;i++){
//          for(int j = 1;j<=nsp;j++){
//              cout<<"  ";
//          }
//          nsp--;
//          for(int k = 1; k<=nst;k++){
//              cout<<(char)('A'+k-1)<<" ";
//          }
//          nst+=2;
//          cout<<endl;
//      }
//  }

// Q3. Print the following pattern (Input : n = 4)
//           A
//         B A B
//       C B A B C
//     D C B A B C D
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main() {
//      int n;
//      cout << "Enter no. of lines: ";
//      cin >> n;

//     // Print all rows
//     for(int i = 1; i <= n; i++) {

//         // Print spaces
//         for(int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // Print left part (descending alphabets)
//         for(int k = i; k >= 1; k--) {
//             cout << char('A' + k - 1);
//         }

//         // Print right part (ascending alphabets)
//         for(int m = 2; m <= i; m++) {
//             cout << char('A' + m - 1);
//         }
//         cout << endl;      // Move to next row
//     }
//     return 0;
// }

// or (alternative method)

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; ++i)
//     {
//         for (int j = 1; j <= n - i; ++j)
//         {
//             cout << " ";
//         }
//         for (int j = i - 1; j >= 0; --j)
//         {
//             cout << (char)('A' + j) << " ";
//         }
//         for (int j = 1; j < i; ++j)
//         {
//             cout << (char)('A' + j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q4. Print the following pattern (Input : n = 4)
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

//  #include<bits/stdc++.h>
//  using namespace std;
//  int main() {
//      int n;
//      cout << "Enter no. of lines: ";
//      cin >> n;
//      for(int i = 1;i<=2*n-1;i++){
//         cout<<(char)('A'+i-1)<<" ";
//      }
//      cout<<endl;
//      for(int i = 1; i<=n-1;i++){
//         for(int j = 1;j<=n-i;j++){
//             cout<<(char)('A'+j-1)<<" ";
//         }
//         for(int j = 1; j <=2*i-1; j++){
//             cout<<"  ";
//         }
//         for(int j = 1;j<=n-i;j++){
//             cout<<(char)('A'+n+i+j-2)<<" ";
//         }
//         cout<<endl;
//     }}

// OR (alternative way)
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cin >> n;
//      for (int i = 0; i < 2 * n - 1; ++i)
//      {
//          cout << (char)('A' + i) << " ";
//      }
//      cout << endl;
//      for (int i = 1; i < n; ++i)
//      {
//          for (int j = 0; j < n - i; ++j)
//          {
//              cout << (char)('A' + j) << " ";
//          }
//          for (int j = 0; j < 2 * i - 1; ++j)
//          {
//              cout << "  ";
//          }
//          for (int j = 0; j < n - i; ++j)
//          {
//              cout << (char)('A' + n + i + j - 1) << " ";
//          }
//          cout << endl;
//      }
//  }

// Qn5. Print the following pattern (Input: n = 4)
//  1 2 3 4 3 2 1
//  1 2 3   3 2 1
//  1 2       2 1
//  1           1
//   #include<bits/stdc++.h>
//   using namespace std;
//   int main() {
//       int n;
//       cout << "Enter no. of lines: ";
//       cin >> n;
//      for(int i = 1;i<=n;i++){
//          cout<<i<<" ";
//      }
//      for(int i = 1;i<=n-1;i++){
//          cout<<n-i<<" ";
//      }
//      cout<<endl;
//      for(int i = 1; i<n ;i++){
//          for(int j = 1; j<=n-i;j++){
//              cout<<j<<" ";
//          }
//          for(int j = 1; j<=2*i-1;j++){
//              cout<<"  ";
//          }
//          for(int j = n-i; j>=1;j--){
//              cout<<j<<" ";
//          }
//          cout<<endl;
//      }
//  }

// OR (Alternative Method)
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      for(int i = 0;i<n;i++){
//          cout<<i+1<<" ";
//      }
//      for(int i = n-1;i>=1;--i){
//          cout<<i<<" ";
//      }
//      cout<<endl;
//      for(int i = 1; i<n; i++){
//          for(int j = 0; j < n -i; j++){
//              cout<<j+1<<" ";
//          }
//          for(int j = 0;j < 2*i-1;j++){
//              cout<<"  ";
//          }
//          for(int j = n-i;j>=1;j--){
//              cout<<j<<" ";
//          }
//          cout<<endl;
//      }
//  }

// Qn6. Print the following pattern (Input: n = 4)
//  *               *
//    *           *
//      *       *
//        *   *
//          *

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int n;
// cin >> n;
// // Printing entire pattern except the bottommost star
// for(int i = 0; i < n-1; ++i) {
// for(int j = 0; j < i; ++j) {
// cout << " ";
// }
// cout << "*";
// int m = 2 * (n - i - 1);
// for(int j = 0; j < m-1; ++j) {
// cout << " ";
// }
// cout << "*" << endl;
// }
// //Printing last star
// for(int i = 0; i < n-1; ++i) {
// cout << " ";
// }
// cout<<"*";
// }

// OR (alternative method)
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//       cout<<"Enter no. of lines: "
//      cin>>n;
//      for(int i = 1; i<=n-1;i++){
//          for(int j =1;j<i;j++){
//              cout<<" ";
//          }
//          cout<<"*";
//          int m = 2*(n-i)-1;
//          for(int j = 1; j<=m;j++){
//              cout<<" ";
//          }
//          cout<<"*"<<endl;;
//      }
//      for(int i =1;i<=n-1;i++){
//          cout<<" ";
//      }
//      cout<<"*";
//  }

// Qn7. Print the following pattern (Input: m = 4, n = 6)
//     *
//    * *
//   *   *
//  *     *
//   *   *
//    * *
//     *

