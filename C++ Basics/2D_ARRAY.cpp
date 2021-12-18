#include<iostream>
using namespace std;
int main()
{
    int a[500][500],m,n;
    cout<<"Enter the two dimention array elements having matrix as 3x3:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
        
    }
    cout<<"The array elemts that you have enterd is stored : \n";
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    


    return(0);
}