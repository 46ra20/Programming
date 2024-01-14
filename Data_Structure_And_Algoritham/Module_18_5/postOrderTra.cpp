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

// vector<int> postOrder(Node *root)
// {
//     vector<int> v;
//     if (root == NULL)
//         return v;
//     postOrder(root->left);
//     postOrder(root->right);
//     v.push_back(root->val);
//     return v;
// }
vector<int> v;
void postOrder(Node *root)
{
    // vector<int> v;
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    v.push_back(root->val);
    // cout << root->val << " ";
}

void LevelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *fget = q.front();
        cout << fget->val << " ";
        q.pop();
        if (fget->left)
            q.push(fget->left);
        // if (fget->right)
        //     q.push(fget->right);
    }
}

int leafNode(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        int lf = leafNode(root->left);
        int rf = leafNode(root->right);
        return lf + rf;
    }
}
int main()
{

    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;

    a->left = c;
    a->right = d;
    b->right = e;

    c->left = f;
    c->right = g;

    e->left = h;
    e->right = i;

    postOrder(root);
    // vector<int> v = postOrder(root);
    // cout << v.size();
    int ans = leafNode(root);
    cout << endl
         << ans << endl;
    LevelOrder(root);
    return 0;
}