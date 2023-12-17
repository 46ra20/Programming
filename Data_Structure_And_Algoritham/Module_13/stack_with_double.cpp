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
        this->prev = NULL;
        this->next = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL, *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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
    }
    void pop()
    {
        sz--;
        if (head == tail)
            head = NULL;
        Node *d = tail;
        tail = tail->prev;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head;
    }
};
int main()
{
    myStack st;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < 7; i++)
    {
        if (st.empty())
        {
            cout << st.top() << endl;
            st.pop();
        }
    }
    return 0;
}