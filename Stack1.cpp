#include <iostream>
using namespace std;

int Stack[5];
int top = -1;

void push()
{
    int x;
    cout << "Enter data : ";
    cin >> x;
    if (top >= 4)
    {
        cout << "Stack is overflow !" << endl;
    }
    else
    {
        top++;
        Stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        cout << "Stack is underflow ! " << endl;
    }
    else
    {
        item = Stack[top];
        top--;
        cout << "The element " << item << " poped from the stack ." << endl;
    }
}

void display()
{
    int i;
    cout << "Stack : " << endl;
    for (i = top; i >= 0; i--)
    {
        cout << Stack[i] << endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "Enter you choice :\n1.Push\n2.Pop\n3.Display " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            cout << "Invalid Operation !! " << endl;
        }
    } while (choice != 0);
    return 0;
}