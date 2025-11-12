// Implementation of stack using LinkedList
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *top = 0;

void push(int x)
{
    Node *newnode = new Node;
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void pop()
{
    Node *temp;
    temp = top;
    if (top == 0)
    {
        cout << "Stack is underflow !" << endl;
    }
    else
    {
        cout << "The poped element is " << top->data << endl;
        top = top->link;
        free(temp);
    }
}

void display()
{
    Node *temp;
    temp = top;
    if (top == 0)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        while (temp != 0)
        {
            cout << temp->data << endl;
            temp = temp->link;
        }
    }
}

int main()
{
    int choice, a;
    do
    {
        cout << "Enter you choice :\n1.Push\n2.Pop\n3.Display " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data to push : ";
            cin >> a;
            push(a);
            break;
        case 2:
            pop();
            break;
        case 3:
            cout << "Stack : " << endl;
            display();
            break;
        default:
            cout << "Invalid Operation !! " << endl;
        }
    } while (choice != 0);
    return 0;
}
