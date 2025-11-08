// Reversing a Doubly Circular LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next, *previous;
};

Node *head = 0, *tail;

void reverse()
{
    if (head == 0)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *current = head;
    Node *temp = NULL;

    do
    {
        temp = current->next;
        current->next = current->previous;
        current->previous = temp;
        current = current->previous;
    } while (current != head);

    temp = head;
    head = tail;
    tail = temp;
    cout << "After reversing : " << endl;
}

void create()
{
    Node *nextnode;
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    if (head == 0)
    {
        head = tail = newnode;
        head->next = head;
        head->previous = head;
    }
    else
    {
        tail->next = newnode;
        newnode->previous = tail;
        newnode->next = head;
        head->previous = newnode;
        tail = newnode;
    }
}

void display()
{
    Node *temp;
    temp = head;
    if (head == 0)
    {
        cout << "List is empty ! " << endl;
    }
    else
    {
        while (temp != tail)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
}

int main()
{
    int choice;
    do
    {
        create();
        cout << "Do you want to continue ? (0/1) : ";
        cin >> choice;
    } while (choice);
    display();

    reverse();
    display();
}