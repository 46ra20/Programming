#include <bits/stdc++.h>
using namespace std;
int x = 0;
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
void insertNode(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        x++;
        return;
    }
    Node *a = head;
    while (a->next != NULL)
    {
        a = a->next;
    }
    a->next = newNode;
    x++;
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
void insertAtAnyPosition(Node *&head, int pos, int val)
{
    Node *a = new Node(val);
    if (pos > x)
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        a->next = head;
        head = a;
        x += 1;
        printNode(head);
    }
    else if (pos > 0 && pos < x)
    {
        Node *tem = head;
        for (int i = 0; i < (pos - 1); i++)
        {
            tem = tem->next;
        }
        a->next = tem->next;
        tem->next = a;
        x += 1;
        printNode(head);
    }
    else
    {
        Node *tem = head;
        while (tem->next != NULL)
        {
            tem = tem->next;
        }
        tem->next = a;
        x += 1;
        printNode(head);
    }
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            insertNode(head, x);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        insertAtAnyPosition(head, pos, val);
    }
    return 0;
}