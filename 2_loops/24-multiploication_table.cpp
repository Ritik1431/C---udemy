#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Welcome to counting tables"<<endl;
    cout<<"Enter the no of which you want to print table"<<endl;
    cin>>n;
    for (int  i = 1; i <= 10; i++)
    {
        cout<<n<<" * "<<i<<" = " <<n*i<<endl;
    }
    
    return 0;
}