#include<iostream>
using namespace std;
int main() {
    char alphabet;

    cout<<"Enter an alphabet"<<endl;
    cin>>alphabet;
    
    switch (alphabet)
    {
    case 'a':
        cout<<"It is a vowel"<<endl;
        break;

    case 'e':
    cout<<"It is a vowel"<<endl;
    break;

    case 'i':
    cout<<"It is a vowel"<<endl;
    break;

    case 'o':
    cout<<"It is a vowel"<<endl;
    break;

    case 'u':
    cout<<"It is a vowel"<<endl;
    break;

    default:
    cout<<"It is a consonant"<<endl;
    break;
    }
    return 0;
}
