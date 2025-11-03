// Delete element from end in doubly LinkedList
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next, *previous;
};
Node *head = 0, *newnode, *tail, *temp;

void Delete_from_end()
{
    if (tail == 0)
    {
        cout << "List is empty.";
    }
    else
    {
        temp = tail;
        tail = tail->previous;
        tail->next = 0;
        free(temp);
    }
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
    Delete_from_end();
    cout << "After deleting element from end : ";
    display();
    return 0;
}