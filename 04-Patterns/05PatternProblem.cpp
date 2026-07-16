//Pattern 5: Star Plus, Star Cross
//Qn1. Print the Given Pattern (Star Plus)
//    *
//    *
//  *****
//    *
//    *
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
    // cout<<"Enter no. of rows: ";
//     cin>>n;
//     int mid = n/2+1; //when we divide odd number by 2 it gives one less value so add 1 to find mid number

//     for(int i = 1; i<=n;i++){
//         for(int j = 1;j<=n;j++){
//             if(i==mid || j==mid) cout<<"*"; //when ever column is equal to mid then print star, and whenever row is equal to mid print stars in wholetime
//             else cout<<" ";
//         }
//         cout<<endl;
//     }


// }



//Qn2. Print the given pattern(Star Cross)
// *     *
//  *   * 
//   * *
//    *
//   * *
//  *   *
// *     *
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            //i==j means when row and column is equal print *
            //j==n+1-i means this means print star only when it's last digit and decrease number by one step 
            if(i==j || j==n+1-i) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
