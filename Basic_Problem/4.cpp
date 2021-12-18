#include<iostream>
using namespace std;
int main()
{
    int n,length=0,temp=0;
    cout<<"Enter the array number :\n ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elemnts : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        length++;
    }
    length--;
    for (int i = length,j=0; j<=(length)/2; i--,j++)
    {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        
    }
    for (int i = 0; i < length+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    

    
    
    
    
    
    
    return 0;
}