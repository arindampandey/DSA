// Insertion at end in a Doubly Circular LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next, *previous;
};

Node *head = 0, *tail, *newnode;
void Insert_at_beginning();

void Insert_at_pos()
{
    int pos, i = 1;
    Node *temp;
    temp = head;
    Node *newnode = new Node;
    cout << "Enter the position : ";
    cin >> pos;
    if (pos == 1)
    {
        Insert_at_beginning();
    }
    else
    {
        cout << "Enter data : ";
        cin >> newnode->data;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->previous = temp;
        newnode->next = temp->next;
        temp->next->previous = newnode;
        temp->next = newnode;
    }
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

void Insert_at_beginning()
{
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    if (head == 0)
    {
        head = tail = newnode;
        newnode->previous = tail;
        newnode->next = head;
    }
    else
    {
        newnode->next = head;
        head->previous = newnode;
        newnode->previous = tail;
        tail->next = newnode;
        head = newnode;
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
    Insert_at_pos();
    display();
}