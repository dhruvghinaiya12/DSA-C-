#include <iostream>
#include <vector>

using namespace std;

void selectionsort(vector<int>& arr,int n){
    for(int i=0;i<n-1;i++){
   int smallindex=i;
   for(int j=i+1;j<n;j++){
if(arr[j]<arr[smallindex]){
    smallindex=j;
}
   }
   swap(arr[i],arr[smallindex]);
    }   
}

void print(vector<int>& arr,int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}

int main() {
   int n=5;
    vector<int> arr={4,1,5,2,3};
 selectionsort(arr,n);
 print(arr,n);
    return 0;
}
