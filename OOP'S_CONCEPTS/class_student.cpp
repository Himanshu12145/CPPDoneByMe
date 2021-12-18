#include<iostream>
using namespace std;
class student
{
    private:
        int rollno;
        string name;
        float m1,m2,m3;

    public:
        student();
        void setCredentials(int , string,float,float,float);
        float totalMarks(float ,float ,float);
        char grade(float);
        ~student();
};
void student::setCredentials(int rollno,string name,float m1,float m2,float m3)
{
        this->rollno=rollno;
        this->name=name;
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
}
float student::totalMarks(float m1,float m2,float m3)
{
        float total,average;
        total=m1+m2+m3;
        average=total/3;
            return average;
}
char student::grade(float average){
    if (average>80)
    {
        return 'A';
    }
    else if(average<=80 && average>60)
    {
        return 'B';
    }
    else if (average<=60 && average>40)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}
student::student()
{
    rollno=1901106294;
    name="Enter the name :";
    m1=0;
    m2=0;
    m3=0;
}

student::~student()
{
}

int main(){

    int rollno;
    string name;
    char grade;
    float m1,m2,m3,average;
    student s;
    cout<<"Enter the roll_number of the student :  ";
    cin>>rollno;
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the (3)marks obtained in the subjects respectively :\n";
    cin>>m1;
    cin>>m2;
    cin>>m3;
    s.setCredentials( rollno, name, m1, m2,m3);
    average=s.totalMarks(m1,m2,m3);
    cout<<"Student's average marks is : "<<average<<endl;
    grade=s.grade(average);
    cout<<"The grade obtained is : "<<grade;
    return(0);

}
