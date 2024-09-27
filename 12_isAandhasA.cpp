// 1. Is-A Relationship (Inheritance)
// The is-a relationship refers to inheritance in object-oriented programming. It means that the derived class is a type of the base class. It establishes a parent-child relationship, where the child class inherits the properties and behavior of the parent class.

// Inheritance creates an is-a relationship.
// Example: A Cuboid is a type of Rectangle, because a cuboid has a length and width (from Rectangle), but it extends this functionality with its own height.
#include<iostream>
using namespace std; 

class Rectangle {
public:
    int length, width;
    
    Rectangle(int l, int w) : length(l), width(w) {}
    
    int area() {
        return length * width;
    }
};

// Cuboid is a type of Rectangle (is-a relationship)
class Cuboid : public Rectangle {
public:
    int height;
    
    Cuboid(int l, int w, int h) : Rectangle(l, w), height(h) {}
    
    int volume() {
        return area() * height;
    }
};
// Cuboid is a Rectangle, hence this is an is-a relationship.
// A cuboid can reuse all the functionality of a rectangle because it is a specialized form of a rectangle with an added height.
// 2. Has-A Relationship (Composition)
// The has-a relationship refers to composition or aggregation. It means that one class contains a reference to another class, implying that the containing class has an object (or objects) of another type.

// Composition or aggregation creates a has-a relationship.
// Example: A Car has a Engine or a Person has an Address. The car class will have an engine object, but the car is not an engine.

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
public:
    Engine engine;  // Car has an Engine
    
    void startCar() {
        engine.start();
        cout << "Car is running" << endl;
    }
};

//* When to Use:
//? Is-A Relationship (inheritance) should be used when:

// There is a natural hierarchy between classes.
// The derived class is a specialized version of the base class.
// Example: A Dog is a type of Animal.



//? Has-A Relationship (composition) should be used when:

// One object logically contains or is composed of another object.
// You want to model a "part-of" relationship.
// Example: A Car has an Engine.



//* Summary:
// Is-A represents inheritance (generalization-specialization).
// Has-A represents composition/aggregation (part-whole relationship).