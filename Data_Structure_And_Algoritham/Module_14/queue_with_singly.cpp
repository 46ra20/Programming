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
class myQueue
{
public:
    Node *head = NULL, *tail = NULL;
    int c = 0;
    void push(int val)
    {
        c++;
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        tail = n;
        return;
    }
    void pop()
    {
        Node *d = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        c--;
        return;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return c;
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
        if (x == -1)
            break;
        mq.push(x);
    }
    while (mq.empty())
    {
        cout << mq.top() << endl;
        mq.pop();
    }
    cout << mq.empty() << endl;
    return 0;
}