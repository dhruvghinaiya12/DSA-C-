// 1. print character is alphabet or not
// 2. print character is uppercase or lowercase

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any character:"<<endl;
    cin>>ch;
    // if(ch>='A'&&ch<='Z' || ch>='a'&&ch<='z'){
    //     cout<<ch<<" is alphabet";
    // }
    // else if(ch>='0'&&ch<='9'){
    //     cout<<ch<<" is digit";
    // }
    // else{
    //     cout<<ch<<" is special character";
    // }

    if(ch>='a'&&ch<='z'){
        cout<<ch<<" is lowercase";
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<ch<<" is uppercase";
    }
    else{
        cout<<ch<<" is not character";
    }
    return 0;

}