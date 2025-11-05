// Implementation of Singly Circular LinkedList Using Two Pointers(head and tail)
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *head = 0, *tail = 0, *newnode, *temp;

void create()
{
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->next = 0;
    if (head == 0)
    {
        head = tail = newnode;
        // tail->next = head;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
        // tail -> next = head;
    }
    tail->next = head;
}

void display()
{
    if (head == 0)
    {
        cout << "The List Is Empty." << endl;
    }
    else
    {
        temp = tail->next;
        do
        {
            cout << temp->data << endl;
            temp = temp->next;
        } while (temp != head);
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
}