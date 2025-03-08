// binary search

#include <iostream>
#include <vector>

using namespace std;

int binarysearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, target;
    cin >> n;
    cout << "Enter the target element: ";
    cin >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = binarysearch(arr, target);
    cout << "result is:" << result;
    return 0;
}