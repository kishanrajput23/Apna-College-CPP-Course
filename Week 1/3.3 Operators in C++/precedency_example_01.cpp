#include<iostream>
using namespace std;
int main() {
    int a=5;

    a=1,2,3;

    cout<<a<<endl;
    // Ans. a=1 beacuse Priority for the values assigned to any variable is given from left to right.
    return 0;
}