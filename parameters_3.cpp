// Multiple Parameters

#include <iostream>
#include <string>
using namespace std;

void function(string name, int age)
{
    cout<<name<<" Boii. "<<age<<" years old.\n";
}

int main()
{
    function("Ritik", 19);      // Ritik Boii. 19 years old.
    function("Vansh", 19);      // Vansh Boii. 19 years old.
    function("Harshal", 18);    // Harshal Boii. 18 years old.
    function("Manas", 20);      // Manas Boii. 20 years old.
    return 0;
}