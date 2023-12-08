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
void insertNode(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}
void duplicateValue(Node *head, Node *c)
{
    Node *a, *b;
    // a = head;
    // int i = 0, j = 0;
    // while (a != NULL)
    // {
    //     b = a;
    //     while (b != NULL)
    //     {
    //         if (b->next != NULL)
    //         {
    //             if (a->val == b->next->val)
    //             {
    //                 cout << "YES" << endl;
    //                 return;
    //             }
    //         }
    //         b = b->next;
    //     }
    //     a = a->next;
    // }
    a = head;
    int i = 0, j = 0;
    while (a != NULL)
    {
        b = head;
        j = 0;
        while (b != NULL)
        {
            if (a->val == b->val && i != j)
            {
                cout << "YES" << endl;
                return;
            }
            b = b->next;
            j++;
        }
        a = a->next;
        i++;
    }
    cout << "NO" << endl;
    return;
}
int main()
{
    Node *a = NULL;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            insertNode(a, x);
        }
    }
    duplicateValue(a, a);
    return 0;
}