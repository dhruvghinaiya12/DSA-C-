#include <iostream>
using namespace std;

class Queue
{
    public:
    int front;
    int rear;
    int capacity;
    int *arr;
    Queue(int n)
    {
        front = -1;
        rear = -1;
        capacity = n;
        arr = new int[capacity];
    }
    void enqueue(int value)
    {
        if (front == -1 && rear == -1)
        {
            arr[++rear] = value;
            front++;
        }
        else
        {
            arr[++rear] = value;
        }
    }
       void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        else
        {
            cout << "Dequeued element is " << arr[front] << endl;
            front++;
        }
    }
    int getFront()
    {
        return arr[front];
    }
    int getrear()
    {
        return arr[rear];
    }
    int isEmpty()
    {
        return (front == -1 && rear == -1);
    }
 
    int size()
    {
        return (rear - front + 1);
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{

    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getrear() << endl;
    cout << "Size of queue: " << q.size() << endl;
    q.display();
    q.dequeue();
    q.display();
    

    return 0;
}