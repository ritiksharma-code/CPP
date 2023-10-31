// Multilevel Inheritance
// A class can also be derived from one class, which is already derived from another class.

#include <iostream>
using namespace std;

// Base class (parent)
class MyClass
{
    public:
        void function()
        {
            cout<<"Some content in parent class.";
        }
};

// Derived class (child)
class MyChild: public MyClass{};

// Derived class (grandchild)
class MyGrandChild: public MyChild{};

int main()
{
    MyGrandChild obj1;
    obj1.function();   
    return 0;
}