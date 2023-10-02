// Pass Arrays as Function Parameters

#include <iostream>
#include <string>
using namespace std;

void function(int number[5])
{
    for(int i;i<5;i++)
    {
        cout<<number[i]<<"\n";
    }
}

int main()
{
    int number[5] = {10, 20, 30, 40, 50};
    function(number);
    return 0;
}