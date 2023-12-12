#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

int node_size(Node *s)
{
    int count = 0;
    Node *tem = s;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}

void delete_node(Node *&head, Node *&tail, int pos)
{
    int size = node_size(head);
    if (size == 1)
    {
        head = NULL;
        tail = NULL;
        return;
    }
    if (pos >= size)
        cout << "Invalid" << endl;
    else if (pos == 0)
    {
        Node *dNote = head;
        head->next->pre = NULL;
        head = head->next;
        delete dNote;
    }
    else if (pos == size - 1)
    {
        Node *dNote = tail;
        tail->pre->next = NULL;
        tail = tail->pre;
        delete dNote;
    }
    else
    {
        Node *tem = head;
        for (int i = 1; i < pos; i++)
        {
            tem = tem->next;
        }
        Node *dNote = tem->next;
        tem->next->next->pre = tem;
        tem->next = tem->next->next;
        delete dNote;
        // cout << tem->val << endl;
    }
    return;
}
void print_from_head(Node *h)
{
    Node *tem = h;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
    return;
}
void print_from_tail(Node *t)
{
    Node *tem = t;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->pre;
    }
    cout << endl;
    return;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = e;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->pre = d;
    d->pre = c;
    c->pre = b;
    b->pre = a;
    a->pre = head;

    // delete_node(head, tail, 3);
    // delete_node(head, tail, 1);
    // delete_node(head, tail, 0);
    // delete_node(head, tail, 0);
    delete_node(head, tail, 3);

    print_from_head(head);
    print_from_tail(tail);
    return 0;
}