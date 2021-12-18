#include<iostream>
using namespace std;
int main()
{
    int k,n;
    cin>>k;
    cin>>n;
    int *arr= new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;   
            }   
        }
    }
    cout<<"largest: "<<arr[n-k]<<endl<<"smallest : "<<arr[k]<<endl;
    
    
    return 0;
}
