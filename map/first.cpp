#include <iostream>
#include<unordered_map>

using namespace std;
int main()
{
    string str="racecar";
    unordered_map<char,int>map;
//   for(int i=0;i<str.length();i++){

//     if(map.find(str[i])!=map.end()){
//         map[str[i]]+=1;
//     }
//     else{
//         map[str[i]]=1;
//     }
//   }

for(char c:str){
    if(map.find(c)!=map.end()){
        // map[c]+=1;
        map[c]++;
    }
    else{
        map[c]=1;
    }
}

  for(auto i:map){
    cout<<i.first<<"--"<<i.second<<endl;
  }


    return 0;
}