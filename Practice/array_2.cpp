// Multiple Dimensional Arrays

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    string b[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };

    cout<<a[0][2]<<"\n";
    a[0][0] = "Z";
    cout<<a[0][0];
    return 0;
}