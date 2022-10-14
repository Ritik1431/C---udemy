#include <iostream>
using namespace std;

int search(int A[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key==A[i])
        return i;
    }  
    return 0;    
}

int main()
{
    int a[] = {5,8,9,7,4,3,10,11};
    int k;
    cout<<"Enter an element to be searched"<<endl;
    cin>>k;
    int index=search(a,8,9);
    cout<<"found at index "<<index<<endl;
    return 0;
}