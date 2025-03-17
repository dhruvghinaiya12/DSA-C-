#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; 
    int newArr[n];
    
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[(i + k) % n];
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = newArr[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter k (rotation count): ";
    cin >> k;
    
    rotateArray(arr, n, k);
    cout << "Rotated array: ";
    printArray(arr, n);
    
    return 0;
}
