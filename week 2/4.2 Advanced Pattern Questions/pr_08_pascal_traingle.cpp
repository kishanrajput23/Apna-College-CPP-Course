#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int coef=1;

    for(int i=0; i<n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<<" ";
        }
        for (int k=0; k<=i; k++) {
            if (k==0 || i==0) {
                coef=1;
            }
            else {
                coef = coef * (i-k+1) / k;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }
    return 0;
}