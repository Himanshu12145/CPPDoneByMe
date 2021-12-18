#include<iostream>
using namespace std;
int main(){
    /* code */
    float totalAmount,billAmonut;
    cout<<"Enter the total amount PLEASE !!" <<endl;
    cin>>totalAmount;
    if (totalAmount<100)
    {
        /* code */
        cout<<"Their is no discount for you :";
        cout<<"\nPayment to be done on BILLDESK is : "<<totalAmount;

    }
    else if (totalAmount>=100 && totalAmount<500)
    {
        /* code */
        billAmonut=totalAmount*0.1;
        cout<<"Discount applied is : 10% only so amount discounted : "<<billAmonut;
        cout<<"\nPayment to be done on BILLDESK is : "<<totalAmount-billAmonut;

    }
    else if (totalAmount>=500)
    {
        /* code */
        billAmonut=totalAmount*0.2;
        cout<<"Discount applied is : 20% only "<<billAmonut;
        cout<<"\nPayment to be done on BILLDESK is : "<<totalAmount-billAmonut;

    }
    
    
    
    return 0;
}
