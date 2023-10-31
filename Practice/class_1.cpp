// Classes and Objects
// Class is a user defined data type

#include <iostream>
#include <string>
using namespace std;

class MyClass      // Class
{
    public:     // Access specifier
    // Properties
    string str;     // Attribute (string variable)
    int num;         // Attribute (int variable)
    //char level;         // Attribute (char variable)

};

int main()
{
    MyClass MyObj;        //creation of object of hero type
    // cout<<"size: "<<sizeof(MyObj)<<endl; 

    MyObj.num = 15;
    MyObj.str = "Ritik Sharma";

    cout<<MyObj.num<<"\n";
    cout<<MyObj.str;

    return 0;
}