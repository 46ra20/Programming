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
    printNode(head);
    return 0;
}