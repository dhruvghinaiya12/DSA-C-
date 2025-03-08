#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    vector<int> arr = {10, 20, -30, -100, 100, 200};
    int maxsum = INT_MIN;
    int currentsum = 0;

    for (int i=0; i<arr.size(); i++)
    // for (int val:arr)
    {
        currentsum += arr[i];
        // currentsum += val;
        if (currentsum > maxsum)
        {
            maxsum = currentsum;
        }
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }

    cout << "Maximum sum of a subarray is: " << maxsum;
    return 0;
}