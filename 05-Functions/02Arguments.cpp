//Syntax for Functions
// Function Definition
// Formal Parameter (also called Parameter / Formal Argument)
// return_type function_name(parameter1, parameter2)
// {
        // function body
// }

// Function Call
// Actual Argument (also called Argument / Actual Parameter)
//function_name(argument1, argument2);


#include<iostream>
using namespace std;
void arg_test(int x, int y){ //int x and int y are  parameter1 and parameter2
    int sum = x+y;
    cout<<"Addition: "<<sum;
}
int main(){
    arg_test(10,20); // Function calling given two values cause it takes two parameters(10,20) are two arguments
}