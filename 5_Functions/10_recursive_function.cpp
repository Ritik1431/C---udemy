#include <iostream>
using namespace std;
int fun(int n)
{
    if (n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
        return n;
    
}
int main()
{
    int x =10;
    fun(x);
    return 0;
}