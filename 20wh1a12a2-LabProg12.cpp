#include<iostream> #include<iostream>
using namespace std; 
class sample
{
 
public:
 

int a=25,b=45; 
void display()
{
cout<<"a = "<<a<<endl; 
cout<<"b = "<<b<<endl;
 }
};
int main()
{
 
sample*obj=new sample; 
obj->display();
return 0;
}

