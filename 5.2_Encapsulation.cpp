//*Key Concepts of Encapsulation in C++
    //*Data Hiding:
            // Encapsulation allows you to hide the internal state of an object from the outside world. 
            // The data is kept safe within the class,and users 
            //interact with it via public methods (often referred to as getters and setters).
    //*Access Specifiers:
        //*C++ provides three types of access specifiers:
            //?public: Members declared as public can be accessed from outside the class.
            //?private: Members declared as private cannot be accessed or modified directly from outside the class.
            //?protected: Members declared as protected are accessible only within the class and by derived classes.
    //*Getters and Setters:
                // These are public methods that provide controlled access to private data members. 
                // A getter method retrieves the value of a data member, 
                // while a setter method allows for controlled modification.





#include <iostream>
using namespace std;

class Person {
private:
    string name;    // Private member
    int age;        // Private member

public:
    // Constructor to initialize values
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age with a condition
    void setAge(int a) {
        if (a >= 0) { // Age must be non-negative
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Method to display details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person person("Alice", 25);

    // Access and modify data using setters and getters
    cout << "Initial Details: ";
    person.display();

    person.setName("Bob");
    person.setAge(30);

    cout << "Updated Details: ";
    person.display();

    // Try setting an invalid age
    person.setAge(-5); // Invalid age!

    return 0;
}



//*Summary
// Encapsulation in C++ ensures that the internal representation of an object is hidden from the outside, 
// providing a way to control access and modify its data through public methods.
//  This principle enhances security, simplifies maintenance, and makes programs easier to understand and manage.
