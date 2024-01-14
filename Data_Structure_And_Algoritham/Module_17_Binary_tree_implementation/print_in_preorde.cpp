#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void print_preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    print_preOrder(root->left);
    print_preOrder(root->right);
}

void print_postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_postOrder(root->left);
    print_postOrder(root->right);
    cout << root->val << " ";
}

void print_inOrder(Node *root)
{
    if (root == NULL)
        return;
    print_inOrder(root->left);
    cout << root->val << " ";
    print_inOrder(root->right);
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(60);
    Node *e = new Node(70);
    Node *f = new Node(80);
    Node *g = new Node(90);
    Node *h = new Node(100);
    Node *i = new Node(50);

    root->left = a;
    a->left = c;
    c->right = f;
    a->right = d;
    d->left = g;

    root->right = b;
    b->right = e;
    e->left = h;
    e->right = i;

    // call
    print_preOrder(root);
    cout << endl;
    print_postOrder(root);
    cout << endl;
    print_inOrder(root);

    return 0;
}
