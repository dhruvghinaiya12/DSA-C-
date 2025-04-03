#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insert(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
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
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    LinkedList reverse()
    {
        LinkedList newList;
        Node *temp = head;

        while (temp)
        {
            Node *newNode = new Node(temp->data);
            newNode->next = newList.head;
            newList.head = newNode;
            temp = temp->next;
        }

        return newList;
    }
};

int main()
{
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Linked List: ";
    list.display();
    LinkedList reversedList = list.reverse();
    cout << "Reversed Linked List: ";
    reversedList.display();

    return 0;
}
