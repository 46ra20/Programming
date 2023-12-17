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

void remove_nth(Node *&head, Node *cur, int val)
{
    int n = size(head), j = 0;
    if (n == val)
    {
        head = head->next;
        return;
    }
    while (cur)
    {
        if (j + 1 == n - val)
        {
            if (cur->next->next)
                cur->next = cur->next->next;
            else
            {
                cur->next = NULL;
                break;
            }
        }
        j++;
        cur = cur->next;
    }
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
    int sz = size(head), n;
    cin >> n;
    remove_nth(head, head, n);
    print_node(head);
    return 0;
}