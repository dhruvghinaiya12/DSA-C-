//  find the largest three elements in an array.

#include<iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

int first=0,second=0,third=0;

    for(i=0;i<n;i++){
        if(arr[i]>first){
         third=second;
         second=first;
         first=arr[i];
    }
    else if(arr[i]>second){
        third=second;
        second=arr[i];
    }
    else if(arr[i]>third){
        third=arr[i];
    }
    }
    cout<<"first: "<<first<<endl;
    cout<<"second: "<<second<<endl;
    cout<<"third: "<<third<<endl;

    return 0;
}