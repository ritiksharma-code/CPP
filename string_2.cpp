// String length and size
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt = "Hello World";
    cout<<txt + "\n";
    cout<<"The length of the string is: " << txt.length() << "\n";
    cout<<"The size of the string is: " << txt.size() << "\n";
    cout<<txt[2];
    txt[10]= '!';
    cout<<"\n"<<txt;
    cout<<"We are so called \"Vikings\" from the north";
    return 0;
}