
#include <iostream>
#include <vector>

using namespace std;

int binarysearch(vector<int> arr, int t)
{
    int st = 0, end = arr.size() - 1;
    ;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == t)
        {
            return mid;
        }
        if (arr[st] <= arr[mid])    {
            if (arr[st] <= t && t <= arr[mid])
            {
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else{
            if (arr[mid] <= t && t <= arr[end])
            {
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    
    }
    return -1;  
}

int main()
{
    int n, t;
    cin >> n;
    cout << "Enter the target element: ";
    cin >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int result = binarysearch(arr, t);
    cout << "result is at index: " << result << endl;
    

    return 0;
}