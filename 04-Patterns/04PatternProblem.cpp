//Pattern 4 (Square and Traingle)
//Qn1. Print the Given Pattern.(Solid Alphabets Square)
// ABCD
// ABCD
// ABCD
// ABCD
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//      int r;
//     cout<<"Enter no. of rows: ";
//     cin>>r;
//     for(int i = 1;i<=r;i++){ //for row
//         for(int j=1;j<=r;j++){ 
//             cout<<(char)(j+64)<<" "; //use 96 inplace of 64 is u want small abc
//         }
//         cout<<endl;
//     }
// }



//Qn2. Print the Given Pattern.(Solid Alphabets Triangle)
// A
// AB
// ABC
// ABCD
#include <bits/stdc++.h>
using namespace std;
int main(){
     int r;
    cout<<"Enter no. of rows: ";
    cin>>r;
    for(int i = 1;i<=r;i++){ //for row
        for(int j=1;j<=i;j++){ 
            cout<<(char)(j+64)<<" "; //use 96 inplace of 64 is u want small abc
        }
        cout<<endl;
    }
}
