#include<iostream>
using namespace std;

int main()
{
    int inche,yard,feet,inches;

    cout<<"Enter inche that you want to convert :: ";
    cin>>inche;

    if(inche>36)
    {
        yard=inche /36;
        cout<<"\nYour given yard is ::"<<yard;
        inche=inche%36;
        feet=inche/12;
        cout<<"\nYour given feet is :: "<<feet;
        inches=inche%12;
        cout<<"\nYour given inches is :::: "<<inches<<"\n";
    }
cout<<"Final calculation is == "<<yard<<"  yard"<<"  "<<feet<<"   feet"<<"   "<<inches<<"   inches"<<"\n";
return 0;
}
