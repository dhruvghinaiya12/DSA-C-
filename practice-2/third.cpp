#include <iostream>
#include <vector>

using namespace std;

int duplicate(vector<int> &arr)
{
    int index = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[index] = arr[i];
            cout << index;
            index++;
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = duplicate(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}