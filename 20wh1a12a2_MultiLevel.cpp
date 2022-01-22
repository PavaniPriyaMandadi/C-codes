	//MULTILEVEL INHERITANCE
    #include <iostream>  
    using namespace std;  
     class Student {  
       public:  
     void internal() {  
        cout<<"Internals for labs and theory..."<<endl;  
     }    
       };  
       class Engineer: public Student  
       {    
           public:  
         void external(){  
        cout<<"Externals - End sem exams"<<endl;  
         }    
       };  
       class Fresher: public Engineer
       {    
           public:  
         void result() {  
        cout<<"Results are out";  
         }    
       };  
    int main(void) {  
        Fresher d1;  
        d1.internal();  
        d1.external();  
         d1.result();  
         return 0;  
    } 
