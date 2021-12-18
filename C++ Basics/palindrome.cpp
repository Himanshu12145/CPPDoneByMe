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
    if(rev==org){
        cout<<"The number entered is palindrome :\n";
    }else{
        cout<<"The number that you have enetred is not palindrome";
    }
    return 0;
}
