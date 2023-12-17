#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert_node(Node *&head, Node *&tail, int val)
{
    Node *d = new Node(val);
    if (head == NULL)
    {
        head = d;
        tail = d;
        return;
    }
    tail->next = d;
    d->pre = tail;
    tail = tail->next;
}
bool palindrome(Node *head, Node *tail)
{
    while (head != NULL)
    {
        if (head->val != tail->val)
            return false;
        head = head->next;
        tail = tail->pre;
    }
    return true;
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
            insert_node(head, tail, x);
        }
    }
    bool is_palindrome = palindrome(head, tail);
    if (is_palindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}