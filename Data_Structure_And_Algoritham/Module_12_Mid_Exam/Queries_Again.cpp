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
void insert_node_at_head(Node *&head, Node *&tail, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head->pre = n;
    head = n;
}
void insert_node_at_tail(Node *&tail, int val)
{
    Node *n = new Node(val);
    tail->next = n;
    n->pre = tail;
    tail = tail->next;
    return;
}
void insert_node_at_any_position(Node *&head, int x, int v)
{
    Node *n = new Node(v);
    Node *tem = head;
    for (int i = 1; i < x; i++)
        tem = tem->next;
    n->next = tem->next;
    tem->next->pre = n;
    tem->next = n;
    n->pre = tem;
}
int n_size(Node *size)
{
    int c = 0;
    while (size != NULL)
    {
        c++;
        size = size->next;
    }
    return c;
}
void print_node(Node *right_way, Node *reverse_way)
{
    cout << "L -> ";
    while (right_way != NULL)
    {
        cout << right_way->val << " ";
        right_way = right_way->next;
    }
    cout << endl
         << "R -> ";
    while (reverse_way != NULL)
    {
        cout << reverse_way->val << " ";
        reverse_way = reverse_way->pre;
    }
    cout << endl;
}
int main()
{
    int q;
    cin >> q;
    Node *head = NULL, *tail = NULL;
    while (q--)
    {
        int x, v, size;
        size = n_size(head);
        cin >> x >> v;
        if (x > size)
            cout << "Invalid" << endl;
        else if (x == 0)
        {
            insert_node_at_head(head, tail, v);
            print_node(head, tail);
        }
        else if (x == size)
        {
            insert_node_at_tail(tail, v);
            print_node(head, tail);
        }
        else
        {
            insert_node_at_any_position(head, x, v);
            print_node(head, tail);
        }
    }
    return 0;
}