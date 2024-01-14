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
void inOrder(Node *r)
{
    if (r == NULL)
        return;
    inOrder(r->left);
    cout << r->val << " ";
    inOrder(r->right);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    Node *r;
    r = new Node(v[0]);
    Node *tem = r;

    for (int i = 1; i < v.size(); i++)
    {
        Node *n = new Node(v[i]);
        tem->left = NULL;
        tem->right = n;
        tem = n;
    }
    inOrder(r);
    return 0;
}