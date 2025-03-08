#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<char> arr2 = {'a', 'b', 'c', 'd'};
    cout<<arr.size();

    for (char val : arr2)
    {
        cout << val << endl;
    }
    cout << arr.at(2) << endl;
    arr.push_back(6);
    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}