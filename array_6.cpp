#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}