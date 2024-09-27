//* In this we see three access specifiers (public , proteceded and private) and how they differ


#include<iostream>
using namespace std;

class Base{
    private:
        int a; 
    protected:
        int b; 
    public: 
        int c;
        void funcBase(){
            a = 10 ; 
            b = 20 ; 
            c = 30 ; 
        }
} ; 

//! chart 
//?                         private             protected           public 


//* inside class               allow                allow               allow 

//* inside derived             notallowed               allow           allow               
// class 

//* on object (main)             notallow               notallow            allow


int main()
{
    
    return 0;
}