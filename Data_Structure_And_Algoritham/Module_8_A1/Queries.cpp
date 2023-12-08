#include <bits/stdc++.h>
using namespace std;
int pos = 0;
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
void insertNodeatHead(Node *&head, int val)
{
    Node *x = new Node(val);
    if (head == NULL)
    {
        head = x;
        pos++;
        return;
    }
    x->next = head;
    head = x;
    pos++;
}

void insertNodeatTail(Node *&tail, int val)
{
    Node *x = new Node(val);
    if (tail == NULL)
    {
        tail = x;
        pos++;
        return;
    }
    Node *tem = tail;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = x;
    tem = x;
    pos++;
}

void deleteNode(Node *&head, int x)
{
    if (x == 0)
    {
        Node *d = head;
        head = head->next;
        delete d;
        pos--;
        return;
    }
    else
    {
        Node *tem = head;
        for (int i = 1; i < x; i++)
        {
            tem = tem->next;
        }
        Node *d = tem->next;
        tem->next = tem->next->next;
        delete d;
        pos--;
        // cout << "Ex= " << tem->val << " " << tem->next->val << endl;
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
    cout << endl;
    return;
}
int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int i, x;
        cin >> i >> x;
        if (i == 0)
        {
            insertNodeatHead(head, x);
            printNode(head);
        }
        else if (i == 1)
        {
            insertNodeatTail(head, x);
            printNode(head);
        }
        else if (i == 2)
        {
            if (x < pos)
            {
                deleteNode(head, x);
                printNode(head);
            }
            else
            {
                printNode(head);
            }
        }
    }
    return 0;
}