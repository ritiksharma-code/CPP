// Accessing Multi Dimensional Array using loops

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<"\n";
        }
    }
    return 0;
}