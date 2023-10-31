#include <iostream>
using namespace std;

class Userinfo
{
    public:
    char name[20];
    int id;
    int age;
    public:
    void readuser()
    {
        cout<<"Enter User Name: ";
        cin>>name;
        cout<<"Enter User ID: ";
        cin>>id;
        cout<<"Enter User Age: ";
        cin>>age;
    }
    void displayuser()
    {
        cout<<"UserName="<<name<<endl;
        cout<<"UserID="<<id<<endl;
        cout<<"UserAge="<<age<<endl;
    }
};

int main()
{
    class Userinfo u1;
    Userinfo *ptr;
    ptr=&u1;
    ptr->readuser();
    ptr->displayuser();
    return 0;
}