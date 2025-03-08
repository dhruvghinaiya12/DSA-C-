#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int i, n,k, crsum = 0, maxsum = INT_MIN;
cin>>k;
    cin >> n;
    if(k>n){
        cout<<"Invalid input. k should be less than or equal to n."<<endl;
        return 0;
    }
    vector<int> arr(n);
    for (i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<k;i++){
    crsum+=arr[i];
    }
    cout<<crsum<<endl;
    maxsum=crsum;

    for(i=k;i<arr.size();i++){
        crsum+=arr[i]-arr[i-k];
        if(crsum>maxsum){
            maxsum=crsum;
        }
    }
    cout<<maxsum<<endl;

    return 0;
}