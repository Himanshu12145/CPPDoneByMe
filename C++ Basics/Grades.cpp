#include<iostream>
typedef float marks;
using namespace std;

int main()
{
    marks m1,m2,m3;
    float avg,tot;
    cout<<"Please entre your marks in respective subjects (out of 100) : ";
    cin>>m1;
    cin>>m2;
    cin>>m3; 
    tot=m1+m2+m3;
    avg=tot/3;
    cout<<"SO your total is : "<<tot;
    if (avg>60)
    {
        cout<<"\nYour academics shows : EXCELLENT\n";
    }
    else if (avg<=60 && avg>=35)
    {
        cout<<"Your academics shows : GOOD \n";
    }
    else if(avg<35)
    {
        cout<<"Your academics shows : POOR MUST IMPROVE IT !!";
    }

    return 0;
}
