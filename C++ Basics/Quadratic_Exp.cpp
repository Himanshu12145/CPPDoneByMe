#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    /* code */
    float a,b,c,D,Xpos,Xneg;
    cout<<"Hello Welcome to QuadExp.cnn";
    cout<<"\nEnter the a , b , c respectively\n";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    cout<<"\nSo your respective value of D is:"<<D;
    Xpos=(-b+sqrt(D))/(2*a);
    Xneg=(-b-sqrt(D))/(2*a);
    if (D>0)
    {
    cout<<"\nNow your value for x are "<<Xpos<<" and "<<Xneg<<" respectively.  !!";
    }
    else if (D==0)
    {
        /* code */
    cout<<"\nAs your discriminant is coming to 0 then equal roots are there so "<<Xpos<<" and "<<Xneg<<" respectively !!";
    }
    
    else
    {
        cout<<"\nYour Quadratic equation root are imaginary so cannot find it out of scope!!";
    }
    
    










    return 0;
}
