//Q1. Print the following pattern (Input : n = 4)
//    1
//   123
//  12345
// 1234567

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of lines: ";
//     cin>>n;
//     int nst = 1;
//     int nsp = n-1;
//     for(int i=1;i<=n;i++){
//         for(int j =1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k =1; k<=nst;k++){
//             cout<<k;
//         }
//         nst+=2;
//         cout<<endl;

//     }
// }


//Qn2. Q2. Print the following pattern (Input : n = 4)
//      A
//    A B C
//  A B C D E
//A B C D E F G
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;
//     int nsp = n-1;
//     int nst = 1;
//     for(int i =1;i<=n;i++){
//         for(int j = 1;j<=nsp;j++){
//             cout<<"  ";
//         }
//         nsp--;
//         for(int k = 1; k<=nst;k++){
//             cout<<(char)('A'+k-1)<<" ";
//         }
//         nst+=2;
//         cout<<endl;
//     }
// }


//Q3. Print the following pattern (Input : n = 4)
//          A
//        B A B
//      C B A B C
//    D C B A B C D
