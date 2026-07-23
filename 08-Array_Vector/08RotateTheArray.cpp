// Note:
// In basic array problems, we usually reverse an array using a for loop or a while loop.
// For vectors, we can also use an extra vector or the built-in reverse() function(which is inside #include <algorith>).


// #include <iostream>
// #include <vector>
// #include <algorithm> // Required for reverse()
// using namespace std;

// // ******REVERSE THE MIDDLE ELEMENTS ONLY****
// // First and last elements remain unchanged.
// void rotate(vector<int> &a, vector<int> &b)
// {
//     b[0] = a[0];                           // Copy first element
//     b[b.size()-1] = a[a.size()-1];         // Copy last element

//     int j = 1;                             // Start filling b from index 1

//     // Traverse from second last element to index 1
//     for(int i = a.size()-2; i > 0; i--){
//         b[j] = a[i];                       // Copy elements in reverse order
//         j++;                               // Move to next index of b
//     }
// }

// // Function to print all vector elements
// void display(vector<int> &c)
// {
//     for(int i = 0; i < c.size(); i++){
//         cout << c[i] << " ";               // Print each element
//     }
// }

// int main()
// {
//     vector<int> v = {2,3,5,6,7,20,10};     // Original vector
//     // reverse(v.begin(),v.end());
//     // display(v);
//     vector<int> vnew(v.size());            // New vector with same size

//     rotate(v, vnew);                       // Reverse middle elements
//     display(v);                            // Print original vector
//     cout << endl;
//     display(vnew);                         // Print modified vector
// }
// void display(vector <int> &v1){
//     for(int i = 0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     return;
// }



// OR (ALTERNATIVE WAY)
// #include <iostream>
// #include <vector>
// using namespace std;
// void reversePart (int i, int j, vector <int> &v1){ // reverse only some indexes
//     while(i<=j){
//         int temp = v1[i];
//         v1[i] = v1[j];
//         v1[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }

// void reverse (vector<int> & v1){ //reverse everything
//     int i = 0;
//     int j = v1.size()-1;
//     while(i<=j){
//         int temp = v1[i];
//         v1[i] = v1[j];
//         v1[j] = temp;
//         i++; j--;
//     }
//     return;
// }

// int main(){
//     vector <int> v1;
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(23);
//     v1.push_back(22);
//     v1.push_back(21);
//     v1.push_back(29);

//     reversePart(0,4,v1);
//     display(v1);

//     reverse(v1);
//     display(v1);
//     return 0;
// }







// Qn. Rotate the given vector by k steps using the Reversal Algorithm.
// Step 1: Reverse the first (n-k) elements.
// Step 2: Reverse the last k elements.
// Step 3: Reverse the entire vector.
// Final result: Vector is rotated to the right by k positions.

#include <iostream>
#include <vector>
using namespace std;

// Function to reverse elements between index i and j
void rotatePart(int i, int j, vector<int> &v){

    while(i <= j){                          // Continue until both pointers meet
        int temp = v[j];                    // Store last element
        v[j] = v[i];                        // Copy first element to last
        v[i] = temp;                        // Put stored value at first
        i++;                                // Move left pointer forward
        j--;                                // Move right pointer backward
    }
}

// Function to print all vector elements
void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";                // Print each element
    }
    cout << endl;
}

int main(){
    vector<int> v = {1,22,33,44,55,66,10,20}; // Original vector
    display(v);                              // Print original vector

    int k;
    cout << "By how many steps to rotate the array? ";
    cin >> k;

    int n = v.size();                        // Store vector size
    k = k % n;                               // Handles k >= n

    rotatePart(0, n-k-1, v);                 // Reverse first (n-k) elements
    rotatePart(n-k, n-1, v);                 // Reverse last k elements
    rotatePart(0, n-1, v);                   // Reverse the whole vector
    display(v);                              // Print rotated vector

    return 0;
}