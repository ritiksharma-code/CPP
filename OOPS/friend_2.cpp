#include <iostream>
using namespace std;

class first
{
    int n1;
    public: void firstnum()    
    {
        cout<<"Enter the first number: ";cin>>n1;
    }
    friend void add(first);
};

class second
{
    int n2;
    public: void secondnum()
    {
        cout<<"Enter the second number: ";cin>>n2;
    }
    friend void add(second);
};

class sum
{
    int total;
    void add(first f1, second f2)
    {
        cout<<"The sum is: "<<f1.n1;
    }

}

int main()
{
    
    return 0;
}