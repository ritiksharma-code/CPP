// Return values with two parameters

#include <iostream>
#include <string>
using namespace std;

int function(int x, int y)
{
    return x+y;
}

int main()
{
    int z = function(5,3);
    cout<<z;
    //cout<<function(5,3);      We can use cout directly and we can also store the returned value in another variable such as z.
    return 0;
}