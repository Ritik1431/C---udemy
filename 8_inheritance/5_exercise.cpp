#include <iostream>
using namespace std;
class Employee
{
    private:
    int eid;
    string name;
    public:
    Employee(int e,string n)
    {
        eid = e;
        name = n;
    }
    int getId(){return eid;}
    string getName(){return name;}
};
class FulltimeEmployee:public Employee
{
    private:
    int salary;
    public:
    FulltimeEmployee(int e, string n,int sal):Employee(e,n)
    {
        salary = sal;
    }
    int getSalary(){return salary;}

};

class PartTimeEmployee:public Employee
{
    private:
    int wage;
    public:
    PartTimeEmployee(int e,string n,int w):Employee(e,n)
    {
        wage =w;
    }
    int getWage(){return wage;}
};
int main()
{
    PartTimeEmployee p1(7,"Ritik",1000);
    FulltimeEmployee p2(5,"Rajput",15000);

    cout<<"Name of employee is "<<p1.getName()<<" and Wage is "<<p1.getWage()<<endl;
    cout<<"Name of employee is "<<p2.getName()<<" and salary is "<<p2.getSalary()<<endl;

    return 0;
}