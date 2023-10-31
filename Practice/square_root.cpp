#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter a number to find its square root: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            cout<<i;
        }
    }
    return 0;
}