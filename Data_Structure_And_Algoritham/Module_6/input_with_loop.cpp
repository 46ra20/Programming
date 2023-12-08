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
void insertElement(Node *&head, int val)
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

void printElement(Node *head)
{
    Node *tem = head;
    cout << endl
         << "Your Element is:-";
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    return;
}
int main()
{
    Node *a = NULL;
    // while (1)
    // {
    //     int x;
    //     cin >> x;
    //     if (x == -1)
    //     {
    //         printElement(a);
    //         break;
    //     }
    //     else
    //     {
    //         insertElement(a, x);
    //     }
    // }
    int x;
    for (int i = 0; i < 10; i++)
    {
        // int x;
        cin >> x;
        insertElement(a, x);
    }
    printElement(a);
    return 0;
}