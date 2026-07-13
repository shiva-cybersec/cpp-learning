//Qn1. WAP to print reverse of a given number
// #include <iostream>
// using namespace std;
// int main(){
//     int num,s=0;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(num==0) cout<<"Reverse of your number is 0";
//     else{
//         while(num!=0){
            
//             s=s*10+num%10; //first take last digit and add it to s container
//             num /= 10;  //remove the last digit
//         }
//         cout<<"Reverse of your number is "<<s;
//     }
// }


//Qn2. Print the sum of this series 1 - 2 + 3 - 4 + 5 - 6...upto 'n'
#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"Enter a number: ";
    cin>>n;
    // for(i=1;i<=n;i++){
    //   if(i%2!=0) s += i; //this is not good
    //   else if(i%2==0) s-= i; // this is not good either
    // }
   if(n%2==0) sum = -n/2;
   else sum = -n/2 +n;
   cout<<sum;
    return 0;
}