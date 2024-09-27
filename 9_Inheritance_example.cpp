// actual example of inheritance

#include <iostream>
using namespace std;

// class Rectangle
class Rectangle
{
private:
    int length;
    int breath;

public:
    // constructor
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreath(b);
    }
    // setter
    void setLength(int l)
    {
        length = l;
    }

    void setBreath(int b)
    {
        breath = b;
    }
    // getter
    int getLength()
    {
        return length;
    }

    int getBreath()
    {
        return breath;
    }

    // methods
    int perimeter()
    {
        return 2 * (length + breath);
    }

    int area()
    {
        return length * breath;
    }
};

// cuboid class
class Cuboid :public Rectangle
{
private:
    int height;

public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        setHeight(h) ; 
        // setlength and setbreath from Rectangle class 
        setLength(l) ; 
        setBreath(b) ; 
    }

    void setHeight(int h){
        height  = h; 
    }

    int volume(){
        return getLength()*getBreath()*height ; // get func from Rectangle
    }

    
} ; 

int
main()
{
    Cuboid obj(10 , 5 ,3) ; 
    
   cout<<obj.getLength()<<endl;
    
    cout<<obj.volume()<<endl ; 
    return 0;
}





