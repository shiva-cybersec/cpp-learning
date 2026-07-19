// Qn1. Find the maximum value out of all the elements in the array

// #include<iostream>
// #include<climits> // for INT_MIN/INT_MAX (integer's lowest/highest value)
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;

//     int arr[n];

//     // Taking inputs
//     cout<<"Enter "<<n<<" number of inputs: ";
//     for(int i = 0; i < n; i++){
//         // Taking input for every index starting from 0
//         cin>>arr[i];
//     }

//     // int max = arr[0];  //#1
//     // Assume first element is maximum.
//     // For this method, loop should start from i = 1
//     // because arr[0] is already considered as max.

//     int max = INT_MIN;  //#2
//     // INT_MIN stores the smallest possible integer value.
//     // Initially assume maximum is the smallest value,
//     // then compare every array element with it.
//     // The first element (arr[0]) will automatically replace INT_MIN.

//     for(int i = 0; i < n; i++){
//         // For #1: start loop from i = 1
//         // For #2: start loop from i = 0 because all elements need comparison

//         if(max < arr[i])
//             max = arr[i];
//         // If current element is greater than max,
//         // update max with current element.
//     }
//     cout<<max<<" is the greatest of all elements.";
// }







// Qn2. Find the second largest element in the given Array.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];


    // Taking inputs
    cout << "Enter " << n << " number of inputs: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    // Find maximum element
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }


    // Find second maximum element
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];

        // Ignore maximum element,
        // then find the largest value among remaining elements
    }
    cout << max << " " << smax;

}