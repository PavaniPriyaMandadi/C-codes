#include<iostream> 
using namespace std; 
class Myself
{
private:
int A;
 
public:
 

Myself()
{
 
A=92;
}
friend class Friend1;
};
class Friend1
{
 
int B; public:
 


Friend1()
{
 
B=102;
}
void showMyself(Myself & x)
{
cout<<"Friend1 showing My value :: A= "<<x.A<<endl;
}
friend class Friend2;

};
class Friend2
{
int C; public:
Friend2()
{
C=200;
}
void showFriend1(Friend1 & y)
{
cout<<"Friend2 showing value of Friend1:: B= "<<y.B<<endl;
}
};
int main()
{
	
     
 
Myself A1; Friend1 B1; Friend2 C1;
B1.showMyself(A1); C1.showFriend1(B1); return 0;
}

