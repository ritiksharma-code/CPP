#include <iostream>
using namespace std;

class DemoConst
{
    private:
        int n1, n2, n3;
    public:
    int i;
    DemoConst(void); // Declaration of constructor
    void display()
    {
        cout<<"number1 is: "<<n1<<"number2 is: "<<n2<<"number3 is: "<<n3;
    }
};

DemoConst::DemoConst(void)  // Define constructor
{
    cout<<"numbers here calling to constructor";
    i=4, n1=10, n2=20, n3=30;
}

int main()
{
    DemoConst i;
    i.display();
    return 0;
}
