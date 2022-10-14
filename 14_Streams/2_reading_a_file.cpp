#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs("my.txt");

    if(ifs){cout<<"File is opened"<<endl;}
    string name;
    int roll;
    string department;

    ifs>>name>>roll>>department;

    cout<<"Name "<<name<<endl;
    cout<<"roll "<<roll<<endl;
    cout<<"department "<<department<<endl;
    ifs.close();
    return 0;

}