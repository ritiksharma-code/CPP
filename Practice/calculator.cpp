#include <iostream>
using namespace std;

class variable
{
    public:
    int a, b, ch;
};

int main()
{   variable obj;  
    cout<<"\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n5. Exit\nEnter your choice: ";
    cin>>obj.ch;
    cout<<"\nEnter the first number: ";
    cin>>obj.a;
    cout<<"\nEnter the second number: ";
    cin>>obj.b;
    switch(obj.ch)
    {
        case 1:
            cout<<"The addition of "<<obj.a<<" & "<<obj.b<<" is: "<<obj.a+obj.b;
            break;
        case 2:
            cout<<"The subtraction of "<<obj.a<<" & "<<obj.b<<" is: "<<obj.a-obj.b;
            break;
        case 3:
            cout<<"The Division of "<<obj.a<<" & "<<obj.b<<" is: "<<obj.a/obj.b;
            break;
        case 4:
            cout<<"The multiplication of "<<obj.a<<" & "<<obj.b<<" is: "<<obj.a*obj.b;
            break;
        case 5:
            exit(0);
        default:
            cout<<"Invalid choice!";
            break;
    }
    return 0;
}