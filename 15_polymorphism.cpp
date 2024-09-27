//* polymorphism (having multiple forms) 
/*
Polymorphism is a concept from object-oriented programming 
 that refers to the ability of a function, object, or method to take on multiple forms.
  It allows a single interface or function to work with different data types or objects.

*/



//? Types of Polymorphism:
//* 1 . Compile-time Polymorphism (Static Polymorphism):

//? Achieved through 
       //1-> function overloading 
       // 2->operator overloading.
// The decision of which function to call is made during compile time.


#include<iostream>
using namespace std;
class Animal{
    public: 
        void speak(){
            cout<<"bark"<<endl;
        }
}; 

class Cat : public Animal{
        public: 
        void speak(){
            cout<<"meow meow"<<endl; 
        }
} ; 
int main()
{
    Animal * obj; 
    obj = new Cat() ; 
    //* i know you have doubt in above 2 lines that how this possible 
   //! Explain->
   /*
             new Cat():
              This part creates a new object of the Cat class dynamically on the heap (dynamic memory).

              Animal *obj:

                    obj is a pointer to an object of type Animal. 
                This pointer can hold the address of any object that is either an Animal or a subclass of Animal (like Cat), 
                due to polymorphism (more specifically, upcasting).

                Even though obj is a pointer to an Animal, it now points to an object of the Cat class.
                 This is allowed because a Cat is-a Animal (inheritance relationship).


              */
    obj->speak() ;
    return 0;
}
//in this example we acchive polymorphism by making same name but not acess cat speak
//* Flow of code 
    // There is 2 class animal and cat 
    // cat is base class of animal 
    // both have speak function 

    // in main()
    //      Animal* obj - create a object  of animal class 
    //      obj = new  Cat() -> now obj is pointing to the cat class (posibble bcz cat is subclass of animal) 
    //      obj->speak() -> calling this the output will be now (meow meow) 


//* OUTPUT 
        // -->> bark 
//* why output bark ? 
        // when we create animal* obj object at compile time has  decide the function speak of animal 
        // than when we obj = new cat() is runtime memory allocation (by new be access heap at runtime) 
        // so the speak function of animal class execute 
    

         





//! more to know 
//* upcasting 
// Assigning a Cat* (a derived class pointer) to an Animal* (a base class pointer) is known as upcasting.
//  It’s allowed without explicit casting because of inheritance.






