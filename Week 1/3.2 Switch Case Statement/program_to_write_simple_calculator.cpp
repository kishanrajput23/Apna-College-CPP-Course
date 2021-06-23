#include<iostream>
using namespace std;
int main() {
    int a,b;
    char op;

    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    cout<<"Enter a opeator"<<endl;
    cin>>op;
    
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;

    case '-':
    cout<<a-b<<endl;
    break;

    case '*':
    cout<<a*b<<endl;
    break;

    case '/':
    cout<<a/b<<endl;
    break;

    default:
    cout<<"Please enter a suitable operator"<<endl;
    break;
    }
    return 0;
}
