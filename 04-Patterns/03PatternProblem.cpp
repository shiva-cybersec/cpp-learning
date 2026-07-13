//Pattern 3
//Qn1. Print the Given Pattern.(Solid Triangle)
// *
// **
// ***
// ****
// *****
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//      int r;
//     cout<<"Enter no. of rows: ";
//     cin>>r;
//     for(int i = 1;i<=r;i++){ //for row
//         for(int j=1;j<=i;j++){ //cause we print star as many rows as we have in each loop
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



//Qn2. Print the Given Pattern.(Solid Reverse Triangle)
// *****
// ****
// ***
// **
// *
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//      int r;
//     cout<<"Enter no. of rows: ";
//     cin>>r;
//     for(int i = 1;i<=r;i++){ //for row
//         for(int j=1;j<=r+1-i;j++){ //cause we print stars as many rows as we have in each loop 
//             //here for each row if no of row + no of stars =5 that is why i did n+1-i eg. 5+1-1=5 for i=1
//             cout<<"*";
            
//         }
       
//         cout<<endl;
//     }
// }


//Qn3. Print the Given Pattern.(Number Triangle)
// 1
// 12
// 123
// 1234
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter no. of rows: ";
//     cin>>r;
//     for(int i = 1;i<=r;i++){
//         for(int j = 1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


//Qn4. Print the given pattern.(Odd Number Triangle)
// 1
// 13
// 135
// 1357

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter no. of rows: ";
//     cin>>r;
//     for(int i = 1;i<=r;i++){
//         for(int j = 1;j<=2*i-1;j+=2){ //to print odd numbers just use this 2*i-1 and increment by 2
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//OR alternative way to solve above question

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows: ";
    cin>>r;
    for(int i = 1;i<=r;i++){
        int a = 1;
        for(int j = 1;j<=i;j++){ 
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}