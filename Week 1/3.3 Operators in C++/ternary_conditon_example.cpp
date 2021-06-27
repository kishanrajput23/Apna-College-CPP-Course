#include<iostream>
using namespace std;
int main() {
    int a=4;
    int b=5;
    int c = a>b? a-b:b-a;

    cout<<c<<endl;    //c=1

    return 0;
}