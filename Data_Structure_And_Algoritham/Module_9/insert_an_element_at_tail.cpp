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

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    head->next = a;
    a->next = b;
    b->next = c;
    c->pre = b;
    b->pre = a;
    a->pre = head;
    insert_at_tail(tail, 90);
    insert_at_tail(tail, 00);
    insert_at_tail(tail, 70);

    print_from_head(head);
    print_from_tail(tail);
    return 0;
}