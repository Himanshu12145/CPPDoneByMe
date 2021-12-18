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
    int l=0,h=n-1,temp=0;
    while(l<=h)
    {
        if (arr[l]<0)
        {
           l++;
        }
        else if(arr[l]>=0)
        {
             temp=arr[l];
            arr[l]=arr[h];
            arr[h]=temp;
            h--;
        }
    
        
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    









    return 0;
}