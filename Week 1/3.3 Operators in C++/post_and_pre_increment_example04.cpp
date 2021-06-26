#include<iostream>
using namespace std;
int main() {
    int i=1, j=2, k=3;
        // 1      2    3
    int m = i-- - j-- - k--;

    cout<<i<<endl;     //0
    cout<<j<<endl;     //1
    cout<<k<<endl;     //2
    cout<<m<<endl;     //-4

    return 0;
}