#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the array elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        
        }
    }
    cout<<"Max is : "<<max<<endl;
    for (int i = 1; i < n; i++)
    {
    
         if (arr[i]<min)
        {
            min=arr[i];
        }
        
    
    }
    cout<<"Min is : "<<min;
   

    
    
}
