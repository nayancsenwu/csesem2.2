#include<iostream>

using namespace std;

#define CUBE(x) (x*x*x)
int main()
{
    int n,cube;
    cout<<"enter a positive integer number :: ";
    cin>>n;
    cube=CUBE(n);

    cout<<"\nThe quebic number is ::  "<<cube;
    return 0;
}
