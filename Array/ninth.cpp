#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int i, n, k, crsum = 0, minsum = INT_MAX;
    cin >> k;
    cin >> n;
    if (k > n || k <=0 || n <=0)
    {
        cout << "Invalid input. k should be less than or equal to n." << endl;
        return 0;
    }
    vector<int> arr(n);
    for (i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < k; i++)
    {
        crsum += arr[i];
    }
    minsum = crsum;
    for (i = k; i < arr.size(); i++)
    {
        crsum += arr[i] - arr[i - k];
        if (crsum < minsum)
        {
            minsum = crsum;
        }
    }
    cout << "minimum contiguous sum is " << minsum << endl;

    return 0;
}