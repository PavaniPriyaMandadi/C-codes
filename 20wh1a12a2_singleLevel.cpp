	//SINGLE LEVEL INHERITANCE
#include <iostream>  
using namespace std;  
class Account {  
       public:  
       float salary = 230000;  
     };  
class Pavani: public Account {  
       public:  
       float bonus = 50000;    
       };      
int main(void) {  
         Pavani p1;  
         cout<<" Pavani's Salary: "<<p1.salary<<endl;    
         cout<<" Pavani's Bonus: "<<p1.bonus<<endl;    
        return 0;  
    } 
