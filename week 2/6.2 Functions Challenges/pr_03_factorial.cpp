#include<iostream>
using namespace std;

int fact(int num) {
    int factorial = 1;
    for (int i=1; i<=num; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {

    int num;
    cin>>num;

    int ans = fact(num);

    cout<<ans;
    return 0;
}