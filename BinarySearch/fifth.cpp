#include <iostream>
#include <vector>

using namespace std;

int lowerbound(vector<int> arr,int t){
    int st=0,end=arr.size();
    while(st<end){
        int mid=st+(end-st)/2;
        if(arr[mid]>=t){
            end=mid;
        }
        else{
            st=mid+1;
        }
    }
    return st;
}

int main(){

int n,t;

cout<<"enter size of array"<<endl;
cin>>n;

vector<int> arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter target value"<<endl;
cin>>t;

int result=lowerbound(arr,t);
cout<<result<<endl;

    return 0;
}