#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 12, 50, 190, 200};
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0, left = 0, right = n - 1; i < n; i++) {
        if (i % 2 == 0) {
            cout << arr[left++] << " "; 
        } else {
            cout << arr[right--] << " "; 
        }
    }

    return 0;
}
