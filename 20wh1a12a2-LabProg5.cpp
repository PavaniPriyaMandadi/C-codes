#include <iostream> 
using namespace std; 
class pointer
{
 
public:
int integer = 67;
float floating_value = 9.45; 
double double_value =  integer*floating_value;
};
 
int main()
{
pointer p,*ptr; 
ptr=&p;
cout<<"integer value = "<<ptr->integer<<endl; 
cout<<"floating value = "<<ptr->floating_value<<endl; 
cout<<"double value = "<<ptr->double_value<<endl; 
return 0;

}

