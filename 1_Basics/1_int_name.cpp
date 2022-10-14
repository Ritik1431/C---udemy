#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name"<<endl;
    // cin>>name;  it will not take whole name , it will take only first name instead we will use:-
    getline(cin,name);
    cout<<"Welcome MR."<<name<<endl;

    return 0;

}