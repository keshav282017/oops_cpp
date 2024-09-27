//* Purpose of Inheritance

// -> To Achieve Polymorphism 
// -> less line of code 
// -> reusability of code 



//*Generalization in OOP:


//?What it means: 
// It’s like finding common features among different things
//  and putting them together in one big category.


//?Example: 
// Imagine you have a Car and a Bike. Both can start, 
// stop, and have speed. So, instead of writing the same code for both, 
// you make a general class called Vehicle that has these common features. Then,
// both Car and Bike can use this general class and only add what’s unique to them.

#include<iostream>
using namespace std;


class Vehicle {
public:
    void start() { /* common start logic */ }
    void stop() { /* common stop logic */ }
    int speed;
};

class Car : public Vehicle {
    // Specific to Car
};

class Bike : public Vehicle {
    // Specific to Bike
};



//*Specification in OOP:

//?What it means: 

// It’s when you take something general 
// and make it more specific by adding details unique to that thing.


//?Example: 

// After making a general Vehicle class, you can make a Car class that adds features like 
// numberOfDoors or special functions like applyBrakes() that only cars need.


class Car : public Vehicle {
public:
    int numberOfDoors;
    void applyBrakes() { /* Car-specific braking logic */ }
};


//? Benefit
// Specification allows the creation of more detailed and specialized classes that inherit the general behavior of the parent class while adding unique features. 
// This supports polymorphism and extensibility.

//*Summary 

//  generalization is grouping common things,
//   and specification is adding special details to that group.