#include <iostream>
using namespace std;

class sample1
{
    int a,b;
    public:
    friend class sample2;   // Declaring friend class
    void getdata1()
    {
        cout<<"Enter A & B values in class sample1: ";
        cin>>a>>b;
    }
    void display1()
    {
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
    }
};

class sample2
{
    //public:
    int c, d, sum;
    sample1 obj1;
    public:
    public:
    void getdata2()
    {
        obj1.getdata1();
        obj1.display1();
        cout<<"Enter C & D values in class sample2: ";
        cin>>c>>d;
    }
    void sum2()
    {
        sum=obj1.a+obj1.b+c+d;
    }
    void display2()
    {
        cout<<"A="<<obj1.a<<endl;
        cout<<"B="<<obj1.b<<endl;
        cout<<"C="<<c<<endl;
        cout<<"D="<<d<<endl;
        cout<<"SUM="<<sum<<endl;
    }
};


int main()
{
    //sample1 s1;
    //s1.getdata1();
    //s1.display1();
    sample2 s2;
    s2.getdata2();
    s2.sum2();
    s2.display2();
    return 0;
}