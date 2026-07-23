// Ques: Move all negative numbers to the beginning
// and positive numbers to the end using constant extra space.

#include<iostream>
#include<vector>
using namespace std;

// Function to print vector elements
void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";              // Print each element
    }
    cout << endl;
}

// Two Pointer Method
// Left pointer looks for a positive number.
// Right pointer looks for a negative number.
// When both are found, swap them.
void mneg(vector<int> &v){
    int i = 0;                            // Left pointer
    int j = v.size()-1;                   // Right pointer

    while(i < j){
        if(v[i] > 0 && v[j] < 0){         // Wrong positions found
            int temp = v[j];              // Swap positive and negative
            v[j] = v[i];
            v[i] = temp;
            i++;
            j--;
        }

        if(v[i] < 0) i++;                 // Negative is already at front
        if(v[j] > 0) j--;                 // Positive is already at back
    }
}

int main(){
    vector<int> v = {1,-2,3,-4,-5,6,8};

    display(v);                           // Print original vector
    mneg(v);                              // Move negatives to front
    display(v);                           // Print modified vector

    return 0;
}

