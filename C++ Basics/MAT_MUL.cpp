#include<iostream>
using namespace std;
int main()
{
    int mtx1[100],mtx2[100],result[100],r1,r2,r_result,c1,c2,c_result,i,j;
    cout<<"Enter the number of rows in matrix 1 : ";
    cin>>r1;
    cout<<"Enter the number of columns in matrix 1 : ";
    cin>>c1;
    cout<<"Enter the number of rows in matrix 2 : ";
    cin>>r2;
    cout<<"Enter the number of columns in matrix 2 : ";
    cin>>c2;
    if (c1!=r2)
    {
        cout<<"ERROR! here you have entered column in matrix 1 which donot match rows in matrix 2 so matrix multiplication is not possible Please re-enter :  ";
        return(0);
    }
    cout<<"Enter the elements of matrix 1: ";
    for ( i = 0; i <= r1; i++)
    {
        for ( j = 0; j <= c1; j++)
        {
            cin >> mtx1[i][j] ;
        }
        cout<<endl;
    }
    cout<<"Enter the elements of matrix 2:  ";
    for ( i = 0; i <= r2; i++)
    {
        for ( j = 0; j <= c2; j++)
        {
            cin >> mtx2[i][j] ;
        }
        cout<<endl;
    }
    //multiplication part
    for ( i = 0; i <= r1; i++)
    {
        for ( j = 0; j <= c2; i++)
           result[i][j] =0;
           for(int k=0;k<=c1;k++)
           {
                  result[i][j] += mtx1[i][k] * mtx2[k][j] ;
           }
    }
    cout<<"After the Multiplication of Matrix results are : \n";
    for ( i = 0; i <= r1; i++)
    {
        for ( j = 0; j <= c2; i++)
        {
            cout<< result[i][j] <<" ";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}

