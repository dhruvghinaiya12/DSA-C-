#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int top=s.top();
    s.pop();
    insertAtBottom(s,value);
    s.push(top);
}
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Original Stack: "<<endl;
    print(s);
    insertAtBottom(s,40);
    cout<<"After Insertion: "<<endl;
    print(s);
  
    return 0;
}