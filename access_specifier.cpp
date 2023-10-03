// Access Specifier
// Access specifiers define how the members(attributes and methods) of a class can be accessed.

// Note: By default, all members of a class are private if you don't specify an access specifier.

#include <iostream>
using namespace std;

class MyClass
{
    public:             // Public access specifer
    int x;              // Public Attribute
    private:            // Private access specifier
    int y;              // Private Attribute
};

int main()
{
    MyClass obj1;
    obj1.x = 25;        // Allowed (public)
    // obj1.y = 50;        // Not allowed (private)
    return 0;
}