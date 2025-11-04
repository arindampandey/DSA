// Swapping of elements in a singly LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *temp;

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
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void swapElements(int x, int y)
{
    Node *ptr1 = head, *ptr2 = head;

    // Find the first node with data x
    while (ptr1 != 0 && ptr1->data != x)
        ptr1 = ptr1->next;

    // Find the second node with data y
    while (ptr2 != 0 && ptr2->data != y)
        ptr2 = ptr2->next;

    // If either x or y is not found
    if (ptr1 == 0 || ptr2 == 0)
    {
        cout << "One or both elements not found!" << endl;
        return;
    }

    // Swap their data
    int temp = ptr1->data;
    ptr1->data = ptr2->data;
    ptr2->data = temp;
}

int main()
{
    int choice, ch, a, b;
    do
    {
        Insert_at_end();
        cout << "Do you want to insert more? (1/0): ";
        cin >> choice;
    } while (choice);
    do
    {
        cout << "Enter two nodes that you want to swap : ";
        cin >> a >> b;
        swapElements(a, b);
        cout << "Do you want to swap more ? (1/0): ";
        cin >> ch;
    } while (ch);
    cout << "LinkedList after swapping the elements : " << endl;
    display();
    return 0;
}