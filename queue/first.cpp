#include <iostream>
#include <queue>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int size)
    {
        arr = new int[size];
        this->front = -1;
        this->rear = -1;
        this->size = size;
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
    int getFront()
    {
        return arr[front];
    }
    int getrear()
    {
        return arr[rear];
    }

  int getSize()
    {
        return rear - front + 1;
    }

    void dequeue()
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
};

int main()
{
    Queue *q = new Queue(5);
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    cout << "Front element: " << q->getFront() << endl;
    cout << "Rear element: " << q->getrear() << endl;

    // q->dequeue();
    // cout << "Front element: " << q->getFront() << endl;
    // cout << "Rear element: " << q->getrear() << endl;

    cout << "Size of queue: " << q->getSize() << endl;

    return 0;
}