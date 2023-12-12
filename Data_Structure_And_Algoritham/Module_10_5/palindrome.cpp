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
void print_node(Node *head, Node *tail)
{
    Node *tem = head, *tem_1 = tail;
    int flag = 1;
    while (tem != NULL)
    {
        if (tem->val != tem_1->val)
        {
            flag = 0;
            break;
        }
        tem = tem->next;
        tem_1 = tem_1->previous;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return;
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
            insert_function(head, tail, x);
        }
    }
    print_node(head, tail);

    return 0;
}