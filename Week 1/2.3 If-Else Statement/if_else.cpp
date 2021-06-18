#include<iostream>
using namespace std;
int main() {
    int age;
    cin>>age;

    if(age >= 18) {
        cout<<"You are adult now!!"<<endl;
    }

    else {
        cout<<"You are a teenager"<<endl;
    }
    return 0;
}