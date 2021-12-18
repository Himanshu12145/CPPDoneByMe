#include<iostream>
using namespace std;
int main(){
    int n,a[500],num,f=0;
    cout<<"Enter the array the number of elements : ";
    cin>>n;
    cout<<"Enter the array elements :  \n";
    for(int i=0;i<n;i++)
    {
       cout<<i<<"th element is : "; 
       cin>>a[i];
    }
    cout<<"Enter the number to be searched here : ";
    cin>>num;
   
    for (int i = 0; i < n; i++)
    {
        if (num==a[i])
        {
            cout<<"Number found at : "<<i<<" th position in the array .";
            f=1;
        }
      
    }
        if(f==0)
        {
            cout<<"Number donot exist in the array : ";
        }
        
    
    return(0);
}