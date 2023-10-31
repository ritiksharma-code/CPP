#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the values of x and y: ";
    cin>>x>>y;
    cout<<"x: "<<x << "\ny: "<<y;
    cout<<"\nThe maximum number between x and y is: "<<max(x,y);            //Maximum
    cout<<"\nThe minimum number between x and y is: "<<min(x,y)<<"\n";      //Minimum
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The square root of that number is: "<<sqrt(a);       // Squareroot
    cout<<"\nEnter the number to roundoff: ";
    float b;
    cin>>b;
    cout<<"Round off is: "<<round(b);         // Roundoff
    return 0;
}
