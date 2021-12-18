#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,org,remainder;
    cout<<"Enter the number : ";
    cin>>num;
    org=num;
    while (num>0)
    {
        remainder=num%10;
        rev=rev*10+remainder;
        num/=10;
    }
    cout<<"So your enterd number that is : "<<org<<" reverses as : "<<rev;
    return 0;
}
