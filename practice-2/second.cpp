// remove element


#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector <int>arr={0,1,2,3,2,4,2};
    int val=2;
    vector<int>result;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=val){
            result.push_back(arr[i]);
        }
    }

    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }

    return 0;
}

