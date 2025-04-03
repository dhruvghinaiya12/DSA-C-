#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string str;
    cin>>str;
  
    unordered_map<char,int> map;
  for(char c : str){
    if(map.find(c)!=map.end()){
        map[c]++;
    }
    else{
        map[c]=1;
    }
  }
  for(auto &i : map){
    cout<<i.first<<" "<<i.second<<endl;
  }
 
    return 0;
}