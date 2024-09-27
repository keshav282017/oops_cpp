#include<iostream>

using namespace std; 
// basic class with obj of storgae stack 
class Hello{
    public: 
        int a ; 
        int b; 

           
         

        int sum(){
                return a+ b; 
            }

};  

int main(){
    //* this method is used to make object in stack 
    Hello obj ; 
    obj.a = 5; 
    obj.b = 7 ; 
   
    
    cout<<endl;
    cout<<obj.sum()<<endl ; 
}