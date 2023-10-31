// Pass by Reference
/*In the examples from the previous pavge, we used normal variables when we passed parameters to a function.
You can also pass a "reference" to the function. This can be useful when you need to change the value of the argument.*/

#include <iostream>
#include <string>
using namespace std;

void swapnums(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    int firstnum = 10;
    int secondnum = 20;

    cout<<"Before swap: "<<"\n";
    cout<<firstnum<<" "<<secondnum<<"\n";

    // call the function, which will change the values of firstnum and secondnum.

    swapnums(firstnum, secondnum);

    cout<<"After swap: "<<"\n";
    cout<<firstnum<<" "<<secondnum<<"\n";
    return 0;
}