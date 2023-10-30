#include <iostream>
using namespace std;

class paraconst
{
    private:
    int v1, v2, v3;
    public:
    paraconst(int n1, int n2, int n3)
    {
        v1=n1;
        v2=n2;
        v3=n3;
        cout<<"demo for parametrized constructor"<<endl;
    }
    void display()
    {
        cout<<"variable 1="<<v1<<endl;
        cout<<"variable 2="<<v2<<endl;
        cout<<"variable 3="<<v3<<endl;
    }
};

int main()
{
    paraconst pc1(90,80,70);
    pc1.display();
    return 0;
}