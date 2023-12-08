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
void insertNode(Node *&head, Node *&tail, int val)
{
    Node *x = new Node(val);
    if (head == NULL)
    {
        head = x;
        tail = x;
        return;
    }
    tail->next = x;
    tail = x;
    return;
}

void removeDuplicate(Node *&head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (i->val == j->next->val)
            {
                // cout << j->val << " " << j->next->val << endl;
                Node *dNode = j->next;
                j->next = j->next->next;
                delete dNode;
            }
            else
                j = j->next;
        }
    }
    return;
}
void printNode(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
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
            break;
        else
        {
            insertNode(head, tail, x);
        }
    }
    removeDuplicate(head);
    printNode(head);
    return 0;
}