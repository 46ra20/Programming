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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}
int node_size(Node *head)
{
    int count = 0;
    Node *tem = head;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}

void recursive(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    recursive(n->next);
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
            insertNode(head, tail, x);
        }
    }
    int ans = node_size(head);
    cout << ans << endl;
    recursive(head);
    return 0;
}