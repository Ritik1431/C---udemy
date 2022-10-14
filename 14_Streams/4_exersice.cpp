#include <iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream ofs("Shop.txt");
    ofs<<"Soap"<<endl;
    ofs<<90<<endl;
    ofs<<15<<endl;
    ofs.close();

    ifstream ifs("Shop.txt");
    string name;
    int price;
    int quantity;

    ifs>>name>>price>>quantity;

    cout<<"Name "<<name<<endl;
    cout<<"Price "<<price<<endl;
    cout<<"Quantity is "<<quantity<<endl;

    ifs.close();

    return 0;
}