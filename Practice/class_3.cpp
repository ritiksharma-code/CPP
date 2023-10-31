// Class Methods
// Inside Class Definition

/* There are two aways to define functions that belong to a class:
   Inside class definition
   Outside class definition */

#include <iostream>
using namespace std;

class MyClass           // The Class
{
    public:             // Access specifier
    void myMethod()     // Method/Function defined inside the class
    {
        cout<<"Hello World!";
    }
};

int main()
{
    MyClass obj1;       // Create an object of MyClass
    obj1.myMethod();    // Call the method
    return 0;
}