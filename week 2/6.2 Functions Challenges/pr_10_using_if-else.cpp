#include<iostream>
using namespace std;

bool isEligible(int age) {
    if (age>= 18) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;

    if (isEligible(age)) {
        cout<<"You are eligible for voting";
    }
    else {
        cout<<"You are not eligible for voting";
    }
    return 0;
}