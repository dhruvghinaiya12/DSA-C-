#include <iostream>
#include <vector>

using namespace std;

// int upperbound(vector<int> arr, int t, int i, int j)
// {
//     int start = i, end = j;
//     int ans = -1;
//     if(t<arr[0]){
//         return -1;
//     }
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == t)
//         {
//             return mid;
//         }
//         else if (arr[mid] > t)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             ans = mid;

//             start = mid + 1;
//         }
//     }
//     return ans+1;
// }


int upeerbound(vector<int> &arr, int t){
    int st=0,end=arr.size();
    while(st<end){
        int mid=st+(end-st)/2;
       if(arr[mid]>t){
        end=mid;
       }
       else{
        st=mid+1;
       }
    }
    return st;
}


int main()
{
    int n, t;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> t;

    // int result = upperbound(arr, t,0,n);
    // cout << "Upper bound index is: " << result << endl;
    int result = upeerbound(arr, t);
    cout << "Upper bound index is: " << result << endl;

    return 0;
}
