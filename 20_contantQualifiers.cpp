// constant qualifiers are used to ensure that a variable, pointer, function parameter, or class method cannot be modified after its declaration.
//  The most commonly used constant qualifier is const


 //*const 

//  The const qualifier makes a variable or object unmodifiable after initialization.
//   It can be applied to variables, pointers, function parameters, and class methods.

#include<iostream>
using namespace std;
int main()
{
    const int x = 5;
    //x = 10;  //* Error: You cannot modify a constant variable


     //*Pointer to a Constant:
     const int* ptr;  // Pointer to a constant integer
        int a = 10;
        ptr = &a;       // Okay
    //    *ptr = 20;      // Error: The value being pointed to is constant

    



    return 0;
}


//*difference bw define and const 
//?define 
// preprocessor Macro 
// executed before compilation start 
// No Type Checking:
// no memory allocation 


// Use #define for simple text replacements when you don't need type safety or scoping (e.g., constants in old C code).
// Use const for constant values where you need type checking, scoping, and better safety


