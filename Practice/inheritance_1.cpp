/* Inheritance
It is possible to inherit attributes and methods from one class to another. We group the "Inheritance concept" into two categories:
Derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from */

// To inherit from a class, use the : symbol

#include <iostream>
using namespace std;

// Base Class
class Vehicle
{
    public:
        string brand = "Ford";
        void honk()
        {
            cout<<"Tuut, tuut! \n";
        }
};

// Derived Class
class Car: public Vehicle
{
    public:
        string model = "Mustang";
};

int main()
{
    Car obj1;
    obj1.honk();
    cout<<obj1.brand + " " + obj1.model;
    return 0;
}