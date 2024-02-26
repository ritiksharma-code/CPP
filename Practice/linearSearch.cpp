#include <iostream>
using namespace std;

int main()
{
    int arr[50], size, number, flag=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the number to find: ";
    cin>>number;
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
        if(arr[i]==number)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"Number found!"<<endl;
    }
    else
    {
        cout<<"Not Found!"<<endl;
    }
    return 0;
}