#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"Ritik"<<endl;
    ofs<<"12"<<endl;
    ofs<<"cs"<<endl;
    ofs.close();
    return 0;
}