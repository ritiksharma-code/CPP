// This is foreach loop. It is exclusively used to loop through the elements in the array.

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i:arr)
    {
        cout<<i<<"\n";
    }
    return 0;
}