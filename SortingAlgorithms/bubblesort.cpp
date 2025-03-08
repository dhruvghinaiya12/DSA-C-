#include <iostream>
#include <vector>

using namespace std;

void bubblesort(vector<int> arr) {  
    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = 0; j < arr.size() - 1 - i; j++) {  
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
     for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubblesort(arr);
    

    return 0;
}
