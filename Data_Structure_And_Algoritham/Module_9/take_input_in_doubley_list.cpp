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
void take_input(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *tem = tail;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            take_input(head, tail, x);
        }
    }

    print_from_head(head);
    print_from_tail(tail);
    return 0;
}