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
Node *convertArrayToBST(vector<int> v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(v[mid]);

    Node *leftNode = convertArrayToBST(v, l, mid - 1);
    Node *rightNode = convertArrayToBST(v, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

void inOrder(Node *r)
{
    if (r == NULL)
        return;
    inOrder(r->left);
    cout << r->val << " ";
    inOrder(r->right);
}
void preOrder(Node *r)
{
    if (r == NULL)
        return;
    cout << r->val << " ";
    preOrder(r->left);
    preOrder(r->right);
}
int main()
{
    vector<int> v = {5, 6, 7, 8, 9, 10};
    Node *root = convertArrayToBST(v, 0, v.size());

    inOrder(root);
    cout << endl;
    preOrder(root);
    return 0;
}