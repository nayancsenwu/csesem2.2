#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3,sum;
    float average;

    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    sum=num1+num2+num3;
    cout<<"The sum of the three number is :::  "<<sum;
    average=sum/3;

    cout<<"\nThe average of three number is :: "<<average;
    return 0;
}
