// Finding the length of a singly Link List
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *temp;

void get_length()
{
    int count = 0;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    cout << "The length of the Link List is : " << count << endl;
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

int main()
{
    int choice;
    do
    {
        Insert_at_end();
        cout << "Do you want to continue ? (0/1) : ";
        cin >> choice;
    } while (choice);

    get_length();
    return 0;
}
