#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int capacity;
    int* arr;

    Stack(int n){
        capacity =n;
        arr = new int[capacity];
        top = -1;
    }
    void push(int value){
        if(top >= capacity - 1){
            cout<<"Stack Overflow!";
            return;
        }
        arr[++top] = value;
    }
    int pop(){
        if(top < 0){
            cout<<"Stack Underflow!";
            return -1;
        }
        return arr[top--];
    }
    
};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;

    return 0;
}