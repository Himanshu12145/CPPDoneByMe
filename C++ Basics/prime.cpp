#include<iostream>
using namespace std;
int main()
{
    long n,flag=0;
    cout<<"Enter the number for calculating weather it is a prime number or not : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if ( n%i==0 )
        {
            flag++;
        }
        else
        {
            continue;
        }
        
        
    }
    if (flag==2)
    {
        cout<<"\n Prime number :";
    }
    else
    {
        cout<<"\nNot a is Prime number :";
    }
    
    
    
    return 0;
}
