#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main()
{
    int i, n, crsum = 0, maxsum = INT_MIN;

    cin >> n;

    vector<int> arr(n);

    for (i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < arr.size(); i++)
    {
        crsum += arr[i];

        if (crsum > maxsum)
        {
            maxsum = crsum;
        }
        if (crsum < 0)
        {
            crsum = 0;
        }
    }

    cout << "Maximum contiguous sum is " << maxsum << endl;

    return 0;
}