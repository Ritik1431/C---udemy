#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    
    int temp;
    temp = a;
    a = b;
    b = temp;
    

}
int main()
{
    int x= 2,y = 4;
    swap(x,y);
    cout<<x<<" "<<y;   
    return 0;
}   