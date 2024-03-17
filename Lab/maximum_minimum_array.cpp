#include <iostream>
#include <climits>
using namespace std;

void findMinMax(const int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty" << endl;
        return;
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    min = arr[0];
    int second = arr[0];
    
    for(int i = 0; i<n && arr[i]!=max; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>second)
        {
            second = arr[i];
        }

    }
    cout << "Second Maximum element: " << second << endl;
}

int main()
{
    int arr[] = {75,34,23,19,98,45,20,12,98};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, size);
    return 0;
}