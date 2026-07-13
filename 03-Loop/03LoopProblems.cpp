// Qn1. Display this Arithmetic Progression 1,3,5,7,9 ... upto 'n' terms
// #include <iostream>
// using namespace std;
// int main()
// {
//     int usernum, i, temp = 1; // created usernum because we need to print AP upto userinput number times
//     cout << "Enter a number: ";
//     cin >> usernum;
//     cout << "Arithmetic Progression upto " << usernum << " term is: ";
//     // i+=2 because difference is 2 in above AP
//     // instead of usernum we can also use formula a+(n-1)d this is difficult just do using below process
//     for (i = 1; i <= usernum; i ++)
//     {
//         cout<<temp<<" ";
//         temp = temp + 2;
//     }
//     return 0;
// }

// Qn2. Display this Geometric Progression 1,2,4,8,16,32... upto 'n' terms.
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int i,usernum,temp = 1;
//      cout<<"Enter a number: ";
//      cin>>usernum;
//      for(i=1;i<=usernum;i++){
//          cout<<temp<<" ";
//          temp = temp *2;
//      }   //just need first term and common multiplicative or divisible difference or ratio.
//      return 0;
//  }

// Qn3. Display this Arithmetic Progression 100,97,94... upto all terms which are positive.
#include <iostream>
using namespace std;
int main()
{
    int i, temp = 100; //i know the last positive or total n terms upto which after i deduct -3 it will give me positive  Ap is upto 34terms i found it using a+(n-1)d formula (this is not practical for all coders so i have an alternative just use temp>0 check below)
    // for(;temp>0;) // we can also neglect initialization but just condition and increment or decrement is need you can add increment either in i++ place or inside the curly bracket
    for(i=1;temp>0;i++) {
        cout<<temp<<" ";
        temp = temp - 3;
    }
    
    return 0;
}