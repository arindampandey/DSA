// Delete element from a specific position in a Singly Circular LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *tail, *temp;
void Delete_from_beginning();
int get_length();

void Delete_from_pos()
{
    Node *current, *nextnode;
    int pos, i = 1, l;
    current = tail->next;
    cout << "Enter the position : ";
    cin >> pos;
    l = get_length();
    if (pos < 1 || pos > l)
    {
        cout << "Invalid position !";
    }
    else if (pos == 1)
    {
        Delete_from_beginning();
    }
    else
    {
        while (i < pos - 1)
        {
            current = current->next;
            i++;
        }
        nextnode = current->next;
        current->next = nextnode->next;
        free(nextnode);
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
void Delete_from_beginning()
{
    temp = tail->next;
    if (tail == 0)
    {
        cout << "The list is empty !" << endl;
    }
    else if (temp->next == temp)
    {
        tail = 0;
        free(temp);
    }
    else
    {
        tail->next = temp->next;
        free(temp);
    }
    cout << "After the deleting the element from beginning : " << endl;
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

    Delete_from_pos();
    display();
}