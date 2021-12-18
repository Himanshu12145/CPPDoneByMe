#include<iostream>
using namespace std;
class rationalNumbers
{
private:
        
        int p;
        int q; 
    
public:
    rationalNumbers(int,int);
    rationalNumbers operator+(rationalNumbers r)
    {

        rationalNumbers z;
        z.p = this->p*r.q + this->q*r.p;
        z.q = this->q*r.q ;
        return z;
    }
    friend ostream & operator<<(ostream &out,rationalNumbers &r);
  

};
ostream & operator<<(ostream &out,rationalNumbers &r)
{
    out<<r.p<<"/"<<r.q;
    return out;
}

rationalNumbers::rationalNumbers(int p=0,int q=0)
{
    this->p=p;
    this->q=q;
}


int main()
{
    rationalNumbers r1(3,4),r2(5,6),r3;
    r3=r1+r2;
    cout<<r3<<endl;
    

    return(0);
}