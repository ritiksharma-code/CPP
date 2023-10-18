#include <iostream>
using namespace std;

class Order
{
    public:
        void display()
        {
            cout<<"Here the first class for order option.";
        }
};

class sunglass:public Order
{
    public:void showorder()
    {
        cout<<"Here sunglasses order by user - derived class demo.";
    }
};

class bag:public sunglass
{
};

int main()
{
    bag obj1;
    obj1.display();
    sunglass obj2;
    obj2.showorder();
    return 0;
}