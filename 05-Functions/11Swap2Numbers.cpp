// Qn1. WAP to swap 2 numbers;
// Method 1: using extra variable
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cin>>a>>b;
//     temp = a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b;
// }




// Method 2: without using extra variable (just use + , - ,-)
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<< a <<" "<<b;
    
}