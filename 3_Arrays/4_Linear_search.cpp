#include <iostream>
using namespace std;

int main()
{
    int a[10],n=10,key;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key"<<endl;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
       if(key==a[i]){
           cout<<"found at "<<i<<endl;
           return 0;
       }
    }
           cout<<"not found"<<endl;
   
    return 0;
}