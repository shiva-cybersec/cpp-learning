//Pattern 6: Special Triangles and Type-3
//Qn1. Print the given pattern (floydTriangle)
// 1
// 23
// 456
// 78910
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     int temp = 1;
//     for(int i = 1; i<=n;i++){
        
//         for(int j = 1; j<=i; j++){
//                 cout<<temp;
//                 temp++;
        
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Qn2. Print the given output (Binary Triangle)
// 1
// 01
// 101
// 0101
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter no. of rows: ";
//     cin>>r;
//     int a;
//     for(int i = 1;i<=r;i++){
//         if(i%2!=0) a=1; //if row number odd start a from 1
//         else a=0; // if row number even start a from 0
//         for(int j = 1;j<=i;j++){
//           cout<<a;
//           //flipping the values or exchanging the values 
//           if(a==1) a=0;
//           else a=1;
//         }
//         cout<<endl;
//     }
// }


//OR (Alternative Method)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=i;j++){
//             //col and row same then print 1
//             //same num + same num always gives even number % 2 == 0 means i and j were same then also print 1 else print 0
//             if(i==j || (i+j)%2==0) cout<<1; 
//             else cout<<0;
//         }
//         cout<<endl;
//     }
// }


//Qn3. Print the given output (Star Triangle Flipped)
//       *
//      **
//     ***
//    ****
//   *****
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n;j++){
//             if(j>=n+1-i) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }


//OR (Alternative method)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){  //for row
//         for(int j = 1;j<=n-i;j++){  //for spaces upto n-i times
//             cout<<" ";
//         }
//          for(int k = 1;k<=i;k++){ //for *
//                 cout<<"*";
//             }

//         cout<<endl;
//     }
// }

//Qn4. Print the given pattern (Number Triangle Flipped)
//    1
//   12
//  123
// 1234
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k = 1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }
}