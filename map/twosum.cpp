#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

int arr[5]={10,20,3,5,71};
int t=23;
unordered_map<int,int>map;
for(int i=0;i<5;i++){
    if(map.find(t-arr[i])!=map.end()){
        cout<<map[t-arr[i]]<<"-"<<i<<endl;
        break;
    }
    else{
        map[arr[i]]=i;
    }
    
}
    return 0;
}