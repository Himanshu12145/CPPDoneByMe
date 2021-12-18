#include<iostream>
using namespace std;
class employees
{
    private:
        int employee_id;
        string name;
    public: 


        employees(int employee_id=0, string name="Enter your name:")
        {

            if (employee_id>0)
            {
                this->employee_id=employee_id;
                this->name=name;   
            
            }
            else
            {
                employee_id=0;
                name="\nMust enter a name : \n";
            
            }
            
            
        }


        void setName(string name)
        {
            this->name=name;
        }
        void set_id(int employee_id)
        {
            this->employee_id=employee_id;
        }

        string getName()
        {   return name;}
        int get_id()
        {   return employee_id;}

        ~employees()
        {
            cout<<"\nDestructor of class employee : executed "<<endl;
        }



};
class fullEmployees:public employees
{
private:
    int salary;
public:
    fullEmployees(int employee_id ,string name ,int salary=0):employees(employee_id,name)
    {
        if(salary>0)
            this->salary=salary;
        else
            salary=0;
    }
    int getsalary()
    {
        return salary;
    }
    

    
    ~fullEmployees()
    {
        cout<<"\n Destructor of class full_employees : \n";
    }
};
class partTimeEmployee:public employees
{
    private:
        int Wages;
    public:
        partTimeEmployee(int employee_id,string name ,int Wages=0):employees(employee_id,name)
        {
            this->Wages=Wages;

        } 
    int  getWages(){return Wages;}
};

int main()
{
    // fullEmployees e;
    //  employees *ptr=&e;
    //  ptr->set_id();




    fullEmployees f(190110383,"himanshu shekhar sahoo ",2344);
    cout<<"Salary of "<<f.getName()<<" is "<<f.getsalary()<<" having employee_id : "<<f.get_id()<<endl;
    partTimeEmployee p(190110237,"rajan ",234);
    cout<<"\n\n\nSalary of "<<p.getName()<<" is "<<p.getWages()<<" having employee_id : "<<p.get_id();
    fullEmployees f1(1837908,"shri ramlal yadav ",2344);
    cout<<"\n\n\n\tSalary of "<<f1.getName()<<" is "<<f1.getsalary()<<" having employee_id : "<<f1.get_id()<<endl;
//chainging id of ramlal
    f1.set_id(23144);
//chsinging the values of name for ramlal setting it ramlal ji:
    f1.setName("RAM LAL JI here");

    cout<<"\n\n\n\n\n\n\nHere we have changed the employee id of ram lal is the member of baseClass directly from childClass as from here \n\n\n\n\n\n\n"<<f1.get_id()<<endl;
    cout<<"\n\n\n\tSalary of "<<f1.getName()<<" is "<<f1.getsalary()<<" having employee_id : "<<f1.get_id()<<endl;

    return(0);
}