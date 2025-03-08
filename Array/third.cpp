// find the second largest element in the array


#include<iostream>
using namespace std;

int main(){
int i,n;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
int first=0, second=0;

for(i=0;i<n;i++){
    if(arr[i]>first){
        second=first;
        first=arr[i];
    }
    else if(arr[i]>second && arr[i]!=first){
        second=arr[i];
    }
}
if(first==second){
    cout<<"No second largest number found"<<endl;
}
else{
cout<<"Second largest number is "<<second<<endl;
}


    return 0;
}