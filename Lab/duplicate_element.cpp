#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findDuplicates(const vector<int> &arr)
{
    unordered_map<int, int> frequencyMap;

    for (int num : arr)
    {
        frequencyMap[num]++;
    }

    bool foundDuplicate = false;

    for (const auto &pair : frequencyMap)
    {
        if (pair.second > 1)
        {
            cout << "Duplicate found: " << pair.first << endl;
            foundDuplicate = true;
        }
    }

    if (!foundDuplicate)
    {
        cout << "No duplicates found." << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 2, 8, 6, 3, 7, 8, 4};
    findDuplicates(arr);
    return 0;
}