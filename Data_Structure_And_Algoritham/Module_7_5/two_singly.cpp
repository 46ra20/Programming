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
void insertNode(Node *&head, Node *&tail, int val)
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
}
int nodeSize(Node *head)
{
    Node *tem = head;
    int i = 0;
    while (tem != NULL)
    {
        i++;
        tem = tem->next;
    }
    cout << endl;
    return i;
}
int main()
{
    int i = 0, x[2] = {0};
    Node *head = NULL, *tail = NULL;
    while (i < 2)
    {
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
        x[i] = nodeSize(head);
        head = NULL;
        tail = NULL;
        i++;
    }
    if (x[0] == x[1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}