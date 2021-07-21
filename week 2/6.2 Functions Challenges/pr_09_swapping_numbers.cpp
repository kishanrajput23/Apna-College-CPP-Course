#include<iostream>
using namespace std;

void swap(int ,int );
/*Swapping of Two Numbers in C++ Using Functions Call by Value*/
int main()
{
    int a,b;
    cout<<"Enter the Two Numbers to Swap in C++: ";
    cin>>a>>b;
    cout<<"\nAfter Swapping of Two Numbers:";
    swap(a,b);
    
    return 0;
}
void swap(int x,int y)
{
 int z;
/*Extra variable for storing the value of first or second variable*/ 
 
 z=x;
/*Copying the first variable value to the tempriory variable*/
 x=y;
/*Copying the second variable value to the first variable*/
 y=z;
/*Copying the tempriory variable value to the second variable*/ 
 cout<<" "<<x<<"   "<<y;
 
}