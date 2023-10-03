// Class method with parameters

#include <iostream>
using namespace std;

class car
{
    public:
    int speed(int maxspeed);
};

int car::speed(int maxspeed)
{
    return maxspeed;
}

int main()
{
    car obj1;
    cout<<obj1.speed(200);      // Call the method with an argument
    return 0;
}