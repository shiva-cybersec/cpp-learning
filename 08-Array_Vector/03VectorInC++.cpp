// Vector in C++ = Replacement of Array
// Array has a fixed size, but Vector is a dynamic array (size can grow automatically).

// Syntax:
// vector<int> v;

// How a Vector Grows:
// Initially, the vector has size 0.
// When push_back() adds an element and there is no space left,
// the vector creates a new memory block with double the previous capacity,
// copies all elements into the new block, deletes the old block,
// and the vector now points to the new memory.

// Common Vector Functions:
// push_back() -> Add an element at the end.
// pop_back()  -> Remove the last element.
// size()      -> Returns the number of elements.
// capacity()  -> Returns the current storage capacity.
// at(index)   -> Access an element safely.
// sort()      -> Sort the vector elements.

#include<iostream>
#include<vector>   // Required to use vector
using namespace std;

int main(){

    vector<int> v;      // Creates an empty vector (size = 0, capacity = 0)

    // vector<int> v(5); //declaration+initialization creates a vector of size 5, then stores 0 in each boxes default value
    // v.size(); #gives 5 because it stores garbage values 0
    // v.capacity(); #cause we created initially memory of 5 boxes

    // Since size is 0, don't use [] to insert values.
    // Use push_back() to add elements.

    v.push_back(6);     // Capacity becomes 1
    v.push_back(8);     // Capacity becomes 2 (new memory created)
    v.push_back(10);    // Capacity becomes 4 (new memory created)
    v.push_back(22);    // Stored in remaining space

    // After elements are added, [] can be used to update or access values.

    v[0] = 66;          // Updates first element

    // Printing vector elements

    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
}