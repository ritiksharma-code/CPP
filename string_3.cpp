// String input and use of getline() function

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the string: ";
    // cin>>name;
    // cout<<name;         // Its not going to print the full name because cin does not count white spaces.
    getline(cin, name);    // To include blank space in your cin you will have to use getline function. syntax -- getline(cin, variable)
    cout<<name;            // cin will be the first parameter in getline() function and variable is going to be the second parameter.
    return 0;
}