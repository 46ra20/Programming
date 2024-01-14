#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node() {}
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void insertNode(Node *&root, int x)
{
    if (root == NULL)
        root = new Node(x);
    // cout << root->val << " ";
    if (x < root->val)
    {
        if (root == NULL)
            root->left = new Node(x);
        else
            insertNode(root->left, x);
    }
    else if (x > root->val)
    {
        if (root == NULL)
            root->right = new Node(x);
        else
            insertNode(root->right, x);
    }
    return;
}

void inOrder(Node *r)
{
    if (r == NULL)
        return;
    inOrder(r->left);
    cout << r->val << " ";
    inOrder(r->right);
}

int main()
{
    Node *root = new Node(80);

    Node *a = new Node(60);
    Node *c = new Node(55);
    Node *g = new Node(50);
    Node *h = new Node(57);

    Node *d = new Node(70);
    Node *i = new Node(68);
    Node *j = new Node(72);

    Node *b = new Node(90);
    Node *e = new Node(85);
    Node *f = new Node(100);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;
    c->left = g;
    c->right = h;

    d->left = i;
    d->right = j;

    b->left = e;
    b->right = f;

    inOrder(root);
    cout << endl;

    insertNode(root, 10);
    insertNode(root, 20);
    insertNode(root, 30);
    inOrder(root);
    return 0;
}