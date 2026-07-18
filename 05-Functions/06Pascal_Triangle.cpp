// Pascal Triangle
//         1
//       1 2 1
//     1  3 3  1
//   1  4  6  4  1
// 1   5 10 10  5  1

// Method 1: Time complexity this is not good for computer
// #include <iostream>
// using namespace std;
// int fact(int x)
// {
//     int a = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         a *= i;
//     }
//     return a;
// }
// int combination(int x, int y)
// {
//     int nfact = fact(x);
//     int rfact = fact(y);
//     int nrfact = fact(x - y);
//     return nfact / (rfact * nrfact);
// }
// int main()
// {
//     int n, r;
//     cout << "Enter n: ";
//     cin >> n;
//     cout << "Enter r: ";
//     cin >> r;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << combination(i, j) << " ";
//         }
//         cout << endl;
//     }
// }


// Method 2: Pascal Triangle Optimised (this is good for computer)
// by using grade 11 formula of combination
// nCr+1 = nCr * n-r/r+1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 0; i<=n;i++){
        int curr = 1;
        for(int j = 0; j<=i;j++){
            cout<< curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}