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

void insert_at_any_position(Node *&head, Node *&tail, int val, int pos)
{
    int size = node_size(head);
    Node *newNode = new Node(val);
    if (pos > size)
        cout << "Invalid" << endl;
    else if (pos == 0)
    {
        head->pre = newNode;
        newNode->next = head;
        head = newNode;
    }
    else if (pos == size)
    {
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
    }
    else
    {
        Node *tem = head;
        for (int i = 1; i < pos; i++)
        {
            tem = tem->next;
        }
        newNode->next = tem->next;
        tem->next->pre = newNode;
        tem->next = newNode;
        newNode->pre = tem;
    }
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

    insert_at_any_position(head, tail, 12, 0);
    insert_at_any_position(head, tail, 12, 4);
    insert_at_any_position(head, tail, 12, 3);
    insert_at_any_position(head, tail, 17, 0);
    insert_at_any_position(head, tail, 8, 8);

    print_from_head(head);
    print_from_tail(tail);
    return 0;
}