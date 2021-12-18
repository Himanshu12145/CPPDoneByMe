#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter the number to be searched : "<<endl;
    cin>>m;
    int *ptr=new int[n];
    cout<<"Enter the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>ptr[i];
    }
    
    if (ptr==NULL)
    {
        /* code */
        cout<<"Memory underflow : ";
        return(0);
    }
    
    for (int i = 0; i < n; i++)
    {

        /* code */
        if (m==ptr[i])
        {
            /* code */
            cout<<"true";
            return(0);
        }
        
    }
    cout<<"false";
    

    return 0;
}
