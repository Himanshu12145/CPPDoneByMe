#include<iostream>
using  namespace std;
int main()
{
    int num;
    cout<<"Enter the number of which you  wanted to have the date ( 1 - 7 ) : ";
    cin>>num;
    if(num==1)
    {
        cout<<"Its a Sunday :";

    }
    else if (num==2)
    {
        /* code */
        cout<<"Its a Monday ";
    }
    else if (num==3)
    {
        /* code */
        cout<<"Its a Tuesday ";
    }
    else if (num==4)
    {
        /* code */
        cout<<"Its a Wednesday ";
    }
    else if (num==5)
    {
        /* code */
        cout<<"Its a Thursday ";
    }
    else if (num==6)
    {
        /* code */
        cout<<"Its a Friday "; 
    }
    else if (num==7)
    {
        /* code */
        cout<<"Its a Saturday ";
    }
    else
    {
        cout<<"You have entered an wrong number :\\////";
    }


    return 0;
}
