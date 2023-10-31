// Constructor Parameters

#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z);
};

Car::Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }

int main()
{
    // Create car objects and call the constructor with different values;
    Car obj1("BMW", "X5", 1999);
    Car obj2("Ford", "Mustang", 1969);

    // Print Calues
    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<"\n";
    cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<"\n";
    
    return 0;
}