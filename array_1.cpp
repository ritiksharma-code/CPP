// Accessing an array using loops

#include <iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};

    /* for (int i=0; i<(sizeof(arr)/sizeof(int));i++)
    {
        cout<<arr[i]<<"\n";
    } */
    // We can also use foreach loop to access the element of the array

    for(int i:arr)
    {
        cout<<i<<"\n";
    }
    // NOTE: foreach loops are exclusively made for accessing the elements of the array
    return 0;
}


