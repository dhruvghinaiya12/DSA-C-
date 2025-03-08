#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    // for(i=0;i<n;i++){
    //    if( arr[i]>max){
    //     max=arr[i];
    //    }
    // }
    // cout<<max<<endl;

    // for (i = 0; i < n; i++)
    // {
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }

    // cout << min << endl;

// for(i=n-1; i >= 0; i--){
//     cout<<arr[i]<<endl;
// }

    return 0;
}