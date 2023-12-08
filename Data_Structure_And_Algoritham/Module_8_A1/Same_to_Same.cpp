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
int sameToSame(Node *head, Node *head1)
{
    Node *tem = head;
    while (tem != NULL)
    {
        if (tem->val != head1->val)
        {
            return 0;
        }
        tem = tem->next;
        head1 = head1->next;
    }
    return 1;
}

int main()
{
    // Write your code here
    int flag = 1, i = 0, j = 0;
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
            i++;
        }
    }
    Node *head1 = NULL, *tail1 = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            insertNode(head1, tail1, x);
            j++;
        }
    }
    if (i != j)
        cout << "NO" << endl;
    else
    {
        flag = sameToSame(head, head1);
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // viewList(head);
    return 0;
}
