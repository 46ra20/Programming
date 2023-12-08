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
void searchElement(Node *head, int x)
{
    int i = 0, flag = 0;
    Node *tem = head;
    while (tem != NULL)
    {
        if (tem->val == x)
        {
            flag = 1;
            tem = NULL;
        }
        else
        {
            i++;
            tem = tem->next;
        }
    }
    if (flag)
        cout << i << endl;
    else
        cout << "-1" << endl;
}

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;
        searchElement(head, x);
    }
    // viewList(head);
    return 0;
}
