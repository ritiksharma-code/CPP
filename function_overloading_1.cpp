// Function Overloading
// With Function Overloading, multiple functions can have the same name with different parameters.
/* int function(int x)
   float function(float x)
   douvle function(double x, double y) */

#include <iostream>
#include <string>
using namespace std;

int plusfunction(int x, int y)
{
    return x+y;
}

double plusfunction(double x, double y)
{
    return x+y;
}

int main()
{
    int num1 = plusfunction(3,5);
    double num2 = plusfunction(4.3, 6.26);

    cout<<"int: "<<num1<<"\n";
    cout<<"double: "<<num2;
    return 0;
}