#include <iostream>
using namespace std;
class demo
{
    public:
    int a =10;
    int b =20;

    void display() const //   we can write const after a function
                         //   to restrict a function to modify data member.
    {
        // a++;    we can't modify
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    demo d;
    d.display();
    return 0;
}