#include<iostream>
using namespace std;

class Rectangle{
    public: 
        // data 
        int length  ; 
        int breath ; 

        // methods 
        int parameter(){
            return 2*(length+breath) ; 
        }

        int area(){
            return length * breath ; 
        }

};

int main()
{
    //* make object in heap using pointer 
    Rectangle *obj = new Rectangle() ; 
    // obj is now pointer (so use -> arrow operator to access)
    obj->length = 5; 
    obj->breath = 7 ; 
    cout<<obj->area()<<endl; 

    return 0;
}