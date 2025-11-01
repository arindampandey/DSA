// Implementation of Doubly LinkList
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next, *previous;
};
Node *head = 0, *newnode, *temp;

void create()
{
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->previous = 0;
    newnode->next = 0;
    if (head == 0)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        newnode->previous = temp;
        temp = newnode;
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
    return 0;
}
