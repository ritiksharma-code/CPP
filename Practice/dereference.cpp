#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food;

    cout<<ptr<<"\n";    // Reference: Output: memory address of food with pointer
    
    cout<<*ptr<<"\n";   // Dereference: Output: value of food with the pointer
    return 0;
}