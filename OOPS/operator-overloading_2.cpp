#include <iostream>
using namespace std;

class demooverload
{
    public:
        int v1, v2;
        demooverload(int a, int b)
        {
            this->v1=a;
            this->v2=b;
        }
        void operator-()
        {
            --v1;
            --v2;
            cout<<"The Decremented v1 is: "<<v1<<endl;
            cout<<"The Decremented v2 is: "<<v2<<endl;
        }
        void operator--(int)
        {
            v1--;
            v2--;
            cout<<"The Decremented v1 is: "<<v1<<endl;
            cout<<"The Decremented v2 is: "<<v2<<endl;
        }
};

int main()
{
    demooverload obj(100,200);
    -obj;
    cout<<endl;
    obj--;
    return 0;
}