#include<iostream>
using namespace  std;

int main() {

    int n;
    cout << "Enter the number to determine its factors : " << endl;
    cin>>n;

    cout<<"The factors are :"<<endl;

    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            cout<<i<<endl;
        }
        else {
            continue;
        }
    }
    return 0;
}
