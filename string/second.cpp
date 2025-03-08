// check string is Palindrome or not


#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string str){
    int i=0;
    int j=str.length()-1;

    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;

}

void SubStirngs(string str){
    string longest="";
    for(int i=0;i<str.length();i++){
            string substr="";
        for(int j=i;j<str.length();j++){
            substr+=str[j];
            if(substr.length()>longest.length() && isPalindrome(substr)){
                longest=substr;
            }

        }
    }
    cout<<"Longest palindrome substring: "<<longest<<endl;
    
}



int main(){

string str;

cout<<"Enter a string: ";
getline(cin,str);


//  bool result=ispalindrome(str);
//  cout<<result;
SubStirngs(str);
    return 0;
}
