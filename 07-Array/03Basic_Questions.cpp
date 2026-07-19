// Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [ roll number here refers to the index of the array.]

#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter no. of students: ";
    cin>>n;
   int marks[n];

   //Taking input marks
   cout<<"Enter marks of "<<n<<" number of students: ";
   for(int i = 0; i < n;i++){
    cin>>marks[i];
   }

   //Printing output after validating
   cout<<"Students who scored less than 35 are roll numbers: ";
   for(int i = 0;i < n;i++){
    if(marks[i]<35) cout<<i+1<<" ";
   }
}



// Ques: Are the following array declarations correct?

// #include<iostream>
// using namespace std;
// int main(){
//     int a(25);                 // Incorrect ❌ creates normal int variable with value 25, use int a[25] for array

//     int size = 10, b[size];    // Incorrect ❌ in standard C++, array size must be constant, use const int size = 10

//     int c = {0,1,2};           // Incorrect ❌ normal int stores only one value, use int c[3] = {0,1,2}

// }


// // Ques: Which element of the array does this expression reference?

// num[4];     // It references the element at index 4 (5th element because indexing starts from 0)