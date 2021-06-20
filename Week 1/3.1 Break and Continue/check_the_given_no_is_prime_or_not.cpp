#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i;
    for(i=2; i<n; i++) {
        if (n%i==0) {
            cout<<"the number is not prime"<<endl;
            break;
        }
    }
    if (i==n) {
        cout<<"the number is prime"<<endl;
    }
    return 0;
}