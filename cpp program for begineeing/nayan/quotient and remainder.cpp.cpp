#include <iostream>
using namespace std;
int main()
{
    int divisor,divident,quotient,remainder;

    cout<<"Enter divident :";
    cin>>divident;
    cout<<"Enter divisor : ";
    cin>>divisor;
    if(divident>divisor){
    quotient=divident/divisor;
    cout<<"The remain quotient is :"<<quotient;
    remainder=divident % divisor;
    cout<<"\nThe remain remainder is :"<<remainder;}
    else{
        cout<<"Your input is not correct ";
    }

    return 0;

}
