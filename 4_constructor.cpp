/* 
To construct the class at time of creting the object we calld the constructor 
constructor is same name of class with no return type 
//* type of constructor 

 1 . default 
 2 . user defind 
    a) non parameterized b) parameterized c)_ copy 


*/

#include<iostream>
using namespace std;

class Rectangle{
   private: 
        // data 
        int length  ; 
        int breath ; 
    public: 
        //* CONSTRUCTOR 

        // NON PARAMETERIZED (when you don't give argument) . 
        // Rectangle(){
        //     length = 0 ; 
        //     breath = 0 ; 
        // }

        // PARAMETERIZED (when you have value to set at time of object construct)
        // we give this constructor with default value 0 to length and breath 
        // recta(5) and rect(5,10) and rect() all three work
        Rectangle(int l =0 , int b = 0){
            setlength(l) ; 
            setbreath(b) ; 
            breath = b; 
        }




        //* GETTERS 
        int getlength( ){
            return length ; 
            
        }

        int getbreath( ){
            return breath ; 
            
        }

        //* SETTERS

        void setlength(int l){
            if(l>0) length = l ; 

        }

         void setbreath(int b){
            if(b>0) breath = b ; 

        }


        //* FACILATORS 
        int parameter(){
            return 2*(length+breath) ; 
        }

        int area(){
            return length * breath ; 
        }

};


int main()
{
      // Using non-parameterized constructor (sets both length and breath to 0)
    Rectangle *obj1 = new Rectangle();
    
    // Using parameterized constructor with one argument (sets length = 5, breath = 0)
    Rectangle *obj2 = new Rectangle(5);
    
    // Using parameterized constructor with two arguments (sets length = 5, breath = 10)
    Rectangle *obj3 = new Rectangle(5, 10);

    // Setting values using the setter methods (for obj1)
    obj1->setlength(5);
    obj1->setbreath(6);

    // Displaying the area and perimeter for obj1
    cout << "Area of obj1: " << obj1->area() << endl;
    cout << "Perimeter of obj1: " << obj1->parameter() << endl;

    // Displaying the area and perimeter for obj2 and obj3
    cout << "Area of obj2: " << obj2->area() << endl;
    cout << "Area of obj3: " << obj3->area() << endl;

    // Deleting the dynamically allocated objects
    delete obj1;
    delete obj2;
    delete obj3;

    return 0;
}






