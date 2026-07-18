// Qn1. Write a function to print squares of n natural numbers.
// #include<iostream>
// using namespace std;
// int squares(int x){
//     return x*x;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//     cout<<squares(i)<<" ";
//     }
// }

//OR
// #include <bits/stdc++.h>
// using namepsace std
// int square(int num) {
// return num * num;
// }
// void firstNSquares(int n) {
// for(int i = 1; i <= n; ++i) {
// cout << i << " " << square(i) << endl;
// }
// }
// int main() {
// int n;
// cin >> n;
// firstNSquares(n);
// return 0;
// }



//Qn2. Write a function to take the radius of a circle as an argument and return its area.
// #include <iostream>
// using namespace std;
// int areaofcircle(int r){
//     return 3.14*r*r;
// }
// int main(){
//     int r;
//     cout<<"Enter radius of a circle: ";
//     cin>>r;
//     cout<<"Area of circle is : "<<areaofcircle(r);
// }


//Qn3. Given two numbers a and b, write a function to print all the odd numbers between them.
// #include <iostream>
// using namespace std;

// int printOddNum(int x, int y){
//     if(x>y) printOddNum(y,x);
//    {
//     for(int i = x;i<y;i++){
//         if(i%2!=0) cout<< i<<" ";
//     }
// }}
// int main(){
//     int a,b;
//     cout<<"Enter 2 numbers: ";
//     cin>>a>>b;
//     printOddNum(a,b);
// }


//OR
// #include <bits/stdc++.h>
// using namespace std;
// void printOddNumbers(int a, int b) {
// if(a > b) {
// printOddNumbers(b, a);
// return;
// }
// for(int i = a; i <= b; ++i) {
// if(i % 2 != 0) {
// cout << i << " ";
// }
// }
// cout << endl;
// }
// int main() {
// int a, b;
// cin >> a >> b;
// printOddNumbers(a, b);
// return 0;
// }



//Qn4. Write a function to count the number of digits in a number and then print the square of this number.
// #include<iostream>
// using namespace std;
// int count(int x){
//     int count = 0;
//     while(x!=0){
//         count++;
//        x= x/10;
//     }
//     return count;
// }
// int square(int x){
//     return x*x;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Total number of digits "<<count(n)<<" "<<"Sqaure of the digit is "<<square(count(n));

// }


//OR
// #include <bits/stdc++.h>
// using namespace std;
// int square(int n) {
// return n * n;
// }
// int countNumberOfDigits(int num) {
// int ans = 0;
// while(num > 0) {
// ans++;
// num /= 10;
// }
// return ans;
// }
// int main() {
// int num;
// cin >> num;
// int numberOfDigits = countNumberOfDigits(num);
// cout << square(numberOfDigits) << endl;
// return 0;
// }


//Qn5. The minimum number of functions in any c++ program is: 
// Solution: 1 (that is main function itself)


//Qn6. State True or False;
// A function may be called more than once from any other function.
// Solution: A function can have a void return type, which means return nothing. Although it has to be clearly specified that the function is of void return type.


//Qn7. Can the same function name be used for different functions without any conflict?
// Solution: The same function name can be used for different functions without any conflict if and only if they either have different data types for arguments or different number of arguments. Same function names cannot be used if functions differ only by their return type because the compiler would not then know which function is to be used.