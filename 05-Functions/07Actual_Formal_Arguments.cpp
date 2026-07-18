// Topic 1: 
// Are the arguments passed actually the same? Ans: NO,reason is below
// Let's print the memory addresses of the variables to find out.

// Every time we declare an int variable, a new memory location (box)
// is created in RAM. An int usually occupies 4 bytes of memory.
// To print address of any variable: syntax: cout<<&variablename;
// #include<iostream>
// using namespace std;
// void temp(int x, int y){
//     cout<<&x<<" "<<&y;
// }
// int main(){
//     int x =4;
//     int y =2;
//     cout<<&x<<" "<<&y<<endl;;
//     temp(10,20);
// }




// Topic 2:
// Formal Parameters and actual Parameters
// #include<iostream>
// using namespace std;
// void temp(int x, int y){ // x, y -> Formal Parameters (also called Parameters or Formal Arguments)
//     cout << &x << " " << &y;
// }
// int main(){
//     int x = 4;
//     int y = 2;
//     cout << &x << " " << &y << endl;
//     temp(10, 20); // 10, 20 -> Actual Arguments (also called Arguments or Actual Parameters)

//     temp(x, y);   // x, y -> Actual Arguments (variables passed during the function call)
// }



