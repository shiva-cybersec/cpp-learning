// Qn1. Print the following pattern
//  1 1 1 1
//  2 2 2 2
//  3 3 3 3
//  4 4 4 4
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      int j,a=1;
//      for(int i = 1;i<=n;i++){
//          for( j = 1;j<=n;j++){
//              cout<<a;
//          }
//          a++;
//          cout<<endl;
//      }
//  }

// or (alternative way)
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      for(int i = 1; i<=n;i++){
//          for(int j = 1; j<=n;j++){
//              cout<<i<<" ";
//          }
//          cout<<endl;
//      }
//  }

// Qn2. Print the following pattern. (input: n =4)
//  1 2 3 4
//  1 2 3
//  1 2
//  1
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      for(int i =1; i<=n;i++){
//          for(int j =1;j<=n-i+1;j++){
//              cout<<j<<" ";
//          }
//          cout<<endl;
//      }
//  }

// Qn3. Print the following pattern (input: n = 4)
//  A
//  A B
//  A B C
//  A B C D
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      for(int i = 1;i<=n;i++){
//          for(int j = 1;j<=i;j++){
//              cout<<(char)(64+j)<<" ";
//              //or:: cout<<(char)('A'+j-1)
//          }
//          cout<<endl;
//      }
//  }

// Qn4. Print the following pattern (input: n = 4)
//  1
//  A B
//  1 2 3
//  A B C D
//  1 2 3 4 5
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      for(int i =1;i<=n+1;i++){
//          for(int j = 1;j<=i;j++){
//              if(i%2!=0) cout<<j<<" ";
//              else cout<<(char)('A'+j-1)<<" ";
//          }
//          cout<<endl;
//      }
//  }

// or (alternative way)
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      for(int i =1;i<=n+1;i++){
//       if(i%2==1) for(int j = 1;j<=i;j++)
//          cout<<j<<" ";
//       else for(int j = 1;j<=i;j++)
//          cout<<(char)('A'+j-1)<<" ";
//          cout<<endl;
//      }}

// Qn5. Print the following pattern (input: n = 4)
//  *
//  **
//  ***
//  ****
//  ***
//  **
//  *

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of lines: ";
//     cin>>n;
//     for(int i =1;i<=2*n-1;i++){
//         int a = 0;
//         if(i>n) a =2* n-i;
//         else a = i;
//         for(int j = 1;j<=a;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// or(alternative method)
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;
//      //Print upper triangle stars
//      for(int i =1;i<=n;i++){
//          for(int j = 1; j<=i;j++){
//              cout<<"*"<<" ";
//          }
//          cout<<endl;
//      }
//      //print lower triangle stars
//      for(int i = 1;i<=n-1;i++){
//          for(int j = 1;j<=n-i;j++){
//              cout<<"*"<<" ";
//          }
//          cout<<endl;
//      }
//  }

// Qn6. Print the following pattern (input: m=4, n=6)
//  ******
//  *    *
//  *    *
//  ******
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//      int m;
//      cout<<"Enter no. of columns: ";
//      cin>>m;
//      for(int i =1;i<=n;i++){
//         for(int j = 1; j<=m;j++){
//          if(i==1 || i==n || j==1 || j==m){
//              cout<<"*";
//          }
//          else cout<<" ";
//         }
//         cout<<endl;
//      }
//  }

// Q7. Print the following pattern (Input : m = 4, n = 6)
//     ****
//    ****
//   ****
//  ****
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//      int m;
//      cout<<"Enter no. of columns: ";
//      cin>>m;
//      int temp  = n;
//      for(int i =1;i<=n;i++){
//          for(int j = 1; j<=m;j++){
//              if(j<temp) cout<<" ";
//              else if(j>=temp && j<=m) cout<<"*";
//          }
//          temp--;
//          m--;
//          cout<<endl;
//      }
//  }

// or (alternative way)
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//      int m;
//      cout<<"Enter no. of columns: ";
//      cin>>m;
//      for(int i =1;i<=n;i++){
//          //printing spaces
//         for(int j = 1; j<=n-i+1;j++){
//          cout<<" ";}

//         //printing stars
//         for(int j = 1; j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Qn8. Q8. Print the following pattern (Input : n= 4)
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of lines: ";
//      cin>>n;

//     for(int i =1;i<=n;i++){
//        for(int j = 1; j<=i;j++){
//         cout<<j;
//        }
//         cout<<endl;
//     }
// }

// Q9. Print the following pattern (Input : n = 4)
//        A
//      A B
//    A B C
//  A B C D
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter no. of rows: ";
//      cin>>n;
//     int nsp = 1;
//      for(int i =1;i<=n;i++){
//         for(int j = 1; j<=n-i;j++){
//              cout<<" ";
//         }
//         for(int k = 1; k<=nsp;k++){
//                  cout<<(char)('A'+k-1);
//         }
//         nsp++;
//          cout<<endl;
//      }
//  }

// Qn10. Print the following pattern (input: n = 4)
//  1
//  2 1
//  3 2 1
//  4 3 2 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of lines: ";
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        a = i;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a--;
        }
        cout << endl;
    }
}