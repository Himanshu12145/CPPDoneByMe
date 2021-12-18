#include<iostream>
using namespace std;
int main(){
    int n,a[500],temp=0;
    cout<<"Enter the array the number of elements : ";
    cin>>n;
    cout<<"Enter the array elements :  \n";
    for(int i=0;i<n;i++){
       cout<<i<<"th element is : "; 
       cin>>a[i];
    }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > i ; j++)
        {
             if (a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;

             }
            
        }
        
     
      
    }
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<endl;
    }

    return(0);
}