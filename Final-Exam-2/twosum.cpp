
#include <iostream>
#include <vector>

using namespace std;

vector<int> findPair(vector<int> arr, int n, int t)
{
    int result[] = {-1, -1};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

// bool findPair(vector<int> arr, int n, int t)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == t)
//             {
//                 cout << arr[i] << arr[j] << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cout << "Enter the target sum: ";
    cin >> t;
    // bool found = findPair(arr, n, t);

    vector<int> result = findPair(arr, n, t);
    cout<<result[0]<< result[1]<<endl;

    return 0;
}