#include <iostream>
using namespace std;

class a1
{
    public:
        int x;
};

class b1:virtual public a1
{
    public:
        int y;
};

class c1:virtual public a1
{
    public:
        int z;
};

class d1:public c1, public b1
{
    public:
    int x1;
};

int main()
{
    d1 obj;
    obj.x=100;
    obj.y=20;
    obj.z=30;
    obj.x1=200;
    cout<<"X: "<<obj.x<<endl;
    cout<<"Y: "<<obj.y<<endl;
    cout<<"Z: "<<obj.z<<endl;
    cout<<"X1: "<<obj.x1<<endl;
    return 0;
}