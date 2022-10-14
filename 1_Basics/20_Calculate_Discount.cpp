#include <iostream>
using namespace std;

int main()
{
    float amount;
    cout<<"Enter the total Amount"<<endl;
    cin>>amount;
    if (amount<100)

    {
        cout<<"No Discount!!"<<endl;

    }
    else if (amount >=100 && amount <500)
    {
        amount = (amount) - (amount* 20/100);
        cout<<"Amount after discount is "<<amount<<endl;

    }
    else if (amount >=500)
    {
        (amount = amount - (amount * 20)/100);
        cout<<"Amount after discount is "<<endl;
    }
    
    return 0;
}