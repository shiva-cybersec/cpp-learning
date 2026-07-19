// Linear Search ✅
// Ques: Find the element x in the array. Take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    
    //Taking inputs
    cout<<"Enter "<<n<<" number of inputs: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    //Taking element to search
    int search;
    cout<<"Enter element to search: ";
    cin>>search;

    //Checking if element is there in the array or not
    bool flag = false;
    for(int i = 0;i<n;i++){
        if(arr[i] == search) {
            flag = true;
            cout<<"Yes, Your element is in the array at index number: "<<i+1;

        break;}
    }
    if(!flag) cout<<"No, your element is not in the list.";

}