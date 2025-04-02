#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        data = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }

    void insertAthead(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {

            cout << temp->data << "->";
            temp = temp->next;
        }
    };

    void removeAtHead()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
    }

    void removeAtTail()
    {
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        temp->next = nullptr;
    }

    int length()
    {
        int count = 0;
        Node *temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void insertAtAnyPosition(int value, int position)
    {
        Node *newNode = new Node(value);
        if (position <= 1)
        {
            insertAthead(value);
            return;
        }
        if (position >= length())
        {
            insertAtTail(value);
            return;
        }

        int i = 1;
        Node *temp = head;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void removeAtPosition(int position)
    {
        if (position <= 1)
        {
            removeAtHead();
            return;
        }
        if (position >= length())
        {
            removeAtTail();
            return;
        }
        int i = 1;
        Node *temp = head;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        Node *del = temp->next;
        temp->next = del->next;
        delete del;
    }
};
int main()
{
    LinkedList list;
    list.insertAthead(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
   
    return 0;
}
