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
Node *arrayToBST(vector<int> v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(v[mid]);
    Node *leftNode = arrayToBST(v, l, mid - 1);
    Node *rightNode = arrayToBST(v, mid + 1, r);
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

void inSert(vector<int> &v)
{
    int currIdx = v.size() - 1;

    while (currIdx != 0)
    {
        int parrentIdx = (currIdx - 1) / 2;
        if (v[parrentIdx] < v[currIdx])
            swap(v[parrentIdx], v[currIdx]);
        currIdx = parrentIdx;
    }
}
int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};

    int x;
    cin >> x;
    v.push_back(x);

    inSert(v);
    // int x;
    cin >> x;
    v.push_back(x);

    inSert(v);
    for (int val : v)
        cout << val << " ";
    return 0;
}