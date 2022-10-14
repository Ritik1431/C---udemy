#include <iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],mult[10][10];
    int i ,j,k,r1,r2,c1,c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    if (c1!=r2)
    {
        cout<<"We cant't Multiply"<<endl;
        return 0;
    }
    // Storing elements of first row
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            cout<<"Enter element a matrix:"<<i + 1<<j + 1<<" : ";
            cin>>a[i][j];
        }
        
    }
    // Storing elements of first second
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            cout<<"Enter element b matrix:"<<i + 1<<j + 1<<" : ";
            cin>>b[i][j];
        }
        
    }

    //multiplying two matrix and storing it in mult[]
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mult[i][j] = 0;
            for ( k = 0; k < c1; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
            
        }
        //Displaying the multiplication of two matrix
        cout<<endl<<"Output matrix"<<endl;
        for ( i = 0; i < r1; i++)
        {
            for (j = 0; j< c2 ;j++){
                cout<<" "<<mult[i][j];
                if(j == c2-1) 
                cout<<endl;
            }
        }
        
    }
    
    
    

    return 0;
}