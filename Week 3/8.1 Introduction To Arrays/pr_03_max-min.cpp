#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cin>>n;

    int array[n];

    for (int i=0; i<n; i++) {
        cin>>array[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i=0; i<n; i++) {
        maxNo = max(maxNo, array[i]);

        minNo = min(minNo, array[i]);
    }

    cout<<"Maximum Number is "<<maxNo<<endl;
    cout<<"Minimum Number is "<<minNo<<endl;

    return 0;
}