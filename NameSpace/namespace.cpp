#include<iostream>
using namespace std ;

#define input cout
#define  from  <<
#define stop ;




namespace First
{
    void fun (){input from"This is the graph value for first function here\n\n\n\n " stop }
} // namespace First
namespace Second
{
    void fun(){input from "This is the graph value for second function here \n\n\n\n\n\n " stop}
} // namespace Second



using namespace First stop
int main()
{
    input from "From here fun () overloading started :  " stop 
    input from endl stop
    fun() stop
    fun() stop
    input from "The values for first and second are declared from here and just ends here : \n" stop
    return(0) stop 
}