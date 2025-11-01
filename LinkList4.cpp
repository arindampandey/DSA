// Insertion after a given position in singly LinkList
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *temp;

void Insert_after_position()
{
    int pos, count = 0, i = 1;
    Node *newnode = new Node;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    cout << "Entre the position : ";
    cin >> pos;
    if (pos > count)
    {
        cout << "Invalid position !!";
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        cout << "Enter data : ";
        cin >> newnode->data;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void Insert_at_end()
{
    Node *newnode = new Node;
    cout << "Enter the data that you want to insert : ";
    cin >> newnode->data;
    newnode->next = 0;
    if (head == 0)
    {
        head = newnode;
        temp = head;
    }
    else
    {
        temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display()
{
    if (head == 0)
    {
        cout << "List is empty." << endl;
        return;
    }

    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice;
    do
    {
        Insert_at_end();
        cout << "Do you want to insert more? (1/0): ";
        cin >> choice;
    } while (choice);

    Insert_after_position();
    display();
    return 0;
}
