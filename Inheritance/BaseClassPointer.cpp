#include <iostream>
using namespace std;
class basiCar{
    public:
        void basiccar(){
            cout<<"\nTHIS IS TEH EXAMPLE OF AN BASIC CAAR";
        }
};
class advancedCar:public basiCar{
    public:
        void advancedcar(){
            cout<<"\nTHIS CAR IS PRETTY MUCH ADVANCED";
        }
};

int main() {
    advancedCar a;
    basiCar *b=&a;
    b->basiccar();
    //b->advancedcar();

    
    
    
    
    return 0;
}