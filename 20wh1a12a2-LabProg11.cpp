#include<iostream> 
using namespace std; 
class point
{
private:
int x,y;
 
public:
 

point()
{
 



cout<<"welcome to default constructor"<<endl;
}
 
point(int X,int Y)
{
x=X; y=Y;
}
point(const point &p)
{
x=p.x;
y=p.y;
}
int getx()
{
return x;
}
int gety()
{
 


point();
{
 
return y;
}
 
cout<<"destructor is called"<<endl;
}

};
int main()
{
point P;
point P1(100,45);
point P2 = P1;
cout<<"P1.x = "<<P1.getx()<<","<<"P1.y = "<<P1.gety()<<endl; return 0;
}

