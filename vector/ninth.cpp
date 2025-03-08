// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// int main() {
//     vector<int> arr1 = {10, 20, 30, 60};
//     vector<int> arr2 = {1, 15, 25};
//     vector<int> result;

//     for (int i = 0; i < arr1.size(); i++) {
//         result.push_back(arr1[i]);
//     }

//     for (int i = 0; i < arr2.size(); i++) {
//         result.push_back(arr2[i]);
//     }
    
//     for(int i = 0; i < result.size();i++){
//         for(int j = 0; j < result.size(); j++){
//             if(result[i] < result[j]){
//                 swap(result[i], result[j]);
//             }

//         }

//     }
//     for (int num : result) {
//         cout << num << " ";
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {10, 20, 30, 60};
    vector<int> arr2 = {1, 15, 25};
    vector<int> result;

    for (int i = 0; i < arr1.size(); i++) {
        result.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++) {
        result.push_back(arr2[i]);
    }

    for (int i = 0; i < result.size(); i++) {
        for (int j = i + 1; j < result.size(); j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
