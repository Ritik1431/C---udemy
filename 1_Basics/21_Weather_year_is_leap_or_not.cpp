#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    if (year % 4 ==0 && year % 400 == 0)
    {
        cout<<"It is a Century Year"<<endl;
    }
    else if (year % 4 ==0)
    cout<<"It is a Leap year"<<endl;
    else
    cout<<"Not a leap year"<<endl;
    return 0;
}