#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    for (int i = 0; i < arr.size(); i++) {
        int num = 1;  
        for (int j = 0; j < arr.size(); j++) {
            if (j != i) {
                num *= arr[j];
            }
        }
        cout<<num<<endl;
    }

    return 0;
}
