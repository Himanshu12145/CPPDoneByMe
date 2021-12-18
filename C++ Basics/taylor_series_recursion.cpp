#include<iostream>
using namespace std;
static double x,n;
double pow(double x){
    n=x;
    return (n,n-1)*n;
    cout<<x<<" "<<n;

    }
double fact(double x){
    n=x;
    return fact(n-1)*n;
    cout<<x<<" "<<n;

}
double exp(double x){
    return exp((pow(x)/fact(x))-1)+(pow(x)/fact(x));
    cout<<x<<" "<<n;
}

int main()
{
        cout<<x<<" "<<n;

  cout<<exp(156700);
    return 0;
}
