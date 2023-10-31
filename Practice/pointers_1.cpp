// Assigning pointer variable and storing a memory address of another variable

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food;

    cout<<food<<"\n";   // Prints the value inside food variable

    cout<<&food<<"\n";  // Prints the memory address of food variable

    cout<<ptr<<"\n";    // Prints the memory address of food variable
    return 0;
}