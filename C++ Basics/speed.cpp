#include<iostream>
using namespace std;
int main()
{
    double u,v,a,speed;
    cout<<"Enter your initial velocity(u in m/s) , final velocity(v in m/s) , acceleration[a m/(s*s)] respectively\n";
    cin>>u>>v>>a;
    speed=(u*u-v*v)/(2*a);
    cout<<"So your speed is equal to : "<<speed<<" m/(s*s)";
    
    return 0;
}
