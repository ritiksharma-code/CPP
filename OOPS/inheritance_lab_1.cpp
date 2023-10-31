#include <iostream>
using namespace std;

class simple1
{
    public:
        void display()
        {
            cout<<"Display super class function\n";
        }
};

class simple2:public simple1
{
    public:
        void show()
        {
            cout<<"Show base class function\n";
        }
};

int main()
{
    simple1 obj1;
    obj1.display();
    simple2 obj2;
    obj2.show();
    return 0;
}