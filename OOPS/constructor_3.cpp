#include <iostream>
using namespace std;

class def_const
{
    private:
        int v1, v2;
    public:
    def_const() // Define constructor
    {
        cout<<"default constructor with in clss & default call v1 and v2"<<endl;
        v1=1000, v2=2000;
    }
    void display()
    {
        cout<<"variabe v1="<<v1<<endl;
        cout<<"variabe v2="<<v2<<endl;
    }
};

int main()
{
    def_const obj1;
    obj1.display();
    return 0;
}