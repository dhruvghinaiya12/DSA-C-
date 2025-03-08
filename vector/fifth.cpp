#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the size of the subarray (k): ";
    cin >> k;

    if (k > n) {
        cout << "Invalid input: Subarray size cannot be greater than the array size." << endl;
        return 0;
    }

    int maxSum = INT_MIN, curSum = 0;

    for (int i = 0; i < k; i++) {
        curSum += arr[i];
    }
    maxSum = curSum;

    for (int i = k; i < n; i++) {
        curSum += arr[i] - arr[i - k];
        if (curSum > maxSum) {
            maxSum = curSum;
        }
    }

    cout << "Maximum sum of subarrays of size " << k << " is: " << maxSum << endl;

    return 0;
}
