#include <iostream>
using namespace std;

int main()
{
    int n;
    float num[100],sum = 0.0,average;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<i + 1<<" Enter the number"<<endl;
        cin>>num[i];
        sum += num[i]; 
    }
    average = sum /n;
    cout<<"Average is "<<average<<endl;
    
    return 0;
}