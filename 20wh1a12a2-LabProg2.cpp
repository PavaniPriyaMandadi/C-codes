#include<iostream> 
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
Employee E;
cout<<"Enter employee name"<<endl; cin>>E.name;
cout<<"Enter employee ID no"<<endl; cin>>E.employee_no;
cout<<"Enter employee Basic Salary"<<endl; cin>>E.Basic;
E.DA = 0.52*E.Basic; E.IT = 0.3*E.Basic;
E.net_salary = E.Basic + E.DA - E.IT; cout<<"Details of :"<<E.name<<endl;
cout<<"Employee ID no :"<<E.employee_no<<endl; cout<<"Employee Basic Salary :"<<E.Basic<<endl; cout<<"Employee DA :"<<E.DA<<endl; cout<<"Employee IT :"<<E.IT<<endl; cout<<"Employee Net Salary :"<<E.net_salary<<endl; return 0;
}

