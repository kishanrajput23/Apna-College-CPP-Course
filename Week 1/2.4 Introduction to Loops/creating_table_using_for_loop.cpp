#include<iostream>
using namespace std;
int main() {
    int k;
    cout<<"Enter the number you want to create a table"<<endl;
    cin>>k; 
    for(int i=1;i<=10;i++) {
        cout<<k<<" x"<<" "<<i<<" ="<<" "<<k*i<<endl;
    }
    return 0;
}