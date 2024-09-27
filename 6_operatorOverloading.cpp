// Operator overloading allows you to define or modify the way operators work for user-defined types (such as classes or structs) in C++. You can overload most of the operators (e.g., +, -, *, ==) to give them custom functionality when used with your class objects.

// Here’s a basic example that demonstrates operator overloading for the + operator in a class that represents complex numbers:

// Example of Operator Overloading (+ operator):
#include<iostream>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+( const Complex &obj ){
        Complex temp ; 
        temp.real = real + obj.real ; 
        temp.img = img + obj.img  ; 
        return temp ; 
}


      // Function to display complex number
    void display() {
        cout << real << " + " << img << "i" << endl;
    }
}; 






int main()
{
     Complex c1(3.5, 2.5), c2(1.5, 4.5);
    
    // Overloaded + operator to add two Complex numbers
   
    Complex c3  = c1 + c2 ; 
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "Sum = "; c3.display();
    return 0;
}



