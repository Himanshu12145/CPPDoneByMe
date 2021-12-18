#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n=0,rem=0;
	cin>>n;
	long long *arr=new long long[n];	

	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
	    long long number=0,sum=0;
	    
	    number=arr[i];
	         while(arr[i]!=0){
	              rem=arr[i]%10;
	              sum=sum*10+rem;
	              arr[i]/=10;
	    }
	    arr[i]=sum;
	    cout<<endl<<sum;
	    sum=0;
	}	for(int i=0;i<n;i++)
	{
	    cout<<endl<<arr[i]<<endl;
	}
    delete[] arr;
    arr=nullptr;
	
	
	return 0;
}