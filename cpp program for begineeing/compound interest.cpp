/*#include<iostream>
#include<math.h>

 using namespace std;

 int main()
 {
     int principle_amount,rate_of_interest,compound_interest,time_period;

     cout<<"Enter the principle amount  ::: ";
     cin>>principle_amount;

     cout<<"\nEnter the rate of interest ::: ";
     cin>>rate_of_interest;

     cout<<"\nEnter the time period ::";
     cin>>time_period;

     compound_interest=principle_amount*pow((1+rate_of_interest/100),time_period);

     cout<<"\nThe total interest of a compound is :: "<<compound_interest;
     return 0;
 }*/
 #include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ci;

    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"\nEnter Rate of Interest :: ";
    cin>>r;
    cout<<"\nEnter Time Period :: ";
    cin>>t;

    ci = p*pow((1+r/100),t);

    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";

    return 0;
}
