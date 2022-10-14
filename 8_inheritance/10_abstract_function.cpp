#include <iostream>
using namespace std;
class car
{
    public:
    virtual void display()=0; // Pure virtual function  and class becomes abstract

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
    // car c;    cannot make object because it is an abstract classs
    
    car *p = new innova;
    p->display();
    p = new swift();
    p->display();
    return 0;
}
