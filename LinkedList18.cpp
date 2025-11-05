// Reversing the Doubly LinkedList
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next, *previous;
};
Node *head = 0, *newnode, *tail, *temp, *nextnode, *current;
;

void reverse()
{
    current = head;
    while (current != 0)
    {
        nextnode = current->next;
        current->next = current->previous;
        current->previous = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
    cout << "LinkedList after reversing : " << endl;
}

void create()
{
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->previous = 0;
    newnode->next = 0;
    if (head == 0)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->previous = tail;
        tail = newnode;
    }
}

void display()
{
    if (head == 0)
    {
        cout << "The linklist is empty!!";
    }
    else
    {
        current = head;
        while (current != 0)
        {
            cout << current->data << endl;
            current = current->next;
        }
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
    return 0;
}