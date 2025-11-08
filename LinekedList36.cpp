// Swapping of two elements in Doubly Circular Linkedlist
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next, *previous;
};

Node *head = 0, *tail;

void swap(int x, int y)
{
    if (head == 0)
    {
        cout << "List is empty!" << endl;
        return;
    }

    if (x == y)
    {
        cout << "Both values are same, nothing to swap." << endl;
        return;
    }

    Node *first = NULL, *second = NULL;
    Node *temp = head;

    // Traverse circular list to find x and y
    do
    {
        if (temp->data == x)
            first = temp;
        if (temp->data == y)
            second = temp;

        temp = temp->next;
    } while (temp != head);

    if (first == NULL || second == NULL)
    {
        cout << "One or both values not found!" << endl;
        return;
    }

    // Swap data
    int t = first->data;
    first->data = second->data;
    second->data = t;
    cout << "List after swapping : " << endl;
}

void create()
{
    Node *nextnode;
    Node *newnode = new Node;
    cout << "Enter data : ";
    cin >> newnode->data;
    if (head == 0)
    {
        head = tail = newnode;
        head->next = head;
        head->previous = head;
    }
    else
    {
        tail->next = newnode;
        newnode->previous = tail;
        newnode->next = head;
        head->previous = newnode;
        tail = newnode;
    }
}

void display()
{
    Node *temp;
    temp = head;
    if (head == 0)
    {
        cout << "List is empty ! " << endl;
    }
    else
    {
        while (temp != tail)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
}

int main()
{
    int choice, a, b;
    do
    {
        create();
        cout << "Do you want to continue ? (0/1) : ";
        cin >> choice;
    } while (choice);

    cout << "Enter the values to swap : " << endl;
    cin >> a >> b;
    swap(a, b);
    display();
}