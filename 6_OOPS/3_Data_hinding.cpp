#include <iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int bredth;
    public:

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

};
int main()
{
    rectangle r1;
    r1.setLength(12);
    r1.setBredth(10);

    r1.getLength();
    r1.getBredth();
    return 0;
}