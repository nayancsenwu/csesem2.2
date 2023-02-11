#include<iostream>
using namespace std;

int main()
{
    int i,num;

    cout<<"generating random number bellow :: \n\n ";
    for(i=1;i<=10;i++)
    {
        num=rand()%100;
        cout<<" "<<num<<" ";
    }
    cout<<"\n";
    return 0;

}
