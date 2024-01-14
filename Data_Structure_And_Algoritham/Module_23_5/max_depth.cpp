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
        this->right = NULL;
        this->left = NULL;
    }
};
int maxDepth(Node *r)
{
    queue<pair<Node *, int>> q;
    q.push({r, 1});
    while (!q.empty())
    {
        pair<Node *, int> qf = q.front();
        q.pop();
        cout << qf.first->val << " " << qf.second << endl;
        if (qf.first->left)
            q.push({qf.first->left, qf.second + 1});
        if (qf.first->right)
            q.push({qf.first->right, qf.second + 1});
    }
    return 0;
}
int main()
{
    Node *r = new Node(3);
    Node *a = new Node(9);
    Node *b = new Node(20);
    Node *c = new Node(15);
    Node *d = new Node(7);

    r->left = a;
    r->right = b;
    b->left = c;
    b->right = d;
    maxDepth(r);
    return 0;
}