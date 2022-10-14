// Compound assignment :-

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b= 10, c = 15;
    int sum =20;
    //normally we write :-

    // sum = sum + a;
    // cout<<"sum is "<<sum;

    //instead we can use 
    sum+=a;
    cout<<"sum is "<<sum; // it is faster than previous .

    return 0;
}