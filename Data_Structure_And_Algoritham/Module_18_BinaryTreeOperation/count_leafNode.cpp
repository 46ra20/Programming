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
        /// take root element from tree
        Node *takeFront = q.front();
        q.pop();

        /// take left and right node
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

        /// set left and right node
        takeFront->left = nLeft;
        takeFront->right = nRight;
        if (nLeft)
            q.push(nLeft);
        if (nRight)
            q.push(nRight);
    }
    return root;
}

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

int leaf_nodeCount(Node *root)
{
    if (root == NULL)
        return 0;
    if (!root->left && !root->right)
        return 1;
    else
    {
        int lf = leaf_nodeCount(root->left);
        int rf = leaf_nodeCount(root->right);
        return lf + rf;
    }
}
int main()
{
    Node *root = tree_input();
    printPreOrder(root);
    cout << endl
         << endl;
    int leaf_node = leaf_nodeCount(root);
    cout << leaf_node << endl;
    return 0;
}