//* virtual function 
/*
    A virtual function in C++ is a function that is declared in
     a base class and is meant to be overridden in derived classes. 
     When a function is marked as virtual, it enables runtime polymorphism,
      meaning the function that gets called is determined at runtime based on the actual type of the object, 
    not the pointer/reference type.
*/

//* why use virtual function 
/*
    Without virtual functions, the type of the pointer/reference at 
    compile time determines which version of the function is called. With virtual functions, 
    the type of the object that the pointer is pointing to at runtime determines which function is called.
*/

#include<iostream>
using namespace std;
//Virtual Function Declaration: A virtual function is declared using the keyword virtual in the base class.
class Animal {
public:
    virtual void speak() {
        cout << "Animal sound" << endl;
    }
    

    virtual ~Animal() {  // Virtual destructor
        cout << "Animal destroyed" << endl;
    }


   //* Pure Virtual Functions:
    // If a function has no implementation 
    // in the base class and must be implemented in derived classes,
    //  it can be declared as a pure virtual function, making the class an abstract class.
    //virtual void speak() = 0 ; 
        
    
};
//Method Overriding: In the derived class, the virtual function can be overridden to provide specific functionality.
class Dog : public Animal {
public:
    void speak() {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    // Override the virtual function in derived class
    void speak() {
        cout << "Meow" << endl;
    }
};

int main() {
    Animal* animalPtr;  // Pointer of type Animal
    
    // Dog dog;
    // Cat cat;
    
    animalPtr = new Dog() ; 
    animalPtr->speak();  // Calls Dog's speak() -> Outputs "Bark"
    
    animalPtr = new Cat() ; 
    animalPtr->speak();  // Calls Cat's speak() -> Outputs "Meow"
   
    
    return 0;
}



//* ABSTRACT CLASSES 

// 1.which classes have virtual functions 
// 2. in abstract class there is no Base b ; 
// Base *p =  new dervied() ; (we declare pointer in abstract class not object)



