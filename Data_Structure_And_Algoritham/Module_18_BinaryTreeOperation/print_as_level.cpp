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

void printPreOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printByLevel(Node *root)
{
    // if (root == NULL)
    //     return;
    queue<Node *> q;
    q.push(root);
    // cout << root->val << " ";
    while (!q.empty())
    {
        Node *getVal = q.front();
        q.pop();
        cout << getVal->val << " ";
        if (getVal->left)
            q.push(getVal->left);
        if (getVal->right)
            q.push(getVal->right);
    }
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;

    a->left = c;
    c->left = f;
    c->right = g;

    b->right = e;
    b->left = d;

    e->left = h;
    e->right = i;
    /// print binary tree as preOrder form
    printPreOrder(root);
    cout << endl
         << endl;
    printByLevel(root);
    return 0;
}