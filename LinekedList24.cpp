// Insertion at a specific position in a Singly Circular LinkedList
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *tail = 0, *newnode, *temp;

void Insert_at_beginning();
int get_length();
void display();

void Insert_at_position()
{
    int pos, i = 1, l;
    cout << "Enter the position : ";
    cin >> pos;
    l = get_length();
    if (pos < 0 || pos > l)
    {
        cout << "Invalid position !!" << endl;
    }
    else if (pos == 1)
    {
        Insert_at_beginning();
    }
    else
    {
        Node *newnode = new Node;
        cout << "Enter data : ";
        cin >> newnode->data;
        newnode->next = 0;
        temp = tail->next;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        display();
    }
}

int get_length()
{
    int count = 1, x;
    temp = tail->next;
    while (temp->next != tail->next)
    {
        count++;
        temp = temp->next;
    }
    x = count;
    return x;
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
void Insert_at_beginning()
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

    Insert_at_position();
}