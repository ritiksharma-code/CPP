#include <iostream>
using namespace std;

int main()
{
    int arr[50], size, sum=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of array is: "<<sum<<endl;
    return 0;
}