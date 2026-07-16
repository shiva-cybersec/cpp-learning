//Pattern 8: Pyramid
//Qn1. Print the given pattern(Star Pyramid)
//      *
//     ***
//    *****
//   *******
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i = 1;i<=n; i++){
//         for(int j =1; j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k  = 1; k<=(2*i)-1;k++){ 
//             //how many times we need to print * based on that i wrote k<=(2*i)-1 times
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
// }



//OR (Alternative Method)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     int nst = 1; //no of star (in the beginning we need one star)
//     int nsp = n-1; //we print spaces one less times then n
//     for(int i = 1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--; //for second third... we print one space less then the previous time
//         for(int k = 1; k<=nst;k++){
//             cout<<"*";
//         }
//         nst +=2; //for second third... we print 2 extra stars more than the previous time
//         cout<<endl;
//     }
// }


//Qn2. Print the given pattern (Number Pyramid Palindrome)
//     1
//    121
//   12321
//  1234321
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
   
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k = 1; k<=i;k++){
            cout<<k;
        }
        for(int m = i-1;m>=1;m--){
            cout<<m;
        }
        cout<<endl;

    }
}