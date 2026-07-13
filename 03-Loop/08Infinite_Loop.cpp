//Infinite Loop - means i won't stop running = Reasons: forgot i++, improper condition, improper increment/decrement
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<20;) cout<<"i will run infinite times"<<endl;


    //or
    while('a'<'b') cout<<"i will run infinite times"<<endl;
}
