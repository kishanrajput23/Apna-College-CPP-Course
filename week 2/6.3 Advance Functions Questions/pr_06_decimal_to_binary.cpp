#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
    int x=1;
    int ans=0;

    while (x<=n)
        x *= 2;
    x/=2;

    
    while (x>0) {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit; 
    }
    return ans;
}

int main() {
    int n;
    
    cin>>n;

    cout<<decimalToBinary(n)<<endl;
}