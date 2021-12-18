#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number for calculating the factors : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if ( n%i==0 )
        {
            cout<<i<<" is a factor of "<<n<<endl;
        }
        else
        {
            continue;
        }
        
        
    }
    
    return 0;
}
