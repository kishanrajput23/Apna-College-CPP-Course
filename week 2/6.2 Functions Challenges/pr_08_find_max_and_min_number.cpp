#include<iostream>
using namespace std;

int maxNum(int a, int b, int c) {
    if (a>b) {
        if (a>c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b>c) {
            return b;
        }
        else {
            return c;
        }
    }
}

int minNum(int a, int b, int c) {
    if (a<b) {
        if (a<c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if (b<c) {
            return b;
        }
        else {
            return c;
        }
    }
}

int main() {

    int a,b,c;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter third number"<<endl;
    cin>>c;

    int max_num = maxNum(a, b, c);
    int min_num = minNum(a, b, c);

    cout<<"The Maximum number is "<<max_num<<endl;
    cout<<"The Minumum number is "<<min_num<<endl;
    return 0;
}