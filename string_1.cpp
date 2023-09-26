// C++ uses '+' for both addition and concatenation. Numbers are added and Strings are concatenated.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string first_name = "Ritik";
    string last_name = "Sharma";
    cout<<first_name + " " + last_name + "\n";         // String Concatenation
    string full_name = first_name.append(last_name);                 // Append
    cout<<full_name;
    return 0;
}