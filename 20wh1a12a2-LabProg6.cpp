#include <iostream> 
using namespace std; 
int value = 1292;
int main()
{
cout<<"Global declaration value is : "<<value<<endl; 
int value = 3;
cout<<"After local declaration is : "<<value<<endl; 
cout<<"After using scope resolution operator "; 
cout<<"::value = "<<::value<<endl;
return 0;
}


