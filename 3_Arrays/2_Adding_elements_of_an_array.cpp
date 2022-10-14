#include <iostream>
using namespace std;

int main()
{
    int A[] = {8,3,4,9,6};
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + A[i];
    }
    cout<<"Sum of an array is "<<sum<<endl;
    
    return 0;
}