#include <iostream>
using namespace std;
int main()
{
    int choice;
    struct Node
    {
        int data;
        Node *next;
    };

    Node *head = 0, *newnode, *temp;
    while (choice)
    {
        Node *newnode = new Node;
        cout << "Enter data :";
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
        struct Node
        {
            int data;
            Node *next;
        };

        cout << "Do you want to continue ? (0/1) :";
        cin >> choice;
    }
    temp = head;

    while (temp != 0)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
