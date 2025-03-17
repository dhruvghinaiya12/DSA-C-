#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    int n = arr.size();

    k = k % n;
    cout<<k;

    reverse(arr.begin(), arr.end());

    reverse(arr.begin(), arr.begin() + k);

    reverse(arr.begin() + k, arr.end());

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
