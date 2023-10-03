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

// Another base class
class MyOtherClass
{
    public:
        void OtherFunction()
        {
            cout<<"Some content in another class.";
        }
};

// Derived class
// A class can also be derived from more than one base class, using a comma-separated list:
class MyChildClass: public MyClass, public MyOtherClass{};

int main()
{
    MyChildClass obj1;
    obj1.function();
    obj1.OtherFunction();
    return 0;
}