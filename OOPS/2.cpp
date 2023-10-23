#include <iostream>
using namespace std;

// Base Class
class account
{
    public:
        void display()
        {
            cout<<"\nAccount - Base Class\n";
        }
};

// 1st Derived Class
class saving:public account
{
    public:
        void display1()
        {
            cout<<"\nDerived Class Block: Savings\n";
        }
};

// 2nd Derived Class
class current:protected account
{
    public:
        void display2()
        {
            cout<<"\nThird class: Current\n";
        }
};

// 3rd Derived Class
class loan: private account
{
    public:
        void display3()
        {
            cout<<"\nFourth class: Loan\n";
        }
};

int main()
{
    account obj1;
    obj1.display();
    saving obj2;
    obj2.display1();
    current obj3;
    obj3.display2();
    loan obj4;
    obj4.display3();
    return 0;
}