#include<iostream>
using namespace std;
int main() {
    
    int a=1, b=3, c;
    c=b<<a;              // c=6 because in << operator c=b*(2^a)
    b=c*(b*(++a)--);     // b= 6(3*(2)--) 
    cout<<b<<endl;       // b=36
    return 0;

}