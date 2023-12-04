#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    // Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    if (a->next == NULL)
        cout << "(a->next == NULL)" << endl;
    a->next = b;
    b->next = c;
    c->next = d;
    Node *tem = a;
    Node *node = new Node(5);
    cout << node->val << endl;

    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    return 0;
}