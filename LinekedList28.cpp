// Reversing of a Singly Circular LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *tail, *temp;

void reverse()
{
    Node *current, *previous, *nextnode;
    current = tail->next;
    nextnode = current->next;
    if (tail == 0)
    {
        cout << "The list is empty ! " << endl;
    }
    else
    {
        while (current != tail)
        {
            previous = current;
            current = nextnode;
            nextnode = current->next;
            current->next = previous;
        }
        nextnode->next = tail;
        tail = nextnode;
    }
    cout << "After reversing : " << endl;
}

void create()
{
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

void display()
{
    if (tail == 0)
    {
        cout << "The List Is Empty." << endl;
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
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
