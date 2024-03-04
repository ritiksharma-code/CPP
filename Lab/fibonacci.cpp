// Program to print n numbers in fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int n, i, a=0, b=1, c;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}