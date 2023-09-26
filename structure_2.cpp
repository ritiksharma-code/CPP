#include <iostream>
#include <string>
using namespace std;

 /* struct{
        int num;
        string str;
    }str1, str2, str3;  //Multiple structure variablees separated with commas */
    struct car{
        string brand;
        string model;
        int year;
    }; //car1, car2;   We can add variables by separating them with a comma here

int main()
{
   

    // Put data into the first structure
    car car1;       // We can also use one structure to represent two cars
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 1999;

    // Put data into the second structure
    car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1969;

    // Print the structure members
    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
    return 0;
}