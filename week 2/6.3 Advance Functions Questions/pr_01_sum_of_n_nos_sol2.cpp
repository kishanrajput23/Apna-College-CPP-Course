#include<iostream>
using namespace std;


int sum(int n) {
    int ans = n * (n+1) / 2;
    return ans;
}


int main() {
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
}