// use of #include <bits/stdc++.h> (use this if you don't want to remember different headers as this includes all the libraries)
// Example 1 - Predict the output

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     //infinite loop
//     while('1'<'2') cout<<"No Stopping, Everyday Working! hahahahaha...";
//     return 0;
// }

// Example 2 - Predict the output
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main( ) {
//  int t = 10;
//  while (t /= 2) { // this single line means t = t/2 that means doing two works in single line (no need increment or decrement)
//  cout << "Hello" << endl;
//  }
//  }

// Example 3 - WAP to print the sum of all the even digits of a given number.(eg. 4556  = 10)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, even = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     int temp = n;
//     while(n!=0){
//         if((n%10)%2==0) even = even + (n%10);
//         n=n/10;
//     }
//     cout<<"Sum of all the even digits of the given number "<<temp<<" is "<<even;

//     return 0;
// }


//Example 4 - WAP to print the sum of a given number and its reverse (eg: 12+21=33)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,reverse=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int temp = n;
//     while(n!=0){
//         reverse = reverse*10+(n%10);
//         n=n/10;
//     }
//     cout<<"Sum of the given number "<<temp<<" and its reverse "<<reverse<<" is "<<temp+reverse;
//     return 0;
// }


//Example 5 - WAP to print all Armstrong numbers between 1 and 500. if the sum of cubes of each digit of a number is equal to the number itself, then the number is called as Armstrong number. For eg. 153 =(1*1*1)+(5*5*5)+(3*3*3)
#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 1; i<=500;i++){
        int temp = i, sum = 0,a;
        while(temp!=0){
            a = temp%10;
            sum=sum+a*a*a;
            temp=temp/10;
        }
        if(i == sum) cout<<sum<<" ";
    }
}






//Example 6 - WAP to check given number is Armstrong or no can be anydigit number.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,a,sum=0,count=0;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int temp = n;
//     while(n!=0){
//         count +=1;
//         n=n/10;
//     }
//     n=temp;
//     while(n!=0){
//        a= n%10;
//        sum = sum + pow(a,count);
//        n=n/10;
//            if(temp == sum) cout<<sum<<" is an Armstrong number";

//     }
//     return 0;
// }