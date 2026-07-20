// *** Looping in Vector
// Ques: Find the last occurrence (index) of a number in the vector.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(20);
    v.push_back(1);
    v.push_back(3);
    v.push_back(100);
    v.push_back(3);

    // 'a' stores the answer.
    // Initialize with -1 because if the element is not found,
    // we can easily identify it. (Valid indices start from 0.)
    int a = -1, n;

    cout << "Enter the number you want to search: ";
    cin >> n;

    // Start from the last index and move backwards.
    // The first match found will be the last occurrence of that number.
    for(int i = v.size() - 1; i >= 0; i--){
        if(v[i] == n){
            a = i;      // Store the index
            break;      // Stop searching
        }
    }
    cout << a;
    return 0;
}

