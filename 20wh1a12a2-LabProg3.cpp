#include <iostream> 
using namespace std; 
class Employee
{
 
public:
string name;
long int employee_no;
float Basic,DA,IT,net_salary;
};
 
int main()
{
int n,i;
cout<<"Enter no of employees :"; 
cin>>n;
Employee E[10];
for(i=0;i<n;i++)
{
cout<<"Enter employee name"<<endl; 
cin>>E[i].name;
cout<<"Enter employee ID no"<<endl; 
cin>>E[i].employee_no;
cout<<"Enter employee Basic Salary"<<endl; cin>>E[i].Basic;
E[i].DA = 0.52*E[i].Basic;
E[i].IT = 0.3*E[i].Basic;
E[i].net_salary = E[i].Basic + E[i].DA-E[i].IT;
}
cout << "Displaying Information," << endl; for(i=0;i<n;i++)
{
  cout<<"Details of :"<<E[i].name<<endl; cout<<"Employee ID no :"<<E[i].employee_no<<endl; cout<<"Employee Basic Salary :"<<E[i].Basic<<endl; cout<<"Employee DA :"<<E[i].DA<<endl; cout<<"Employee IT :"<<E[i].IT<<endl; cout<<"Employee Net Salary :"<<E[i].net_salary<<endl;
 }
return 0;
}

