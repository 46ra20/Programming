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
void swap_value(Node *&head, int k)
{
    int sz = size(head), k_next = sz - k;
    Node *tem = head, *tem_2 = head;
    for (int i = 1; i < k; i++)
    {
        tem = tem->next;
    }
    for (int i = 0; i < k_next; i++)
    {
        tem_2 = tem_2->next;
    }
    swap(tem->val, tem_2->val);
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
    int k;
    cin >> k;
    swap_value(head, k);
    print_node(head);
    return 0;
}