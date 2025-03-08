#include <iostream>

using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = result / arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}