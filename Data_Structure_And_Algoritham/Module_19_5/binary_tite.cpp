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
Node *intpuNode()
{
    int x;
    cin >> x;
    queue<Node *> q;
    Node *root;
    if (x == -1)
        return NULL;
    else
    {
        root = new Node(x);
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *nLeft, *nRight;
        if (l == -1)
            nLeft = NULL;
        else
        {
            nLeft = new Node(l);
            q.push(nLeft);
        }
        if (r == -1)
            nRight = NULL;
        else
        {
            nRight = new Node(r);
            q.push(nRight);
        }

        if (nLeft)
            f->left = nLeft;
        if (nRight)
            f->right = nRight;
    }
    return root;
}

int sumLeft(Node *r)
{
    queue<Node *> q;
    int ans = 0;
    if (r == NULL)
        return 0;
    q.push(r);
    while (!q.empty())
    {
        Node *f = q.front();
        ans += f->val;

        q.pop();
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return ans;
}
int main()
{
    Node *root = intpuNode();

    int x, y;
    if (root->left)
        x = sumLeft(root->left);
    cout << endl;
    if (root->right)
        y = sumLeft(root->right);
    cout << endl
         << abs(x - y);
    return 0;
}