#include<iostream>
using namespace std;

bool isAplphabet(char ch) {
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z') {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if (isAplphabet(ch)) {
        cout<<ch<<" is an alphabet";
    }
    else {
        cout<<ch<<" is not an alphabet";
    }

    return 0;
}