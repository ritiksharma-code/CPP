#include <iostream>
using namespace std;
int main()
{
    cout << "ASCII Characters and their Codes:" <<endl;
    for (int i = 0; i < 128; ++i)
    {
cout << "Character: " << static_cast<char>(i) << " ASCII code: " << i <<endl;
    }
    return 0;
}