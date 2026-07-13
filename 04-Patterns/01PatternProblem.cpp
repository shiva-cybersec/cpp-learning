//Pattern 1
//Qn1. Print the Given Pattern take rows and columns numbers as input(solid Rectangle)
// *****
// *****
// *****

#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    for(int i = 1;i<=r;i++){ //for row
        for(int j=1;j<=c;j++){ //for column
            cout<<"*";
        }
        cout<<endl;
    }
}