#include <iostream>
using namespace std;

class Length
{
    public:
        int l;
    // Default Constructor
    Length()
    {
        l=100;
    }
};

int main()
{
    // Default constructor called when object is created
    Length obj;
    cout<<"line size is: "<<obj.l<<"\n";
    return 0;
}