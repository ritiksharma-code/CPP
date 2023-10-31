#include <iostream>
using namespace std;

class Userinfo
{
    public:
    char name[20];
    int id;
    int age;
};

int main()
{
    class Userinfo ui = {"Ravi", 111, 35};
    Userinfo *ptr;
    ptr=&ui;
    cout<<"User Name="<<ptr->name<<endl;
    cout<<"User id="<<ptr->id<<endl;
    cout<<"User Age="<<ptr->age<<endl;
    return 0;
}