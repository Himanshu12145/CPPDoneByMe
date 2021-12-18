#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number for calculating the factors : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if ( n%i==0 )
        {
            cout<<i<<" is a factor of "<<n<<endl;
            sum += i;
        }
        else
        {
            continue;
        }
        
        
    }
    cout<<"The sum of the factors are : "<<sum;
    if (sum==(2*n))
    {
        cout<<"\nThe number that you have entered is sure sort a perfect number : "<<n;
    }
    else
    {
        cout<<"\nHere the number that you have entered is not a  perfect number Please enter it again !! "; 
    }
    
    
    
    return 0;
}
