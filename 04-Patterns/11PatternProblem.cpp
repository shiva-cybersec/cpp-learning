//Pattern 10: Number Spiral (Imp and hardest)
//Qn1. Print the given output (Number Spiral)
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444


// first try to find solution for this then we can find solution for above question 
// 1111111
// 1222221
// 1233321
// 1234321
// 1233321
// 1222221
// 1111111

//step1 solve this: Break in middle horizantaly and vertically numbers are same it seems 4 quadrants of same pieces are attached
// 1111
// 1222
// 1233
// 1234

// check i small or j print that: i <= j cout<<i; else cout<<j

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; 
//     cout<<"Enter no. of lines: ";
//     cin>>n;
//     for(int i = 1; i<=n;i++){
//         for(int j = 1; j<=n; j++){
//             // if(i<=j) cout<<i;
//             // else cout<<j; 
//             //or

//             cout<<min(i,j); //checks i or j is smaller and prints that and max(i,j) does the opposite of min
//         }
//         cout<<endl;
//     }
// }

//step2: now solve for all see after half u see 5 6 7 consider 5 6 7 as 3 2 1 that means we can see when a< then n same j is smaller than j then we print i+a(supposed numbers(321))= 2n, then we can write a=2n-i ,  but store i and j in separate variable
//321 that we consider are known as psuedo variables

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; 
//     cout<<"Enter no. of lines: ";
//     cin>>n;
//     for(int i = 1; i<=2*n-1;i++){ //cause if we enter 4 it prints 7 rows and columns
        
//         for(int j = 1; j<=2*n-1; j++){ //cause if we enter 4 it prints 7 rows and columns
//            int a = i;
//            int b = j;
//            if(a>n) a = (2*n)-i;
//            if(b>n) b = (2*n)-j;
//             cout<<min(a,b); //checks a or b is smaller and prints that and max(a,b) does the opposite of min
//         }
//         cout<<endl;
//     }
// }

//step 3: (Final step)
// now we need to replace 
// 1  with 4 meaning n - 0
// 2  with 3 meaning n - 1
// 3  with 2 meaning n - 2 (same as n - 3 + 1)
// .
// x     ------------n - x + 1 (x means some i store in x)
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cout<<"Enter no. of lines: ";
    cin>>n;
    for(int i = 1; i<=2*n-1;i++){ //cause if we enter 4 it prints 7 rows and columns
        
        for(int j = 1; j<=2*n-1; j++){ //cause if we enter 4 it prints 7 rows and columns
           int a = i;

           int b = j;
           if(a>n) a = (2*n)-i;
           if(b>n) b = (2*n)-j;
           int x = min(a,b); //checks a or b is smaller and stores that and max(a,b) does the opposite of min
           cout<<n-x+1; // this means from n minus the minimum and add 1 /same as the example shown in step 3 above
        }
        cout<<endl;
    }
}