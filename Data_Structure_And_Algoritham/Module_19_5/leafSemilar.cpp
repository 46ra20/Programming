#include <bits/stdc++.h>
using namespace std;
vector<int> v;
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
void allLeaf(Node *r)
{
    if (r == NULL)
        return;
    if (!(r->left or r->right))
    {
        v.push_back(r->val);
    }
    if (r->left)
        allLeaf(r->left);
    if (r->right)
        allLeaf(r->right);
}

int main()
{
    Node *root = intpuNode();

    allLeaf(root);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}