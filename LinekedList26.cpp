// Delete element from end in a Singly Circular LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *tail, *temp;

void Delete_from_end()
{
    Node *current, *previous;
    current = tail->next;
    if (tail == 0)
    {
        cout << "The list is empty !" << endl;
    }
    else if (current->next == current)
    {
        tail = 0;
        free(current);
    }
    else
    {
        while (current->next != tail->next)
        {
            previous = current;
            current = current->next;
        }
        previous->next = tail->next;
        tail = previous;
        free(current);
        cout << "After deleting the element from end : " << endl;
    }
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

    Delete_from_end();
    display();
}