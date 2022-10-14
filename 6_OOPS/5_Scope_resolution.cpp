#include <iostream>
using namespace std;


class Employee
{
    public:
    int Id;
    void SetId(int a)
    {
        Id = a;
    }

    int GetId();
    
    
};

int Employee::GetId(){
    cout<<Id<<endl;
    return Id;
}
int main()
{
    Employee e;
    e.SetId(5);
    e.GetId();
}
    