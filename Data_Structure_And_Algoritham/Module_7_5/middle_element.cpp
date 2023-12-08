#include <bits/stdc++.h>
using namespace std;
int i = 0;
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
void insertNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        i++;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    i++;
    return;
}
void printMiddle(Node *head)
{
    Node *tem = head;
    if ((i / 2) * 2 == i)
    {
        for (int j = 0; j < (i / 2 - 1); j++)
        {
            tem = tem->next;
        }
        cout << tem->val << " " << tem->next->val << endl;
    }
    else
    {
        for (int j = 0; j < (i / 2); j++)
        {
            tem = tem->next;
        }
        cout << tem->val << endl;
    }
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
            insertNode(head, tail, x);
        }
    }
    printMiddle(head);
    return 0;
}