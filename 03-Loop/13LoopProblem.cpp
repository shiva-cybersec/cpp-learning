// value of number to the power something
// Qn1. Two numbers are entered through the keyboard. Write a program to find the value of one number raise to the power of another.
//cases: 0 raise to power 0 = undefined
        // anything raise to power 0 = 1
        // anything raise to (-power) = 1/answer
        // positive raise to positive power = positive output
#include <iostream>
using namespace std;
int main()
{
    int num, pow = 1;
    float mul = 1;
    bool flag = true; // true means positive power
    cout << "Enter a number and a power: ";
    cin >> num >> pow;
    if (pow < 0)
    {
        flag = false; // flase means power negative
        pow = -pow;
    }
    else if (num == 0 && pow == 0)
    {
        cout << num << " raised to the power of " << pow << " is undefined";
        return 0;
    }

    for (int i = 1; i <= pow; i++)
    {
        mul = mul * num;
    }

    if (!flag) //!flag means flag == flase 
    {
        pow = -pow;
        mul = 1 / mul;
    }
    cout << num << " raised to the power of " << pow << " is " << mul;

    return 0;
}