//*Abstraction 
// Abstraction in C++ is a fundamental object-oriented programming (OOP) concept that allows you to hide complex
//  implementation details and show only the necessary features of an object. 
//  It enables a programmer to focus on interacting with objects at a higher level without needing to 
//  understand their internal workings.

//*abstract  classes
// An abstract class is a class that cannot be instantiated on its own and is meant to be subclassed. 
// It usually contains one or more pure virtual functions, which are declared by appending = 0 to the function declaration.


#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog(); // Creating a Dog object
    Animal* animal2 = new Cat(); // Creating a Cat object

    animal1->sound(); // Output: Woof!
    animal2->sound(); // Output: Meow!

    delete animal1; // Clean up
    delete animal2; // Clean up

    return 0;
}

//*Concluison 
// Abstraction in C++ allows you to define abstract classes that represent general 
// concepts while enabling specific implementations in derived classes. This leads to more manageable and 
// maintainable code by reducing complexity and promoting a clear separation between interface and implementation.