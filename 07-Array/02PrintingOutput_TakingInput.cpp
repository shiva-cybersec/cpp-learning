// 3) Printing Output and Taking Input ✅
// Solution: prefered using any type of loop forloop or whileloop using indices
// Qn. Create an array of size 7 and take inputs from user then print them all.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the memory: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers of input: ";

    // Taking Inputs
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    // Printing Outputs
    cout<<"Entered numbers are: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}