#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int temp=0;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	        if(arr[i]>arr[j])
	         {
	             temp=arr[i];
	             arr[i]=arr[j];
	             arr[j]=temp;
	          }
	    
	}
	cout<<arr[n-2];

	
	return 0;
}
