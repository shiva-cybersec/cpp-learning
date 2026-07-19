// Qn1. swapping elements inside array
// #include<iostream>
// using namespace std;
// int main(){
//     int num[26], temp;
//     num[0] = 100;
//     num[25] = 200;
//     temp = num[25];
//     num[25] = num[0];
//     num[0] = temp;
//     cout<<endl<<num[0]<<" "<<num[25]; //output: 200 100
// }


// Qn2. Point out the errors(if any) in the following code:

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(i = 1;i<=size;i++){
//         cin>>arr[i];
//         cout<<arr[i];
//     }
//     return 0;
// } 
//Answer: yes you forgot to type int in line 23




// Qn3. Calculate the sum of all the elements in the given array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    //Taking inputs
    int sum=0;
    cout<<"Enter "<<n<<" numbers of elements: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }

    //Printing sum of all the elements in the given array
    cout<<"Sum of all the elements is: "<<sum;
}


