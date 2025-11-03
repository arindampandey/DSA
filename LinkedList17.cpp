// Delete element from a specific position in doubly LinkedList
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next, *previous;
};
Node *head = 0, *newnode, *tail, *temp;

void Delete_from_beginning();

void Delete_from_pos()
{
    int pos, i = 1;
    temp = head;
    cout << "Enter the position : ";
    cin >> pos;
    if (pos == 1)
    {
        Delete_from_beginning();
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;
        free(temp);
    }
    cout << "After deleting element from the " << pos << " position : " << endl;
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

void Delete_from_beginning()
{
    temp = head;
    head = head->next;
    head->previous = 0;
    free(temp);
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
    Delete_from_pos();
    display();
    return 0;
}