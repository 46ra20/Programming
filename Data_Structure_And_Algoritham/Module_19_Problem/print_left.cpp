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
void level_order(Node *r, int x)
{
    if (r == NULL)
        return;
    queue<Node *> q;
    q.push(r);
    int c = 0;
    bool fg = false;
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *f = q.front();
            if (i == 0)
                cout << f->val << " ";
            q.pop();
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
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
    Node *x = new Node(110);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;

    b->right = e;

    c->left = f;
    c->right = g;

    e->left = h;
    e->right = i;

    i->left = x;

    level_order(root, 50);

    return 0;
}