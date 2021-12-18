#include<iostream>
using namespace std;
int main()
{
    int num,rem=0,org,arm=0;
    cout<<"Enter the number :";
    cin>>num;
    org=num;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        arm+=rem*rem*rem;
    }
    if (arm==org)
    {
        cout<<"The entered number is an armstrong number :";
    }
    else
    {
        cout<<"No armstrong :";
    }
    
    
    
    return(0);
}