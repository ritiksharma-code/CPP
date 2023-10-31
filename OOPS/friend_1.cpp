// To access non-member function by using friend function

#include <iostream>
using namespace std;

class userinfo
{
    char name[20];
    int userID;
    float salary;
    public: void read()
    {
        cout<<"Enter Name: ";cin>>name;
        cout<<"Enter USER ID: ";cin>>userID;
        cout<<"Enter Salary: ";cin>>salary;
    }
    friend void display(userinfo);
    // Friend Function Declaration
};

void display(userinfo ui)   // Friend Function access private data
{
    cout<<"Details of User & Salary: "<<ui.userID<<" "<<ui.salary;
}

int main()
{
    userinfo obj;
    obj.read();
    display(obj);
    return 0;       // Calling of Friend Function + obj-argument
}