#include <bits/stdc++.h>
using namespace std;

int decimalToOctal(int n) {
    int x=1;
    int ans=0;

    while (x<=n)
        x *= 8;
    x/=8;

    
    while (x>0) {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit; 
    }
    return ans;
}

int main() {
    int n;
    
    cin>>n;

    cout<<decimalToOctal(n)<<endl;
}