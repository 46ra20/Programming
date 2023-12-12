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
int node_size(Node *head)
{
    Node *tem = head;
    int count = 0;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}
void reverse_node(Node *&head, Node *&tail)
{
    int size = node_size(head);
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->previous;
    }
    swap(i->val, j->val);
}

void print_node(Node *head, Node *tail)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
    // tem = tail;
    // while (tem != NULL)
    // {
    //     cout << tem->val << " ";
    //     tem = tem->previous;
    // }
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
    reverse_node(head, tail);
    print_node(head, tail);
    return 0;
}