#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {20, 10, 30, 200, 10};

    sort(arr.begin(), arr.end());

    bool check = false;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            check = true;
            break;
        }
    }
    // cout<<check<<endl;
    if (check == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
