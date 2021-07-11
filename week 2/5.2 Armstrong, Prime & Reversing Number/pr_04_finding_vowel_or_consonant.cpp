#include<iostream>
using namespace std;

int main() {

    char c;

    cout<<"Enter any character "<<endl;
    
    cin>>c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout<<c<<" is vowel";
    } 
    else {
        cout<<c<<" is consonant";
    }
    return 0;
}