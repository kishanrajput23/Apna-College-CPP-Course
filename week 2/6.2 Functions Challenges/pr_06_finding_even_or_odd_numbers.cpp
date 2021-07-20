#include<iostream>
using namespace std;

bool evenOdd(int n) {
    if (n%2==0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin>>n;

    if (evenOdd(n)) {
        cout<<"Number is Even";
    }
    else {
        cout<<"Number is Odd";
    }
    return 0;
}