// Qn1. 
#include<iostream>
using namespace std;
int main(){
    int a = 15; // address is 1000
    int *ptr = &a; // stores 1000 in ptr
    // int b = ++(*ptr); //means b = a+1; now a also has 16 because ++(*ptr) means add one
    // int b = ++*ptr; // same reason like ++(*ptr)

    int b = (*ptr)++; // post increment meaning first store 15 in b then add 1 in a
    
    cout<< a << " "<< b; // 16 15
    //assume the address of a is 1000
} 