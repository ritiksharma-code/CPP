#include <iostream>
using namespace std;

class demo
{
    int v1,v2;
    public:
        void read(int v1, int v2)
        {
            this->v1=v1;
            this->v2=v2;
        }
        void show()
        {
            cout<<"V1="<<v1<<endl;
            cout<<"V2="<<v2<<endl;
        }
};

int main()
{
    demo dobj;
    dobj.read(100,200);
    dobj.show();
    return 0;
}