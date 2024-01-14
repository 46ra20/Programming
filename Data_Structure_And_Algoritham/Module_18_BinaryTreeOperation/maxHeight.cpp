#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int v;
    Node *left;
    Node *rihgt;
    Node(int v)
    {
        this->v = v;
        this->rihgt = NULL;
        this->left = NULL;
    }
};
Node *tree_input()
{
    int x;
    cin >> x;
    Node *root;
    queue<Node *> q;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);
    if (root)
        q.push(root);
    while (!q.empty())
    {

        // take parent from queqe
        Node *takeFront = q.front();
        q.pop();

        // take value for children
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

        // set vale in parent node
        takeFront->left = nLeft;
        takeFront->rihgt = nRight;

        /// push in queue for next parent
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
        return;
    cout << root->v << " ";
    printPreOrder(root->left);
    printPreOrder(root->rihgt);
}
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int lf = maxHeight(root->left);
    int rf = maxHeight(root->rihgt);
    return max(lf, rf) + 1;
}
int main()
{
    Node *root = tree_input();
    printPreOrder(root);

    int leaf = maxHeight(root);
    cout << endl
         << leaf << endl;
    return 0;
}