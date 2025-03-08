// reverse words in string

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void reverse_words_in_string(string str){
string ans="";
for(int i=0;i<str.length();i++){
    string word="";
    while(i<str.length() &&  str[i]!=' '){
       word+=str[i];
       i++;
    }
    reverse(word.begin(),word.end());
    if(word.length()>0){
        ans+=' '+word;
    }
}
cout<<ans.substr(1)<<endl;
}


int main(){
 
 string str,ans="";

 getline(cin,str);

reverse(str.begin(),str.end());

// for(int i=0;i<str.length();i++){
//     string word="";
//     while(i<str.length() && str[i]!=' '){
//         word+=str[i];
//         i++;
//     }
// reverse(word.begin(),word.end());

// if(word.length()>0){
// ans+=' '+ word;
// }

// }
// cout<<ans.substr(1);

reverse_words_in_string(str);

    return 0;
}