//Qn1. Print number from 1 to 100
// #include <iostream>
// using namespace std;

// int main() {
//     int i;

//     for (i = 1; i <= 100; i++) {
//         cout << i << " ";
//     }
//     return 0;
// }


//Qn2. Print all the even numbers from 1 - 100
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2==0) cout<<i<<" ";
//     }
//     return 0;
// }


//Qn3. Print all the odd numbers from 1 - 100
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%2!=0) cout<<i<<" ";
//     }
//     return 0;
// }


//Qn4. Print the table of 19
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=0;i<=10;i++){
//         cout<<19<<" x "<<i<<" = "<< 19*i<<endl;
//     }
//     return 0;
// }

//Qn5. Take input from user anynumber then print the table of that number.
#include <iostream>
using namespace std;
int main(){
    int i,usernumber;
    cout<<"Enter the number you want the table of: ";
    cin>>usernumber;
    for(i=0;i<=10;i++){
        cout<<usernumber<<" x "<<i<<" = "<<usernumber * i<<endl;
    }
    return 0;
}

