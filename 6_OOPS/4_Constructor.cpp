#include <iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int bredth;
    public:
    rectangle()
    {
        length=1;
        bredth=1;
    }
    rectangle(int i , int j)
    {
        setLength(i);
        setBredth(j);
    }
    rectangle(rectangle &r)
    {
        length = r.length;
        bredth = r.bredth;
    }


    void setLength(int l)
    {
        if(l>0)
        length = l;
        else
        length = 0;
    }
    void setBredth(int b)
    {
        if(b>0)
        bredth = b;
        else
        bredth = 0;
    }
    void getLength(){
        cout<<length<<endl;
    }
    void getBredth(){
        cout<<bredth<<endl;
    }
    void area()
    {
        cout<<length*bredth<<endl;
    }

};
int main()
{
    rectangle r1(10,5);
    rectangle r2(r1);

    r2.area();

    
    return 0;
}