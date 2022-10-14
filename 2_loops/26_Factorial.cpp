#include <iostream>
using namespace std;
int Counttrailingzero(int n)
{
    int res =0;
    for (int i = 5; i <= n; i=i*5)
    {
        res = res + (n/i);
    }
    return res;
    
}
int main()
{
    // int n,fact = 1;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     fact *=i;  // alternative of fact = fact*i;
    // }
    // cout<<"Fact is "<<fact<<endl;
    // Trailing zeros in factorial

    // int res = 0;
    // while (fact%10==0)
    // {
    //     res++;
    //     fact = fact/10;
    // }
    // cout<<"Trailing zeros are "<<res<<endl;


    // efficient method
    cout<<Counttrailingzero(10);

    
    

    return 0;
}