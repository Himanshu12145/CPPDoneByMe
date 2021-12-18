#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        for (int j=i+1; j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
        
    }
    
        cout<<arr[n-1]-arr[0];
    
    
    
    
}