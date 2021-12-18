#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Please enter the YEAR : ";
    cin>>year;
    if (year%4==0 || year%400==0)
    {
        cout<<"This year is leap year : ";
    }
    else
    {
        cout<<"It is not an leap year : ";
    }
    
    
    return 0;
}
