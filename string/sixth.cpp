// generate all possible substrings

#include<iostream>
#include<string>

using namespace std;

void SubStirngs(string str){
    for(int i=0;i<str.length();i++){
            string substr="";
        for(int j=i;j<str.length();j++){
            substr+=str[j];
            cout<<substr<<endl;
        }
    }
}


int main(){
string str;
getline(cin,str);

SubStirngs(str);

    return 0;
}