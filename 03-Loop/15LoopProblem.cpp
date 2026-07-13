//Qn1. Print all the odd numbers from 1 to 100.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){ 
//         if(i%2!=0) cout<<i<<" "; // could have just increment by +2 then no need to write if statement your choice
//     }
// }


//Qn2. Print all the numbers from 1 to 100 that are divisible by 3
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i =1; i<=100;i++){
//         if(i%3==0) cout<<i<<" ";
//     }
// }


//Qn3. Display the AP 4,7,10,13,16... upto n terms
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i = 4;i<=n;i+=3){
//         cout<<i<<" ";
//     }
// }

//Qn4. Display this GP 3,12,48... upto n terms
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,start = 3;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n<0) cout<<"Enter positive number";
//     else {
//     while(n--){ //n-- means while loop stops when n = 0 = false
//         cout<<start<<" ";
//         start = start * 4;
//     }}
// }


//Qn5. WAP to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=65;i<=90;i++){
        cout<<i<<" "<<(char)i<<endl;
    }
    cout<<endl;
    for(int j = 97;j<=122;j++){
        cout<<j<<" "<<(char)j<<endl;
    }
}