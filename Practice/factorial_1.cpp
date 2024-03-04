#include <iostream>
using namespace std;

double factorial(double n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    double a, b;
    cout << "Enter the range (a and b): ";
    cin >> a >> b;

    cout << "Factorial series between " << a << " and " << b << ":\n";
    for (double i = a; i <= b; ++i)
    {
        cout << "Factorial of " << i << ": " << factorial(i) << endl;
    }

    return 0;
}