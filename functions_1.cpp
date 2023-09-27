#include <iostream>
using namespace std;

void function();    //function declaration

int main()
{
    function();     //function call
    return 0;
}

void function()     //function definition
{
    cout<<"I just got executed!";
}