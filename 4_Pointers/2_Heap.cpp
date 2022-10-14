#include <iostream>
using namespace std;

int main()
{
    int *p = new int[20];

    delete []p; //   we should delete the previous array to save the memory.
    p = new int [40];// we can increase the size of an array with the help of pointers.

    return 0;
}