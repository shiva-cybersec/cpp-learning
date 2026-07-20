// Ques: Find the doublet(pair of two similiar things) in the Array whose sum is equal to the given x. (Leetcode -1 question)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector <int> v={ 23,44,11,22,10,20,41,25,10,15,30}; 
    // Vector size taking
    int sz;
    cout<<"Enter the size of the vector: ";
    cin>>sz;

    //creating vector
    vector <int> v(sz);
    cout<<"Enter the vector elements: ";
    for(int i =0;i<v.size();i++){
        // cin>>v[i]; or
        int temp;
        cin>>temp;
        v.push_back(temp);

    }

    // number that we need to find then run and loop and find all the doublets
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 0;i<sz;i++){
        for(int j = i+1;j<v.size();j++){
            if((v[i] + v[j])==n) cout<<i<<" "<<j<<endl;;
        }
    }
}
