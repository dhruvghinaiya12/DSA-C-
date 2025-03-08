#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {1,3,4,5};

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i+1] != arr[i] + 1) {
            cout << "Missing number is: " << arr[i] + 1 << endl;
            break;
        }
        else{
            cout << "No missing number found." << endl;
            break;
        }

    }

    return 0;
}
