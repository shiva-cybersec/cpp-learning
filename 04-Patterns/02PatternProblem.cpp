//Pattern 2
//Qn1. Print the Given Pattern.(Solid Square)
// ****
// ****
// ****
// ****

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//      int r;
//     cout<<"Enter no. of rows: ";
//     cin>>r;
  
//     for(int i = 1;i<=r;i++){ //for row
//         for(int j=1;j<=r;j++){ //column == row
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//Qn2. Print the given pattern in square format(take input from user for no of rows&columns)
// 1234
// 1234
// 1234
// 1234

#include <bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows: ";
    cin>>r;
    // cout<<"Enter no. of columns: ";
    // cin>>c;
    for(int i = 1;i<=r;i++){ //for row
        for(int j=1;j<=r;j++){ //column == row if u want output in square format else give separetly
            cout<<j;
        }
        cout<<endl;
    }
}
