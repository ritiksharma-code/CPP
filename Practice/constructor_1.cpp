// A constructor is a special method that is automatically called when an object of a class is created
// To create a constructor, use the same name as the class, followed by parenthesis ().

#include <iostream>
using namespace std;

class MyClass           // The Class
{
    public:             // Access specifier
    MyClass()           // Constructor
    {
        cout<<"Hello World!";
    }
};

int main()
{
    MyClass obj1;   // Create an object of MyClass (This will call the constructor)   
    return 0;
}