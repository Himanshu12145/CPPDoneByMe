#include<iostream>
using namespace std;
int main()
{
    int rem=0,num,org,rev=0;
    cout<<"Enter the number : ";
    cin>>num;
    org=num;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    rem=0;
    
    while(rev>0)
    {
        rem=rev%10;
        rev/=10;
        switch (rem)
        {
        case 1:
            cout<<"One ";
            break;
        case 2:
            cout<<"Two ";
            break;
        case 3:
            cout<<"Three ";
            break;
        case 4:
            cout<<"Four ";
            break;
        case 5:
            cout<<"Five ";
            break;
        case 6:
            cout<<"Six ";
            break;
        case 7:
            cout<<"Seven ";
            break;
        case 8:
            cout<<"Eight ";
            break;
        case 9:
            cout<<"Nine ";
            break;
        case 0:
            cout<<"Zero ";
            break;
        default:
            cout<<"You have not entered an number Please enter it again its a request ";
            break;

        }

    }
    

    return 0;
}
