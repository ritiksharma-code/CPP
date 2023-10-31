// Create a structure variable called structure

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct {
        int num;
        string str;
    }structure;

    // Assign values to members of structure
    structure.num = 1;
    structure.str = "Hello World!";
    
    // Print members of structure
    cout<<structure.num<<"\n";
    cout<<structure.str<<"\n";
    return 0;
}