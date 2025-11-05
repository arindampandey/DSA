// Singly Circular LinkedList
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *head = 0, *newnode,*temp;

void create()
{
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    newnode->next = 0;
    if (head == 0)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    temp->next = head;
}

void display()
{
    if (head == 0)
    {
        cout << "The List Is Empty." << endl;
    }
    else
    {
        temp = head;
        while (temp->next != head)
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