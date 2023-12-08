#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(){};
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertNode(Node *&head, Node *&tail, int val)
{
    Node *x = new Node(val);
    if (head == NULL)
    {
        head = x;
        tail = x;
        return;
    }
    tail->next = x;
    tail = x;
}
void difference(Node *head)
{
    int max = INT_MIN, min = INT_MAX;
    Node *tem = head;
    while (tem != NULL)
    {
        if (tem->val < min)
            min = tem->val;
        if (tem->val > max)
            max = tem->val;
        tem = tem->next;
    }
    cout << max - min << endl;
    return;
}
void viewList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    // Write your code here
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
    difference(head);
    // viewList(head);
    return 0;
}
