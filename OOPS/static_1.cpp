#include <iostream>
using namespace std;

class parent
{
    public:
        static int a,b,c,d;
        static void read()
        {
            cout<<"Enter the values: "<<endl;
            cin>>a>>b>>c>>d;
        }
        static void show()
        {
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
            cout<<"d: "<<d<<endl;
        }
};

int parent::a=0;
int parent::b=0;
int parent::c=0;
int parent::d=0;

class child:public parent
{
    public:
        static void read()
        {
            cout<<"Enter the values: "<<endl;
            cin>>a>>b>>c>>d;
        }
        static void show()
        {
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
            cout<<"d: "<<d<<endl;
        }
        int addition(int v1, int v2)
        {
            cout<<"Addition: "<<v1+v2<<endl;
        }
        int multiplication(int v1, int v2)
        {
            cout<<"Multiplication: "<<v1*v2<<endl;
        }
};

int main()
{
    child obj1;
    obj1.read();
    obj1.show();
    obj1.addition(10,20);
    obj1.multiplication(10,20);
    return 0;
}