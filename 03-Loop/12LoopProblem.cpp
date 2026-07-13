// Fibonacci
// Eg: 1,1,2,3,5,8... add the first two terms to find the next term
// steps: 1st print a+b(must be zero so start from -1,1), 2nd store b in a, 3rd store sum in b (then loop them)
// Qn1. Print the  fibonacci number series upto 'n' terms.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = -1, b = 1, c, n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n <= 0)
//         cout << "Please enter positive number";
//     for (int i = 1; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         cout << b << " ";
//     }
// }

// Qn2. Print the nth fibonacci number (starting from 0 1 1 2 3 5...)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,a=-1,b=1,c;
//     cout << "Enter a number: ";
//     cin >> n;
//     if(n<0) cout<<"Please enter positive number only";
//     else{
//         for(int i =0;i<=n;i++){ //starting from 0 because 1 repeats twice
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         cout<<"Fibonacci number of "<<n<<"th term is: "<<b;
//     }
//     return 0;
// }

// Qn2. Print the nth fibonacci number (starting from 1 1 2 3 5...)
#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 1, c;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
        cout << "Please enter positive number only";
    else if (n == 1 || n == 2)
        cout << "Fibonacci number of " << n << "th term is: " << 1;

    else
    {
        for (int i = 3; i <= n; i++)
        { // starting from 0 because 1 repeats twice
            c = a + b;
            a = b;
            b = c;
        }
        cout << "Fibonacci number of " << n << "th term is: " << b;
    }
    return 0;
}