// Implementation of Singly Circular LinkedList Using Only a Single Pointer(tail)
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *tail = 0, *newnode;

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
    Node *temp;
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
        cout << temp->data;
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