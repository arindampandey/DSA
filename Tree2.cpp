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

void PreOrder(Node *root)
{
    if (root == 0)
    {
        return;
    }
    cout << root->data << endl;
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node *root)
{
    if (root == 0)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << endl;
    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if (root == 0)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << endl;
}

int main()
{
    Node *root = 0;
    root = create();
    cout << "Pre Order is : " << endl;
    PreOrder(root);
    cout << "In Order is : " << endl;
    InOrder(root);
    cout << "Post Order is : " << endl;
    PostOrder(root);
    return 0;
}