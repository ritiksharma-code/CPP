// Classes and Objects

#include <iostream>
using namespace std;

class car
{
    public:
    string brand;
    string model;
    int year;
};

int main()
{
    // Create an object of car
    car obj1;
    obj1.brand = "BMW";
    obj1.model = "X5";
    obj1.year = 1999;

    // Create another object of car
    car obj2;
    obj2.brand = "Ford";
    obj2.model = "Mustang";
    obj2.year = 1969;

    // Print attribute values
    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<"\n";
    cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<"\n";

    return 0;
}