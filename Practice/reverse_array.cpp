#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nReverse order:"<<endl;
    for(int i=(n-1); i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}