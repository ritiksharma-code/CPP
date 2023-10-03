// Inheritance Access

#include <iostream>
using namespace std;

// Base Class
class Employee
{
    protected:      // Protected access specifier
        int salary;
};

// Derived class
class Programmer: public Employee
{
    public:
        int bonus;
        void setsalary(int s)
        {
            salary = s;
        }
        int getsalary()
        {
            return salary;
        }
};

int main()
{
    Programmer obj1;
    obj1.setsalary(50000);
    obj1.bonus = 15000;
    cout<<"Salary: "<<obj1.getsalary()<<"\n";
    cout<<"Bonus: "<<obj1.bonus<<"\n";
    return 0;
}