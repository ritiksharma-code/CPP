#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food;

    cout<<food<<"\n";   //Output: Pizza

    cout<<&food<<"\n";  //Output: address of food

    cout<<*ptr<<"\n";   //Output: Pizza

    *ptr = "Hamburger"; 

    cout<<*ptr<<"\n";   //Output: Hamburger

    cout<<food<<"\n";   //Output: Hamburger

    return 0;
}