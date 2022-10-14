#include <iostream>
using namespace std;

int main()
{
    float Net_Salary,Basic_Salary,Percentage_of_Allowance,Percentage_of_Deductions;
    cout<<"Enter the Basic Salary"<<endl;
    cin>>Basic_Salary;
    cout<<"Enter the Percentage of allowence"<<endl;
    cin>>Percentage_of_Allowance;
    cout<<"Enter the Percentage of deduction"<<endl;
    cin>>Percentage_of_Deductions;

    Net_Salary = (Basic_Salary+Basic_Salary*Percentage_of_Allowance/100)-(Basic_Salary*Percentage_of_Deductions/100);
    
    cout<<"Net salary is "<<Net_Salary<<endl;



    return 0;
}