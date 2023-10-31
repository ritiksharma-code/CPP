#include <iostream>
using namespace std;

class addition
{
    public:
    int v1, v2;
    float v3, v4;
    void read()
    {
        /* cout<<"Enter the first number: ";
        cin>>v1;
        cout<<"Enter the second number: ";
        cin>>v2;
        cout<<"Enter the third number: ";
        cin>>v3;
        cout<<"Enter the foutth number: ";
        cin>>v2; */
    }
    void add(int v1, int v2)
    {
        int sum;
        sum=v1+v2;
        cout<<"The sum is: "<<sum;
    }
    void add(int v1, int v2, int v3)
    {
        int sum;
        sum=v1+v2+v3;
        cout<<"The sum is: "<<sum;
    }
};

int main()
{
    addition obj1;
    // obj1.read();
    obj1.add(10, 20, 30);
    return 0;
}