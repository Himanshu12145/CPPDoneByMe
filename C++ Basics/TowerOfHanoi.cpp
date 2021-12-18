#include<iostream>
using namespace std;
int i=0;
void TOH(int n,int A,int B,int C)
{
    if (n>0)
    {
        TOH(n-1,A,C,B);
        i++;
        cout<<"From "<<A<<" To "<<C;
        TOH(n-1,B,A,C);
    }
    
}
int main()
{
    TOH(16,1,2,3);
    cout<<i;
    return 0;
}

