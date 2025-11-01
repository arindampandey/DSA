// Delete element after a specific position
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *temp;

void Delete_after_position()
{
    Node *nextnode;
    int pos, i = 0;
    temp = head;
    cout << "Enter the position : ";
    cin >> pos;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
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
        cout << "Do you want to continue ? (0/1) : ";
        cin >> choice;
    } while (choice);
    Delete_after_position();
    display();
}