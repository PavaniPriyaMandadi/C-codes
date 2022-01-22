#include <iostream> 
using namespace std; 
struct MY_details
{
string name ; 
string roll_no;
string Class_section; 
string Year_Sem ; 
string Blood_group; 
int Age;
};
int main()
{
MY_details s; 
s.name = "Pavani Priya Mandadi"; 
s.roll_no = "20WH1A12A2";
s.Class_section = "IT - B"; 
s.Year_Sem = "II - I"; 
s.Blood_group = "O Positive"; 
s.Age = 19;
cout<<"Printing My Details"<<endl; 
cout<<"Name :"<<s.name<<endl; 
cout<<"Roll number :"<<s.roll_no<<endl;
cout<<"Class and Section :"<<s.Class_section<<endl; 
cout<<"Year and semister :"<<s.Year_Sem<<endl; 
cout<<"Blood group :"<<s.Blood_group<<endl;
 cout<<"Age :"<<s.Age;
}

