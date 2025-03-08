//  print longest word in string 

#include<iostream>
#include<string>

using namespace std;

void LongestWord(string str){
  string longword="";
   for(int i=0;i<str.length();i++){
    string word="";
    while(i<str.length() && str[i]!=' '){
        word+=str[i];
        i++;
    }
    if(word.length()>longword.length()){
        longword=word;
    }
  
   }
  cout<<"Longest word: "<<longword<<endl;
}

int main(){
string str;
  string longestWord = "";
getline(cin, str);

LongestWord(str);
  
    return 0;
}