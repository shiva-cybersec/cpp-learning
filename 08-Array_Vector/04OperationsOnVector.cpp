// size(), capacity(), pop_back(), push_back(), at, sort
#include<iostream>
#include<vector>
#include<algorithm> // Required for sort
using namespace std;
int main(){
    vector <int> v;
    v.push_back(20);
    cout<<v.size()<<" ";      //point 1: prints how many elements are their
    cout<<v.capacity()<<endl; //point 1: prints how many total boxes are there after each element we add

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
 
    for(int i = 0;i<v.size();i++){ //v.size() print total number of elements 
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
 
    
    cout<<endl<<v.size()<<" ";//Point 2: size updates itself after every element addition or element deletion.
    cout<<v.capacity()<<endl; //Point 2: once it increases the size then after u pop the element capacity won't shrink or decrease


    // Method: using extra variable to Take Inputs in vector when no size mentioned
    int a;
    for(int i = 0;i<5;i++){
        cin>>a;
        v.push_back(a);
    }


    //Use of at alternative to variable[indexnumber], at is use for update and to print specific index value

    v.at(2) = 808; //update index 2 value to 808
    cout<<v.at(2); //print index 2 value
    for(int i = 0;i<5;i++){
        cout<<v.at(i)<<" ";
    }

    //use of sort(variable.begin(), variable.end()) this automatically sorts any array in assending order
    sort(v.begin(),v.end());
    for(int i = 0;i<5;i++){
        cout<<v.at(i)<<" ";
    }

}
