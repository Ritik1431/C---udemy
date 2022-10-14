#include <iostream>
using namespace std;
class student
{
    public:
    int rollno;
    static int addmNo;
    student()
    {
        addmNo++;
        rollno = addmNo;
    }
};

int student::addmNo=0;

int main()
{
    student s1;
    student s2;
    cout<<student::addmNo<<endl;
    cout<<s1.rollno<<endl;
    cout<<s2.rollno<<endl;

    return 0;
}
