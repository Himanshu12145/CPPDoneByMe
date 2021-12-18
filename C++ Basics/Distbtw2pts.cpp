#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long d,x1,y1,z1,x2,y2,z2,kms,mtr;
    cout<<"Enter the 3 dimentional coordinates of two points respectively :\n";
    cout<<"point 1 = (";
    cin>>x1;
    cout<<",";
    cin>>y1;
    cout<<",";
    cin>>z1;
    cout<<")";
    cout<<"point 2 = (";
    cin>>x2;
    cout<<",";
    cin>>y2;
    cout<<",";
    cin>>z2;
    cout<<")";
    cout<<"\nSo the respective points are point 1 : ("<<x1<<","<<y1<<","<<z1<<") and point 2 :("<<x2<<","<<y2<<","<<z2<<")";
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    cout<<"\nThe distance between the two entered points that are ("<<x1<<","<<y1<<","<<z1<<") and ("<<x2<<","<<y2<<","<<z2<<") respectively is : ";
    if (d<1000)
    {
        cout<<d<<" metres";
    }
    else{
        kms=d/1000;
        mtr=d%1000;
        cout<<kms<<"kilometres and "<<mtr<<" metres";
    }
    
    return(0);
}