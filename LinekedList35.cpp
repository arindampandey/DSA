// Delete element from a specific position in a Doubly Circular LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next, *previous;
};

Node *head = 0, *tail, *newnode;
void Delete_from_beginning();

void Delete_from_pos()
{
    int pos, i = 1;
    cout << "Enter the position : ";
    cin >> pos;
    if (pos == 1)
    {
        Delete_from_beginning();
    }
    else
    {
        Node *temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;
        free(temp);
    }
}

void Delete_from_beginning()
{
    Node *temp;
    temp = head;
    temp->next->previous = tail;
    tail->next = temp->next;
    head = temp->next;
    free(temp);
    cout << "After deleting the element from beginning : " << endl;
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

    Delete_from_pos();
    display();
}