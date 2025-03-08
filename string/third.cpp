// check string is anagrams or not
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


bool isAnagram(string str1, string str2){
if(str1.length()!=str2.length()){
    return false;
}   
sort(str1.begin(), str1.end());
cout << str1 ;

sort(str2.begin(), str2.end());
cout << str2 ;

return str1==str2;

}

int main(){
string str1;
string str2;

getline(cin, str1);
getline(cin, str2);

bool result=isAnagram(str1, str2);
cout<<result;

    return 0;
}