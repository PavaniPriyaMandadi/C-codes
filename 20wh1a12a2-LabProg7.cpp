#include <iostream> 
using namespace std; 
class demo_this_pointer
{
private:
int n; 
char c;
 
public:
 

void setMyValues(int n,char c)
{
this->n = n; 
this->c = c;
}
void Display_Values()
{ 
cout<<"number n is : "<<n<<endl; 
cout<<"character c is : "<<c<<endl;
}
};
int main()
{
demo_this_pointer obj; 
obj.setMyValues(267,'Z'); 
obj.Display_Values(); 
return 0;
}

