#include <iostream>
#include <vector>
using namespace std;

vector<int> findCommonElements(const vector<int> &arr1, const vector<int> &arr2, const vector<int> &arr3)
{
    vector<int> commonElements;
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            commonElements.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return commonElements;
}
int main()
{
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> commonElements = findCommonElements(arr1, arr2, arr3);

    cout << "Common elements in the three arrays: ";
    for (int element : commonElements)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}