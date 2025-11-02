// Insertion after a specific position
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next, *previous;
};
Node *head = 0, *newnode, *tail, *temp;

void Insert_after_position()
{
    int pos, i = 1;
    cout << "Enter the position : ";
    cin >> pos;

    temp = head;
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    newnode->previous = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->previous = newnode;
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
        temp = head;
        while (temp != 0)
        {
            cout << temp->data << endl;
            temp = temp->next;
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
    Insert_after_position();
    display();
    return 0;
}