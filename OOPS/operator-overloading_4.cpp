#include <iostream>
using namespace std;

class demooverload
{
    public:
        int count;
    
    public:
        demooverload():count(50){}
        //Overload++ when used as prefix
        void operator--()
        {
            --count;
        }

        void show()
        {
            cout<<"Counter variable: "<<count<<endl;
        }
};

int main()
{
    demooverload obj;
    --obj;
    obj.show();
    return 0;
}