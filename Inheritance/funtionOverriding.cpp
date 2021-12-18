#include <iostream>
using namespace std;
class basiCar{
    public:
        virtual void show(){
            cout<<"\nTHIS IS THE EXAMPLE OF AN BASIC CAAR BASE CLASS";
        }
};
class advancedCar:public basiCar{
    public:
        void show(){
            cout<<"\nTHIS CAR IS PRETTY MUCH ADVANCED DERIVED CLASS";
        }
};

int main() {
    // basiCar b;
    // b.show();
    // advancedCar a;
    // a.basiCar::show();
    basiCar *p = new advancedCar();
    p->show();



    
    
    
    
    
    return 0;
}