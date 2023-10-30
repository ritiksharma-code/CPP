#include <iostream>
using namespace std;

class copy_const
{
    private:
    int v1, v2, v3;
    public:
    copy_const(int n1, int n2, int n3)
    {
        v1=n1;
        v2=n2;
        v3=n3;
        cout<<"demo for parametrized constructor"<<endl;
    }
    copy_const(copy_const &obj)     // copy constructor
    {
        v1=obj.v1;
        v2=obj.v2;
        v3=obj.v3;
    }
    void diaplay()
    {
        cout<<"variable1="<<v1<<endl;
        cout<<"variable2="<<v2<<endl;
        cout<<"variable3="<<v3<<endl;
    }
};

int main()
{
    copy_const c1(100, 200, 300);
    copy_const c2(c1);
    cout<<"here parametrized constructor"<<endl;
    c1.diaplay();
    cout<<"here call copy constructor"<<endl;
    c2.diaplay();
    return 0;
}