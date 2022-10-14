#include <iostream>
using namespace std;
class car
{
    public:
    virtual void display()
{
    cout<<"car started"<<endl;

}

};
class innova:public car
{
    public:
    void display()
{
    cout<<"innova started"<<endl;

}

};
class swift:public car
{
    public:
    void display()
{
    cout<<"Swift started"<<endl;

}

};
int main()
{
    car *p = new innova;
    p->display();
    p = new swift();
    p->display();
    return 0;
}