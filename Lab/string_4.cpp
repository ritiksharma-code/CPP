#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[10];
    int i;
    cout << "enter your name: ";
    cin.getline(name, 11);
    cout << "your name is: " << name << endl;
    return 0;
}