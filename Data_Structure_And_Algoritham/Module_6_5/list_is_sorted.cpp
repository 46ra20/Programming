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

void insertNode(Node *&head, int val)
{
    Node *a = new Node(val);
    if (head == NULL)
    {
        head = a;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = a;
    return;
}

void sortNode(Node *head)
{
    Node *a = head;
    while (a != NULL)
    {
        if (a->next != NULL)
        {
            if (a->val >= a->next->val)
            {
                cout << "NO" << endl;
                return;
            }
        }
        a = a->next;
    }
    cout << "YES" << endl;
    return;
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
    sortNode(head);

    return 0;
}