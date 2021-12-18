#include<iostream>
using namespace std;
int main()
{
    int search,n,count=0;
    cin>>search;
    cin>>n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (search==arr[i])
        {
            count++;
        }
        
    }
    cout<<count;
    
     return 0;




}