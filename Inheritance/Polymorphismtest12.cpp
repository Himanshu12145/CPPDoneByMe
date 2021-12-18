#include<iostream>
using namespace std;
class shape{
    public:
    virtual float area ()=0;
    virtual float perimeter()=0;
};
class rectangle : public shape
{
    float length, breadth;
    public:
    rectangle(float length=0,float breadth=0){
        this->length=length;
        this->breadth=breadth;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};
class circle : public shape
{
    float radius;
    public:
    circle(float radius){
        this->radius=radius;
    }

    float area()
    {
        return 3.14 * radius * radius ;
    }
    float perimeter()
    {
        return 6.28*radius;
    }
};
int main()
{
    shape *r=new rectangle(10,56);
    cout<<"area of rectangle having r.length and r.breath : "<<r->area()<<endl;
    cout<<"perimeter of the rectangle is : "<<r->perimeter();
    shape *c = new circle(13);
    cout<<"\narea of circle =  "<<c->area()<<endl;
    cout<<"perimeter of circle = "<<c->perimeter()<<endl;



   // circle c;
    
   
    
    return(0);
}