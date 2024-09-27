// we hide data and public the methods 

// but when you make data private you can't access data directly just as we do previously  

#include<iostream>
using namespace std;

class Rectangle{
   private: // by default data in class is private 
        // data 
        int length  ; 
        int breath ; 
    public: // methods (function) are public 
       
        //* get function 
        int getlength( ){
            return length ; 
            
        }

        int getbreath( ){
            return breath ; 
            
        }

        //* set function 

        void setlength(int l){
            if(l>0) length = l ; 

        }

         void setbreath(int b){
            if(b>0) breath = b ; 

        }


        //* methods of class 
        int parameter(){
            return 2*(length+breath) ; 
        }

        int area(){
            return length * breath ; 
        }

};


int main()
{
    Rectangle *obj = new Rectangle() ; 
  //! this method show you error now because you can't access data directly 
  //* for this now we make two functions get and set in class 
  //* -> get method -> return the varible 
  //* -> set method -> set the value of variable 
    // obj->length = 5; 
    // obj->breath = 7 ; 
    //? we get data like this 
// set the length and breath 
    obj->setlength(5) ; 
    obj->setbreath(6); 
    // get the length and breath 

   int l = obj->getlength() ; 
   int b =  obj->getbreath() ; 
    cout<<"length"<<l<<" "<<"breath"<<b<<endl; 
   // now print area 
    cout<<obj->area()<<endl; 
    
    return 0;
}