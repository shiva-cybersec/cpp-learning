// Qn1. Write a function to compute the greatest common divisor of two given numbers.
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
//     // Method 1: this checks all the values upto minimum number
//     // int hcf = 1;
//     // for(int i = 1; i<=min(a,b);i++){
//     //     if((a%i==0) && (b%i==0)) hcf = i;
//     // }
//     // return hcf;
    
//     //Method 2: this check from minimum number to smaller numbers as soon as we receive one common factor that is our highest common factor then break the loop. no need to check for the rest.
//     int hcf = 1;
//     for(int i = min(a,b);i>=1;i++){
//         if((a%i==0) && (b%i==0)) hcf = i;
//         break;
//     }
//     return hcf;
// }
// int main(){
//     int a,b;
//     cout<<"Enter 1st number: ";
//     cin>>a;
//     cout<<"Enter 2nd number: ";
//     cin>>b;
//     cout<<gcd(a,b);
// }



//Qn2. Print the factorials of first n numbers using function
// #include<iostream>
// using namespace std;
// int fact(int x){
//     int a=1;
//     for(int i = x;i>=1;i--){
//         a *= i;
//     }
//     return a;
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         cout<<fact(i)<<" ";
//     }
// }


// short method
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact *= i;
        cout<<fact<<" ";
    }
}