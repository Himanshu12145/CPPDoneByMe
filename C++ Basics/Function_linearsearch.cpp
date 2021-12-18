#include<iostream>
using namespace std;


int linearSearch(int a[],int n,int key){

 for (int i = 0; i < n; i++)
    {
        if (key==a[i])
        {
            
            return(i);
        }
        
        
        
    }
            return(-1);
        
}
int main(){
    int n,a[500],key,loc;
    cout<<"Enter the array the number of elements : ";
    cin>>n;
    cout<<"Enter the array elements :  \n";
    for(int i=0;i<n;i++)
    {
       cout<<i<<"th element is : "; 
       cin>>a[i];
    }
    cout<<"Enter the number to be searched here : ";
    cin>>key;
   
    loc=linearSearch( a , n, key);
    if(loc>=0)
        cout<<"Number found at : "<<loc<<" th position in the array .";
    else
        cout<<"Number donot exist in the array : ";
    return(0);
}