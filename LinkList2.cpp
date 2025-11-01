// Insertion at beginning
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = 0;

void Insert_at_beginning()
{
    Node *newnode = new Node;
    cout << "Enter the data that you want to insert : ";
    cin >> newnode->data;
    newnode->next = head;
    head = newnode;
}

void display()
{
    Node *temp = head;
    if (temp == 0)
    {
        cout << "List is empty." << endl;
        return;
    }

    cout << "\nLinked List elements are:\n";
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
        Insert_at_beginning();
        cout << "Do you want to insert more? (1/0): ";
        cin >> choice;
    } while (choice);

    display();
    return 0;
}
