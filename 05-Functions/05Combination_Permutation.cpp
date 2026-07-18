//Combination and Permutation
//Factorial --> n! = n*(n-1)*(n-2)*... 3*2*1
//          --> 5! = 5*4*3*2*1;

//n^Cr (n choose r comination) = n!/r!*(n-r)!
//n^Pr (permutation) = n!/(n-r)!

// #include<iostream>
// using namespace std;
// int combination(){
//     int n,r;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     int nfact = 1;
//     int rfact = 1;
//     int n_rfact = 1;
//     for(int i = 1;i<=n;i++){
//         nfact *=i;
//     }
//     for(int j = 1;j<=r;j++){
//         rfact *=j;
//     }
//     for(int k = 1;k<=(n-r);k++){
//         n_rfact *=k;
//     }
//     return nfact/(rfact*(n_rfact));
// }
// int permutation(){
//     int n,r;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     int nfact = 1;
//     int n_rfact = 1;
//     for(int i = 1;i<=n;i++){
//         nfact *=i;
//     }
   
//     for(int k = 1;k<=(n-r);k++){
//         n_rfact *=k;
//     }
//     return nfact/(n_rfact);
// }
// int main(){
//     cout<<combination()<<endl;;
//     cout<<permutation();
// }

// (OR)  Better way of doing above code 
#include<iostream>
using namespace std;
int fact(int x){
    int a = 1;
    for(int i  = 1;i<=x;i++){
        a *= i;
    }
    return a;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int nCr = nfact/(rfact*nrfact);
    int nPr = nfact/nrfact;
    cout<<"Combination: "<<nCr<<" Permutation: "<< nPr;
}