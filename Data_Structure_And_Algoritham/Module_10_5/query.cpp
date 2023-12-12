#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *previous;

    Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
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
    n->next = head;
    head->previous = n;
    head = n;
}
void insert_at_tail(Node *&tail, int val)
{
    Node *n = new Node(val);
    tail->next = n;
    n->previous = tail;
    tail = n;
}
void insert_at_any_position(Node *&head, int x, int val)
{
    Node *n = new Node(val);
    Node *tem = head;
    for (int i = 1; i < x; i++)
    {
        tem = tem->next;
    }
    n->next = tem->next;
    tem->next->previous = n;
    n->previous = tem;
    tem->next = n;
}

int nSize(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void print_node(Node *head, Node *tail)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->previous;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, val;
        cin >> x >> val;
        int size = nSize(head);
        if (x > size)
            cout << "Invalid" << endl;
        else
        {
            if (x == 0)
            {
                insert_node(head, tail, val);
            }
            else if (x == size)
            {
                insert_at_tail(tail, val);
            }
            else
            {
                insert_at_any_position(head, x, val);
            }

            print_node(head, tail);
        }
    }

    return 0;
}