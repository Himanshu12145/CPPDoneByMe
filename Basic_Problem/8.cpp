#include<iostream>
using namespace std;
int main()
{
    int n,m=0,l=0,h=0;
    cin>>n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    m=l=0;
    h=n-1;
    int temp=0;
    while (m<=h)
    {
        if (arr[m]==0)
        {
        
        temp=arr[m];
        arr[m]=arr[l];
        arr[l]=temp;
        m++;
        l++;
        
        } 
      else if (arr[m]==1)
      {
        m++;
      }
      
       else if(arr[m]==2) 
      {
          
        temp=arr[h];
        arr[h]=arr[m];
        arr[m]=temp;
        h--;
      } 
       
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}