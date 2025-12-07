// Implementation of a Binary Tree.
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *create()
{
    int x;
    Node *newnode = new Node;
    cout << "Enter data (-1 for no node): ";
    cin >> x;
    if (x == -1)
    {
        return 0;
    }
    newnode->data = x; 
    cout << "For left child of " << x << " : " << endl;
    newnode->left = create();
    cout << "For right child of " << x << " : " << endl;
    newnode->right = create();
    return newnode;
}

int main()
{
    Node *root = 0;
    root = create();
    return 0;
}
