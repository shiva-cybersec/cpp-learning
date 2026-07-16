//Pattern 7: Rhombus
//Qn1. Print the given pattern
//      ****
//     ****
//    ****
//   ****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i = 1;i<=n; i++){
        for(int j = 1; j<=n-i;j++){ //for spaces
            cout<<" ";
        }
        for(int k = 1; k<=n;k++){
            cout<<"*"; //for *
        }
        cout<<endl;
        
    }
}