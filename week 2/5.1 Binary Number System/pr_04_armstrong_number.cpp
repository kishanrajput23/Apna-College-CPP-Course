#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int sum = 0;
    int org_sum = n;

    while(n>0) {
        int rem = n % 10;

        sum = sum + rem * rem * rem;

        n = n / 10;
    }
    if (org_sum == sum) {
        cout<<"The number is an armstrong number.";
    }
    else {
        cout<<"The number is not an armstrong number.";
    }
    return 0;
}