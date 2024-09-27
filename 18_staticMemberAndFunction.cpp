//* static member or static function

// A static member (either a variable or a function) is a class member 
// that belongs to the class itself rather than to any specific object of the class. 

// This means that static members are shared among all instances of the class, and they exist independently of any objects. 
// Static members are useful when you want to maintain information or functionality that is common to all objects 
// of the class.

//*Characteristics 
//?Shared Across All Objects: 
// Static members are shared across all instances of the class,
//  meaning there is only one copy of the static member, regardless of how many objects of the class are created.


//?Class Scope: 
// Static members can be accessed using the class name, without needing to create an object.


//?Static Functions: 
// Static member functions can only access static data members or other static member functions. 
// They cannot access non-static members because static functions do not belong to any particular object.


//*Declaration: 
// Static members are declared within the class but need to be defined outside of it.



#include<iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    Counter() {
        count++;  // Increment count for every object created
    }

    static int getCount() {  // Static member function
        return count;  // Accessing static data member
    }
};

// Defining static data member outside the class
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    // Access static member through the class
    cout << "Number of objects created: " << Counter::getCount() << endl;

    return 0;
}
