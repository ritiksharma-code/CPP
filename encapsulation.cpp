/* Encapsulation is to make sure that "sensitive" data is hidden from users.
   To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
   If you want to read or modify the value of a private memeber, you can provide public get and set methods. */

// To access a private attribute, use public "get" and "set" methods.

#include <iostream>
using namespace std;

class Employee
{
    private:
        // Private attribute
        int salary;
    public:
        // Setter
        void setsalary(int s)
        {
            salary = s;
        }
        // Getter
        int getsalary()
        {
            return salary;
        }
};

int main()
{
    Employee obj1;
    obj1.setsalary(50000);
    cout<<obj1.getsalary();
    return 0;
}