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

Node *tree_input()
{
    int r;
    queue<Node *> q;
    cin >> r;
    Node *root;
    if (r == -1)
        root = NULL;
    else
        root = new Node(r);
    if (root)
        q.push(root);
    while (!q.empty())
    {

        Node *takeFront = q.front();
        q.pop();

        int l, r;
        Node *nLeft, *nRight;
        cin >> l >> r;
        if (l == -1)
            nLeft = NULL;
        else
            nLeft = new Node(l);

        if (r == -1)
            nRight = NULL;
        else
            nRight = new Node(r);

        takeFront->left = nLeft;
        takeFront->right = nRight;
        if (nLeft)
            q.push(nLeft);
        if (nRight)
            q.push(nRight);
    }
    return root;
}
int count(Node *root)
{
    // int c;
    if (root == NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
int main()
{
    Node *root = tree_input();
    int ans = count(root);
    cout << ans << endl;
    return 0;
}