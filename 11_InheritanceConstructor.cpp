// Order of Execution: Constructors are called in the order
//  of inheritance—base class first, followed by derived class.



#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    // Constructor for Rectangle
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Rectangle constructor called" << endl;
    }
};

class Cuboid : public Rectangle {
public:
    int height;

    // Constructor for Cuboid
    Cuboid(int l, int w, int h) : Rectangle(l, w) {  // Calling base class constructor
        height = h;
        cout << "Cuboid constructor called" << endl;
    }

    // Function to display Cuboid's dimensions
    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Create a Cuboid object
    Cuboid c(10, 5, 7);
    c.display();

    return 0;
}


//*OUTPUT 
// Rectangle constructor called
// Cuboid constructor called
// Length: 10, Width: 5, Height: 7




