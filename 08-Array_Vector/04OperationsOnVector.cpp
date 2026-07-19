// size(), capacity(), at, sort, pop_back(), push_back()
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(20);
    cout<<v.size()<<" ";      //point 1: prints how many elements are their
    cout<<v.capacity()<<endl; //point 1: prints how many total boxes are there after each element we add

    v.push_back(30);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;

    v.push_back(40);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;

    v.push_back(50);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;


    v.push_back(80);
    v.push_back(50);
    v.push_back(60);
    v.push_back(20);
    v.push_back(80);
    v.push_back(50);
    v.push_back(60);
    v.push_back(20);
    v.push_back(80);
    v.push_back(50);
    v.push_back(60);
    v.push_back(20);
    v.push_back(80);
    v.push_back(50);
    v.push_back(60);
    v.push_back(20);
    v.push_back(50);
    v.push_back(60);
    v.push_back(20);
    for(int i = 0;i<v.size();i++){ //v.size() print total number of elements 
        cout<<v[i]<<" ";
    }
    cout<<endl<<v.size()<<" "; //Point 2: size updates itself after every element addition or element deletion.
    cout<<v.capacity()<<endl; //Point 2: once it increases the size then after u pop the element capacity won't shrink or decrease

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    cout<<endl<<v.size()<<" ";
    cout<<v.capacity()<<endl;

}
