//* Story

// There are two methods to write functions of class
// one is inside class and one only name in class and body outside
// For writing body outside we need scope resolution operator (::)

// example :

// int Rectangle: perimeter(){
//     return 2*(length *breath) ;
// }

#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    void func1() { cout << "Inline"<<endl ; }
   void func2();
};

// inline void Test::func2() //* to make the func inline using (inline keyword)
void Test:: func2()
{
    cout << "Non-Inline";
}

int main()
{
    Test obj;
    obj.func1();
    obj.func2();
}
