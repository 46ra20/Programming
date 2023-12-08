#include <bits/stdc++.h>
using namespace std;
double i = 0;
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
void insertNode(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        i++;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
    i++;
    return;
}
void printMiddle(Node *head)
{
    Node *tem = head;
    if (i / 2 > int(i / 2))
    {
        for (int j = 1; j <= int(i / 2); j++)
        {
            tem = tem->next;
        }
        cout << tem->val << endl;
    }
    else
    {
        for (int j = 1; j < int(i / 2); j++)
        {
            tem = tem->next;
        }
        cout << tem->val << " " << tem->next->val << endl;
    }
    return;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            insertNode(head, x);
        }
    }
    printMiddle(head);
    return 0;
}