#include <bits/stdc++.h>
#include <limits.h>
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
    return;
}

int maximumValue(Node *head)
{
    int max = INT_MIN;
    Node *tem = head;
    while (tem != NULL)
    {
        if (max < tem->val)
        {
            max = tem->val;
        }
        tem = tem->next;
    }
    return max;
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
    int max = maximumValue(head);
    cout << max << endl;
    return 0;
}