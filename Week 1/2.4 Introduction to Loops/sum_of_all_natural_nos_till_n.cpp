#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number till you want to print sum"<<endl;
    cin>>n;
    int sum=0;

    for(int i=0;i<=n;i++) {
        sum = sum + i;
    }
    cout<<"sum is "<<sum<<endl;

}