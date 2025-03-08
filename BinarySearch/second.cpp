// binary search using recursion 

#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>arr,int start,int end,int target){
if(start>end){
    return -1;
}
int mid=(start+end)/2;

if(arr[mid]==target){
    return mid;
}
else if(arr[mid]>target){
    return binarySearch(arr,start,mid-1,target);
}
else{
    return binarySearch(arr,mid+1,end,target);
}

}

int main()
{
    int n, target,start=0;
    cin >> n;
    cout << "Enter the target element: ";
    cin >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int end=arr.size()-1;
    int result=binarySearch(arr,start,end,target);
    cout<<result;
    
    return 0;
}