#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_node(Node *&head, Node *&tail, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    tail = n;
    return;
}
void remove_match(Node *&head, int val)
{
    Node *tem = head;
    while (tem->next != NULL)
    {
        if (tem->next->val == val)
        {
            Node *d = tem->next;
            tem->next = tem->next->next;
            delete d;
        }
        else
            tem = tem->next;
    }
    if (head->val == val)
    {
        head = head->next;
    }
    return;
}
void print_node(Node *n)
{
    // cout << n->val << " ";
    while (n != NULL)
    {
        cout << n->val << " ";
        n = n->next;
    }
    return;
}
int size(Node *head)
{
    int x = 0;
    while (head != NULL)
    {
        x++;
        head = head->next;
    }
    return x;
}
void remove_nth(Node *&head, int nth)
{
    if (head == NULL)
        return;

    Node *tem = head;
    int sz = size(head);
    if (sz - 1 == nth)
        nth -= 1;
    if (tem->next == NULL && nth == 1)
        head = NULL;
    else if (nth < sz)
    {
        for (int i = 0; i < nth; i++)
        {
            tem = tem->next;
        }
        Node *d = tem->next;
        tem->next = tem->next->next;
        delete d;
    }
    // cout << tem->val << endl;
    return;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        else
        {
            insert_node(head, tail, x);
        }
    }
    int val;

    // remove_match(head, val);
    // cin >> val;
    // remove_nth(head, val);

    Node *head2 = NULL, *tail2 = NULL;
    int x = 0;
    while (head->next != NULL)
    {
        x += head->next->val;
        if (head->next->val == 0)
        {
            insert_node(head2, tail2, x);
            x = 0;
        }
        head = head->next;
    }

    print_node(head);
    cout << endl;
    print_node(head2);
    return 0;
}