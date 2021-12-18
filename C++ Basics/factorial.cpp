#include<iostream>
using namespace std;
int main()
{
    int n,f;
    cout<<"Enter the number for finding the factorial :\n";
    cin>>n;
    f=1;
    for (; n>0 ;n--)
    {
        f=f*n;
        
    }
    cout<<f;
    return 0;
}
