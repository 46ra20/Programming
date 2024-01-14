#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int size(Node *n)
{
    int c = 0;
    while (n != NULL)
    {
        c++;
        n = n->next;
    }
    return c;
}
void insert(Node *&h)
{
    Node *n = new Node(20);
    Node *tem = h;
    for (int i = 1; i < 4; i++)
    {
        tem = tem->next;
    }
    // cout<<tem->val;
    Node *d = tem->next;
    tem->next = tem->next->next;
    delete d;
    cout << tem->val << endl;
}
int main()
{
    Node *h = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);

    h->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node *tem = h;
    insert(h);
    cout << endl;

    while (tem)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    return 0;
}