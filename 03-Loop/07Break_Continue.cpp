// Break - to break the loop without using loop condition
// Qn1. WAP to check if the given number is prime or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int guess, i;
//     bool flag = true; //true means prime
//     cout << "Enter a number: ";
//     cin >> guess;
//     for (i = 2; i < guess; i++)
//     {
//         if (guess % i == 0){
//             flag = false; //false means composite
//             break;}
//     }
//     if(guess==1) cout<<guess<<" is neither composite nor prime";
//     else if(flag==true) cout<<"Prime number";
//     else cout<<"Composite number";
    
//     return 0;
// }


//Continue - it means leave/skip me and go to next iteration/counting
//Qn2. WAP to print all the odd numbers from 1 - 100 using continue 
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%2==0) continue;
        else cout<<i<<" ";
    }
    return 0;
}