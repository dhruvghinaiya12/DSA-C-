#include<iostream>
#include<stack>
using namespace std;
bool checkparantheses(stack<char>s,string str){
if(str.length()%2!=0){
    return false;
}
for(int i=0;i<str.length();i++){
    char c=str[i];
    if(c=='('||c=='['||c=='{'){
        s.push(c);
    }
    else if(!s.empty()){
        char top=s.top();
        if(top=='(' && c==')'||top=='[' && c==']'||top=='{' && c=='}'){
            s.pop();
        }
        else{
            return false;
        }

    }
    else{
        return false;
    }
}
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }

}
int main(){
stack<char> s;
string str;

cout<<"Enter the expression: ";
cin>>str;

bool result=checkparantheses(s,str);

if(result){
    cout<<"Valid expression";
}
else{
    cout<<"Invalid expression";
}

    return 0;
}