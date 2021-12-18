#include<iostream>
using namespace std;
int main(){
    int n,a[500],key,l,h,mid;
    cout<<"Enter the array the number of elements : ";
    cin>>n;
    cout<<"Enter the array elements (in sorted way : ):  \n";
    for(int i=0;i<n;i++){
       cout<<i<<"th element is : "; 
       cin>>a[i];
    }
    cout<<"Enter the array to be searched here : ";
    cin>>key;
    l=0;
    h=n-1;



    while ( l <= h )
    {
      mid=(l+h)/2;
      if (key==a[mid])
      {
        cout<<"Element found at : "<<mid;
        return(0);
      }
      

      else if (key>a[mid])
      {
        l=mid+1;
        
      }
      else 
      {
        h=mid-1;
      }
      
    }
    cout<<"Element not found :";
    

    return(0);
}