#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    cin>>x>>y;

    if(x==y) {
        cout<<"Both numbers are equal"<<endl;
    }
    else if (x>y) {
        cout<<"X is greater than Y"<<endl;
    }
    else {
        cout<<"Y is greater than X"<<endl;
    }
    return 0;
}