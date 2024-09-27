//*Exception handling
// Exception handling in C++ is a mechanism that allows you to detect and 
// manage runtime errors or exceptional situations in a program, providing a structured way 
// to react to unforeseen circumstances like division by zero, out-of-bounds access, or memory allocation failure.
//  It is implemented using three keywords: try, throw, and catch.

//*Try Block: 
// A block of code where exceptions are monitored. If an exception occurs within this block, 
// control is transferred to the corresponding catch block.
//*Throw: 
// Used to signal an exception has occurred. It "throws" an exception that can be caught by a catch block.
//*Catch Block: 
// This block handles the exception thrown by the try block. 
// It contains the code to deal with the error and recover or terminate gracefully.



#include<iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw "Division by zero error!";  // Throwing an exception
        }
        cout << "Result: " << numerator / denominator << endl;
    }
    catch (const char* e) {  // Catching the exception
        cout << "Exception occurred: " << e << endl;
    }

    return 0;
}

//*output
// Enter numerator: 10
// Enter denominator: 0
// Exception occurred: Division by zero error!


//*Notes
// we can write multiple catch blocks 
// catch(int e)
// catch(float e)
// catch(...) catch all


// #include<iostream>
// using namespace std;

// int main() {
//     int num;

//     try {
//         cout << "Enter a positive number: ";
//         cin >> num;

//         if (num < 0) {
//             throw num; // Throwing an integer exception
//         } else if (num == 0) {
//             throw "Zero is not allowed!"; // Throwing a string exception
//         }

//         cout << "You entered: " << num << endl;
//     }
//     catch (int e) {
//         cout << "Negative number exception: " << e << endl;
//     }
//     catch (const char* e) {
//         cout << "Exception: " << e << endl;
//     }

//     return 0;
// }


//todo: tips -> catch all is last one  , you can throw anything (cout , int)


//* 2->>> we have try inside try 
// try{
//     try{

//     }
//     catch{

//     }
// }
// catch{

// }


//*Standard Exceptions:
// C++ provides several standard exception classes in the <exception> header file, such as:

// std::exception: Base class for all standard exceptions.
// std::runtime_error: Handles runtime errors like arithmetic overflow.
// std::out_of_range: Handles access violations in containers.
// std::bad_alloc: Handles memory allocation failures.


//*example of out bad_alloc

// #include<iostream>
// #include<exception>
// using namespace std;

// int main() {
//     try {
//         int* arr = new int[100000000000];  // Trying to allocate a huge amount of memory
//     }
//     catch (bad_alloc& e) {
//         cout << "Memory allocation failed: " << e.what() << endl;
//     }

//     return 0;
// }

//*output

// Memory allocation failed: std::bad_alloc




