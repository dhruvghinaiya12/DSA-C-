#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int capacity;
    int *arr;
    Stack(int n)
    {
        capacity = n;
        arr = new int[capacity];
        top = -1;
    }
    void push(int value)
    {
        if (top >= capacity - 1)
        {
            cout << "Stack Overflow!";
            return;
        }
        arr[++top] = value;
        cout << value << endl;
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack overflow!";
            return -1;
        }
        cout << arr[top] << endl;
        return arr[top--];
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack Underflow!";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return (top < 0);
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!";
            return;
        }
        cout << "Stack elements " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element is " << s.peek() << endl;
    s.pop();
    s.display();

    return 0;
}