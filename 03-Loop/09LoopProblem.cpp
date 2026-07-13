// Qn1. Count Digits of a number, sum of a number
//  Hint:
//  1. Store the original number in another variable.
//  2. Repeatedly divide the number by 10.
//  3. Count how many times the loop runs.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, s = 0;
//     cout << "Enter a number: ";
//     cin >> num;
//     // handle negative input
//     if (num < 0)
//         num = -num;
//     if (num == 0)
//     {
//         cout << 1;
//     }
//     else
//     {
//         while (num != 0)
//         {                   // stop if num becomes 0
//             s = s + 1;      // everytime runs increase counting by 1
//             num = num / 10; // everytime it runs eliminate last digit
//         }
//         cout << "Total No. of digits of your number is: " << s;
//     }
// }


//Qn2. WAP to print sum of digits of a given number
#include <iostream>
using namespace std;
int main(){
     int num, s = 0;
    cout << "Enter a number: ";
    cin >> num;
    if(num<0) num = -num;
    if(num==0) cout<<"Sum of your digit is 0";
    else{
        while(num!=0){
            s=s+num%10;
            num /= 10;
        }
        cout<<"Sum of your digit is "<<s;
    }
}