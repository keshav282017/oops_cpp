//* Friend Function
// A friend function in C++ is a function that is not a
//  member of a class but is allowed to access the private and 
//  protected members of that class. Normally, only class methods have access 
//  to private/protected members,but a friend function breaks this 
//  restriction, offering greater flexibility.



//*Key Characteristics of Friend Functions:
//?Non-member function:
//  A friend function is not a part of the class, but it can access 
//  private and protected data of the class.


//?Declared using the friend keyword:
//  You must declare a function as a friend within the class to give 
//  it access to its private members.


//?Not called using objects:
//  Unlike class methods, 
// friend functions are not called using objects of the class.


//?Can be a global function or friend of multiple classes: 
// A friend function can be declared as a global function,
//  or it can be made a friend of multiple classes.


#include<iostream>
using namespace std;

class Box {
private:
    int width;
    
public:
    Box(int w) : width(w) {}
    
    // Declaring friend function
    friend int getWidth(Box b);  // Declaration of friend function
};

// Definition of friend function
int getWidth(Box b) {
    // Access private member 'width'
    return b.width;
}

int main() {
    Box box(10);
    cout << "Width of the box: " << getWidth(box) << endl;  // Calling friend function
    return 0;
}

//* Usecases
// Operator Overloading
// Functions that need access to private data of multiple classes

//* Drawbacks 
//?Breaks Encapsulation:
 //Since friend functions can access private members, 
 //they slightly violate the principle of encapsulation.


//?Not Inherited: 
//Friend functions are not inherited by derived classes.



//* Friend Class 
// A friend class in C++ is a class that is granted
//  special access to the private and protected members of another class. 
//  By declaring a class as a friend, you allow all member functions of that friend 
//  class to access the private and protected members of the class in which the 
//  friendship is declared.


