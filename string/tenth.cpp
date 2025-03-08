// check string is pallindtrome or not


#include<iostream>
#include<string>

using namespace std;

bool ispalindrome(string str){
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

void substring(string str){
    for(int i=0;i<str.length();i++){
        string substr="";
        for(int j=i;j<str.length();j++){
           substr+=str[j];
           if(ispalindrome(substr)){
                cout<<substr;
           }

        }
    }

 
}

int main(){

string str;


cin>>str;

substring(str);


    return 0;
}
