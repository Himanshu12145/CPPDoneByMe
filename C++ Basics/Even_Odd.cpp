#include<iostream>
using namespace std;
int main()
{
    int x[10];
    cout<<"Enter the 10 number in an array :  ";
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cin>>x[i];
    }
    for (int i = 0; i < 10; i++)
    {
        /* code */
    
    
    if (x[i]%2==0)
    {
        /* code */
        cout<<" even is :"<<x[i]<<"\n\n";
    }
    else
    {
        cout<<"\t\t\t\t\t odd is : "<<x[i]<<endl;
    }

    }
    
    return 0;
}
