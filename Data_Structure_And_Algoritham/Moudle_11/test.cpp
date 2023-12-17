#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void tail_input(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void reverse(node *&head, node *n)
{
    if (n->next == NULL)
    {
        head = n;
        return;
    }
    reverse(head, n->next);
    n->next->next = n;
    n->next = NULL;
}
void printf(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    while (true)
    {
        int c;
        cin >> c;
        if (c == -1)
        {
            break;
        }
        tail_input(head, tail, c);
    }
    reverse(head, head);
    printf(head);
    return 0;
}