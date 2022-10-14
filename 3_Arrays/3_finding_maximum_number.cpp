#include <iostream>
using namespace std;

int main()
{
    int A[] = {2,9,5,4,6,7};
    int max = A[0];
    for(int i=0;i<6;i++){
        if (A[i]>max)
        {
            max = A[i];
        }
    }
        cout<<"Greatest number is "<<max<<endl;
    return 0;
}