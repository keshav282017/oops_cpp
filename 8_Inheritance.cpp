//?  Inheritance (17/sept/2024)

/* 

why to use ? 
    Reusabilility of code 
What we do ? 
     use same class to make another class with some more feature 
parent class and child class 
base class and derived class 


*/

//Example 
// Basic example of inheritance when we change accessor to private 
// derived class get not access to variable directly even not Base class


#include<iostream>
using namespace std;

class Base{
    public: 
        int x; 
    void show(){
         cout<<"I am form Base class"<<x<<endl; 
    }
} ; 

class Derived : public Base{
    public:
        int y ; 
        void display(){
        cout<<"I am from Derived class "<<x<<" "<<y<<endl; 
    }
} ; 
int main()
{
    Base obj ; 
    obj.x = 5; 
    obj.show(); 
    //* Derived class get all variable and function of Base class. 
    //* that is why we used show() func and x variable using Derived class
    //* derived class and base class both have different memory allocation for all its variable . 
    
    Derived obj2 ; 
    obj2.x = 9;
    obj2.y = 7 ;
    obj2.show() ; 
    obj2.display() ; 
    return 0;
}

//output 
// I am form Base class5
// I am form Base class9
// I am from Derived class 9 7






