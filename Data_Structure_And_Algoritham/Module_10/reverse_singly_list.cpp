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

void insert_node(Node *&head, Node *&tail, int val)
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
    return;
}

void reverse_node(Node *n, Node *&head)
{
    if (n->next == NULL)
    {
        head = n;
        return;
    }
    reverse_node(n->next, head);
    n->next->next = n;
    n->next = NULL;
}
void print_node(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
    return;
}
int main()
{
    Node *haed = NULL, *tail = NULL;
    while (1)
    {
        int c;
        cin >> c;
        if (c == -1)
            break;
        else
        {
            insert_node(haed, tail, c);
        }
    }

    // print_node(haed);
    reverse_node(haed, haed);
    print_node(haed);

    return 0;
}