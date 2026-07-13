// Factorial
// Qn1. Print the factorial of a given 'n'
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m = 1;
//     cout << "Enter a number: ";
//     cin >> n;
   
//     if (n == 0)
//     {
//         cout << "Factorial of 0 is: " << m;
//     }
//     else if(n<0) cout<<"Please enter positive number only";
     
//     else
//     {
//         int temp = n;
//         while (n!=0)
//         {
//             m = m * n;
//             n--;
//         }
//         cout << "Factorial of "<<temp<<"! is: " << m;
//     }
//     return 0;
// }

//Alternative method for finding factorial of single number;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     long long fact = 1;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int temp = n;
//     if(n<0) cout<<"Please enter positive number only.";
//     else{
//         for(int i=1;i<=n;i++){
//             fact *= i;
//         }
//     }
//     cout<<"Factorial of "<<temp<<"! is "<<fact;
//     return 0;
// }


//Qn2. Print the factorial of given number 'n'
#include <iostream>
using namespace std;
int main(){
    int n;
    long long fact = 1;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0) cout<<"Please enter positive number only";
    else{
        for(int i=1;i<=n;i++){
            for(int j = 1;j<=i;j++){
                fact *= j;
            }
            cout<<"Factroial of "<<i<<"! is "<<fact<<endl;
            fact = 1;
        }
    }
}