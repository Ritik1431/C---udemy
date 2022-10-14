#include <iostream>
using namespace std;

int main()
{
    int n, r,sum = 0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int m = n;
    while(n>0)
    {
        r = n%10;
        n = n/10;
        sum = sum + (r*r*r);
    }
    if (m==sum)
    {
        cout<<"Number is armstrong number"<<endl;
    
    }
    else{
        cout<<"number is not an armstrong number"<<endl;
    }
    return 0;
}