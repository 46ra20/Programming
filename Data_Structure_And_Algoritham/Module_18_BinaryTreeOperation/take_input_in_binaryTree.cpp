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

void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}

void printPostOrder(Node *root)
{
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->val << " ";
}

void printLevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *takeFront = q.front();
        q.pop();
        cout << takeFront->val << " ";
        if (takeFront->left)
            q.push(takeFront->left);
        if (takeFront->right)
            q.push(takeFront->right);
    }
}

int main()
{
    Node *root = tree_input();
    printPreOrder(root);
    cout << endl
         << endl;
    printInOrder(root);
    cout << endl
         << endl;
    printPostOrder(root);
    cout << endl
         << endl;
    printLevelOrder(root);
    return 0;
}