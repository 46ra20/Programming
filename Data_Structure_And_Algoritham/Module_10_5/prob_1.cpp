#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *previous;
    Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
    }
};
void insert_function(Node *&head, Node *&tail, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    n->previous = tail;
    tail = n;
    return;
}
bool check_same(Node *head, Node *head_1)
{
    while (1)
    {
        if (head == NULL && head_1 == NULL)
            break;
        else if (head == NULL || head_1 == NULL)
        {
            return false;
        }

        if (head->val != head_1->val)
        {
            return false;
        }
        head = head->next;
        head_1 = head_1->next;
    }
    return true;
}

int main()
{
    Node *head = NULL, *tail = NULL, *head_1 = NULL, *tail_1 = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            insert_function(head, tail, x);
        }
    }
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            insert_function(head_1, tail_1, x);
        }
    }
    bool flag = check_same(head, head_1);
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}