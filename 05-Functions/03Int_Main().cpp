// What is int main()? --> main function
// 1. Program execution always starts from the main() function.
// 2. It is the entry point of every C++ program.
// 3. main() is executed only once when the program starts.

// What does return xyz do? --> it returns the same type of data that the function is created.

#include <bits/stdc++.h>
using namespace std;
int sum(int x, int y){
    return x+y; //add x+y then pack the answer and return will give it to int and send it to the caller and sum(23,44) is replace with answer and cout below will print it
}
int main(){
    cout<<sum(23,44);
}