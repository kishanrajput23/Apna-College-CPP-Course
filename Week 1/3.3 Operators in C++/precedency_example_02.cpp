#include<iostream>
using namespace std;
int main() {
    int a;
    a=(1,2,3);
    cout<<a<<endl; // a=3 because Priority for the values inside a brackets () assigned to any variable is given from right to left
    return 0;
}