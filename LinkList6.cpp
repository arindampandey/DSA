// Delete element from end
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *temp;

void Delete_from_end()
{
    Node *PreviousNode;
    temp = head;
    while (temp->next != 0)
    {
        PreviousNode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        PreviousNode->next = NULL;
    }
    free(temp);
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
    Delete_from_end();
    display();
}