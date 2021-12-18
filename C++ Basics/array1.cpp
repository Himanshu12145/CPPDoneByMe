#include<iostream>
using namespace std;
int main(){
    int n,a[500],max=0;
    cout<<"Enter the array the number of elements : ";
    cin>>n;
    cout<<"Enter the array elements :  \n";
    for(int i=0;i<n;i++){
       cout<<i<<"th element is : "; 
       cin>>a[i];
    }
   
    for (int i = 0; i < n; i++)
    {
      if (a[i]>a[i+1])
      {
          max=a[i];
      }
      
    }
    cout<<max;

    return(0);
}