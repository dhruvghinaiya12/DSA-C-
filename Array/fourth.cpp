#include <iostream>
using namespace std;

int result[2] = {-1, -1};

void findpair(int arr[], int n, int t) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                result[0] = i;
                result[1] = j;
                return; 
            }
        }
    }
}

int main() {
    int arr[] = {10, 12, 50, 1, 100};
    int t;
    cin >> t;
    findpair(arr, 5, t);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
