#include<iostream>
using namespace std;
int main()
{
    int num1,num2;

    cout<<"Enter the the first number : ";
    cin>>num1;
    cout<<"\nThe first number is     A= "<<num1;
    cout<<"\nEnter second number :";
    cin>>num2;
    cout<<"\nThe second number is  B= "<<num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"\nAfter swaping the number is \nA="<<num1<<"\nB= "<<num2;
}
