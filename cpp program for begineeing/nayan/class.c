#include<iostream>

using namespace std;

class persons
{
    str name,id,email,phone;
private:
    void inpute();
    void display();

};
void persons::input(void)
{
    cout<<"Enter your name :: ";
    cin>>name;
    cout<<"Enter your student id ::";
    cin>>id;
    cout<<"Enter your email id::";
    cin>>email;
    cout<<"Enter your phone number ::"
    cin>>phone;
}
void persons::display(void)
{
    cout<<"Name :  \n"<<name ;
    cout<<" ID :\n "<<id ;
    cout<<" Email :\n "<< email;
    cout<<"Phone Number : \n "<<phone ;
}
int main()
{
    persons obj;
    obj.input();
    obj.display();
    return 0;
}
