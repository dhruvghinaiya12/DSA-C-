// reverse string 

#include<iostream>
#include<string>

using namespace std;


string ReverseString(string str){
int i=0;
int j=str.length()-1;

while(i<j){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
 i++;
 j--;
}
return str;
}


int main(){
string str;
getline(cin,str);

cout<<ReverseString(str);

    return 0;
}