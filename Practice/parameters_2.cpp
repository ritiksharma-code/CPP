// Default Parameter Value

#include <iostream>
#include <string>
using namespace std;

void function(string country = "Norway")
{
    cout<<country<<"\n";
}

int main()
{
    function("Sweden");     // Output: Sweden
    function("India");      // OUtput: India
    function();             // OUtput: Norway
    function("USA");        // Output: USA
    return 0;
}