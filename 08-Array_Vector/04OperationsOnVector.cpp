// size(), capacity(), pop_back(), push_back(), at, sort
// Passing vectors to functions
#include<iostream>
#include<vector>
#include<algorithm> // ****Required for sort
using namespace std;
int main(){
    vector <int> v;
    v.push_back(20);
    cout<<v.size()<<" ";      //point 1: ***prints how many elements are their
    cout<<v.capacity()<<endl; //point 1: ***prints how many total boxes are there after each element we add

    v.push_back(30);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;


    v.push_back(80);
    v.push_back(50);
    v.push_back(60);
    v.push_back(20);
    v.push_back(80);
    v.push_back(50);
    v.push_back(60);
 
    for(int i = 0;i<v.size();i++){ //*** v.size() print total number of elements 
        cout<<v[i]<<" ";
    }
    cout<<endl<<v.size()<<" "; 
    cout<<v.capacity()<<endl; 

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
 
    
    cout<<endl<<v.size()<<" ";//*** Point 2: size updates itself after every element addition or element deletion.
    cout<<v.capacity()<<endl; //*** Point 2: once it increases the size then after u pop the element capacity won't shrink or decrease


    // *****Method: using extra variable to Take Inputs in vector when no size mentioned
    int a;
    for(int i = 0;i<5;i++){
        cin>>a;
        v.push_back(a);
    }


    // ******Use of (at()) this is alternative of variable[indexnumber], at is use for update and to print specific index value

    v.at(2) = 808; //update index 2 value to 808
    cout<<v.at(2); //print index 2 value
    for(int i = 0;i<5;i++){
        cout<<v.at(i)<<" ";
    }

    // *****use of sort(variable.begin(), variable.end()) this automatically sorts any array in assending order
    sort(v.begin(),v.end());
    for(int i = 0;i<5;i++){
        cout<<v.at(i)<<" ";
    }
}









// ***** Passing Vectors to Functions [Different from Arrays]
// By default, vectors are passed by value.
// Every time a vector is passed, a new copy of the vector is created.
// The copied vector has its own memory, so changes inside the function do NOT affect the original vector.

// Vectors can also be passed by reference using '&'.
// In that case, no copy is created and changes inside the function affect the original vector.

#include<iostream>
#include<vector>
using namespace std;
// By default, pass by value
void change(vector<int> a){
    a.at(0) = 100;   // or a[0] = 100;

    // Printing copied vector
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;

    v.push_back(20);
    v.push_back(50);
    v.push_back(60);
    v.push_back(30);

    // Printing original vector
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // Passing vector to function (copy is created)
    change(v);

    // Original vector remains unchanged
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}

/*
Output:
20 50 60 30
100 50 60 30
20 50 60 30

Important Points:
✔ By default, vectors are passed by value.
✔ A new copy of the vector is created.
✔ Changes inside the function do not affect the original vector.
✔ To modify the original vector, pass it by reference:
   void change(vector<int> &a)
*/




// **** Passing by reference
// Pass by Reference (&)
// No copy is created.
// Changes affect the original vector.

// #include<iostream>
// #include<vector>
// using namespace std;

// void change(vector<int> &a){
//     a[0] = 100;
// }

// int main(){
//     vector<int> v = {20, 50};
//     change(v);
//     cout << v[0];   // Output: 100
// }