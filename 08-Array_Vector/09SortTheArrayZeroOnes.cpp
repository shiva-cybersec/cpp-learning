// Ques: Sort an array/vector containing only 0's and 1's.

#include<iostream>
#include<vector>
#include<algorithm>       // Required for sort()
using namespace std;

// Function to print vector elements
void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";          // Print each element
    }
    cout << endl;
}

// ******** Method 3: Two Pointer Method ********
// Time: O(n), Space: O(1)
void betterSort01(vector<int> &v){

    int i = 0;                        // Left pointer starts from beginning
    int j = v.size()-1;               // Right pointer starts from end

    while(i < j){
        if(v[i] == 0) i++;            // 0 is already in correct position
        if(v[j] == 1) j--;            // 1 is already in correct position
        if(i > j) break;              // Stop if pointers cross
        if(v[i] == 1 && v[j] == 0){   // Wrong positions found

            // Swapping Method 1
            // int temp = v[i];
            // v[i] = v[j];
            // v[j] = temp;

            // Swapping Method 2 (No temp variable)
            v[i] = 0;
            v[j] = 1;
            i++;                      // Move both pointers
            j--;
        }
    }
}


// ******** Method 2: Counting Method ********
// Time: O(n), Space: O(1)

// void sort01(vector<int> &v){
//     int noz = 0;                    // Count number of 0's
//     int noo = 0;                    // Count number of 1's
//
//     for(int i = 0; i < v.size(); i++){
//         if(v[i] == 0) noz++;
//         else noo++;
//     }
//
//     // Fill first all 0's, then all 1's
//     for(int i = 0; i < v.size(); i++){
//         if(i < noz) v[i] = 0;
//         else v[i] = 1;
//     }
// }

int main(){

    vector<int> v = {1,0,0,1,1,0,1,0,1,0};

    display(v);                       // Print original vector

    // ******** Method 1 ********
    // Built-in sort() function
    // sort(v.begin(), v.end());

    // ******** Method 2 ********
    // Counting number of 0's and 1's
    // sort01(v);

    // ******** Method 3 ********
    // Two Pointer Method (means i = 0, j = n-1)
    // Step 1: Move left pointer until a 1 is found.
    // Step 2: Move right pointer until a 0 is found.
    // Step 3: Swap them.
    // Repeat until both pointers meet.

    betterSort01(v);
    display(v);                       // Print sorted vector
    return 0;
}