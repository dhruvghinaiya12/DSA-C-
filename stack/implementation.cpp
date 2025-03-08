#include <iostream>

using namespace std; 

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int n) {
        capacity = n;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top >= capacity - 1) {
            cout << "Stack Overflow!\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack.\n";
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow!\n";
            return -1;
        }
        cout << arr[top] << " popped from stack.\n";
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top < 0);
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    int n;
    cout << "Enter stack size: ";
    cin >> n;

    Stack s(n);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element is " << s.peek() << "\n";
    s.pop();
    s.display();
    cout << "Stack empty: " << (s.isEmpty() ? "Yes" : "No") << "\n";

    return 0;
}
