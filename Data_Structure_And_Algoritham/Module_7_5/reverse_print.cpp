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
void insertNode(Node *&head, Node *&tail, int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void printReverseWay(Node *n)
{
    if (n == NULL)
        return;
    printReverseWay(n->next);
    cout << n->val << " ";
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
    printReverseWay(head);
    return 0;
}