
// #include <iostream>
// using namespace std;

// class Queue
// {
// public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Queue(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         this->front = -1;
//         this->rear = -1;
//     }
//     void enQueue(int val)
//     {

//         if (this->front == -1 && this->rear == -1)
//         {
//             arr[++this->rear] = val;
//             this->front++;
//         }
//         else
//         {
//             arr[++this->rear] = val;
//         }
//     }

//     int dequeue()
//     {
//         }

//     int  getfront()
//     {
        
//         return arr[front];
//     }

//     int getrear()
//     {
//         return arr[rear];
//     }
// };

// int main()
// {

//     Queue *queue = new Queue(5);
//     queue->enQueue(10);
//     queue->enQueue(20);
//     queue->enQueue(30);
    
//  cout << "Front element: " << queue->getfront() << endl;
//     cout << "Rear element: " << queue->getrear() << endl;

//     return 0;
// }




#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }
    void enQueue(int val)
    {

        if (this->front == -1 && this->rear == -1)
        {
            arr[++this->rear] = val;
            this->front++;
        }
        else
        {
            arr[++this->rear] = val;
        }
    }

    int dequeue()
    {
        }

    int getfront()
    {
        // cout << arr[front];
        return arr[front];
    }

    int getrear()
    {
        return arr[rear];
    }
};

int main()
{

    Queue *queue = new Queue(5);
    queue->enQueue(10);
    queue->enQueue(20);
    queue->enQueue(30);
    cout << "Front element: " << queue->getfront() << endl;
    cout << "Rear element: " << queue->getrear() << endl;

    return 0;
}