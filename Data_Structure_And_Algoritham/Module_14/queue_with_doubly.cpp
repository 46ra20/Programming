#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL, *tail = NULL;
    int i = 0;
    void push(int val)
    {
        i++;
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;
        return;
    }
    void pop()
    {
        i--;
        Node *d = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return i;
    }
    bool empty()
    {
        return head;
    }
};
int main()
{
    myQueue mq;
    while (1)
    {
        int x;
        cin >> x;
        if (x == 0)
            break;
        mq.push(x);
    }
    while (mq.empty())
    {
        cout << mq.top() << endl;
        mq.pop();
    }

    return 0;
}