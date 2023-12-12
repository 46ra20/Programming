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
    newNode->previous = tail;
    tail = newNode;
    return;
}
void print_node(Node *head, Node *tail)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    // cout << endl;
    // tem = tail;
    // while (tem != NULL)
    // {
    //     cout << tem->val << " ";
    //     tem = tem->previous;
    // }
}
int size_note(Node *head)
{
    int count = 0;
    Node *tem = head;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}
void reverse_node(Node *&head, Node *&tail)
{
    int size = size_note(head);
    Node *i = head, *j = tail;
    if (size % 2 == 0)
    {
        while (i->next != j)
        {
            swap(i->val, j->val);
            i = i->next;
            j = j->previous;
        }
    }
    else
    {
        while (i != j)
        {
            swap(i->val, j->val);
            i = i->next;
            j = j->previous;
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
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

    // print_node(head, tail);
    reverse_node(head, tail);

    print_node(head, tail);

    return 0;
}