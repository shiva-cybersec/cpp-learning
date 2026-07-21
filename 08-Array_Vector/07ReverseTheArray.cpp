// Ques: Copy the elements of one vector into another in reverse order.
//        using array or extra array and without using extra array(just loops)


// In array we have only two ways to reverse the array either using while loop or using forloop
// In vector we have so many options on top of while and for loops it's shown below
#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    vector<int> v2;                    // New vector to store reversed elements

    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    cout << "Enter vector elements: ";
    for(int i = 0; i < n; i++){
        int temp;                      // Temporary variable to take input
        cin >> temp;
        v.push_back(temp);             // Insert element into vector
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";           // Print original vector
    }

    // Start from the last index and copy each element into v2.
    // Since we are moving backwards, v2 stores the elements in reverse order.
    for(int i = v.size() - 1; i >= 0; i--){
        v2.push_back(v[i]);            // Copy current element to v2
    }
    cout << endl;

    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";          // Print reversed vector
    }
    return 0;
}

/*
Example:

Input:
10 20 30 40 50

Original Vector:
10 20 30 40 50

Reversed Copy:
50 40 30 20 10
*/



// OR
#include<iostream>
#include <vector>
using namespace std;
void display(vector <int> &a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return;
}
int main(){
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);

    display(v1);
    // reverse(using while loop without using extra array)
    // int i = 0; //
    // int j = v1.size()-1; //n-1 eg: 5-1 = 4
    // while(i<j){
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    //     i++;
    //     j--;
    // }

    // reverse (using for loop without using extra array)
    // for(int i = 0,j=v1.size()-1; i<j;i++,j--){
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    // }

    // reverse (using for loop and extra array)
    vector <int> v2(v1.size());
    for(int i =0;i<v1.size();i++){
        // i + j = size -1 //weknow
        int j = v1.size()-1-i;
        v2[i] = v1[j];
    }
    display(v2);
}