#include <iostream>
#include <string>
using namespace std;
int main()
{
    int time;
    cout<<"Enter the time: ";
    cin>>time;
    /* if(time<18)
    {
        cout<<"Good Day!";
    }
    else
    {
        cout<<"Good Evening!";
    } */

    string condition = (time<18)?"Good Day!":"Good Evening!";
    cout<<condition;
    return 0;
}