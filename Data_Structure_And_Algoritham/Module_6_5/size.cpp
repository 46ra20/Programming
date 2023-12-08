#include <bits/stdc++.h>
using namespace std;
int a = 0;
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
        a++;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
    a++;
    return;
}
void print()
{
    cout << a << endl;
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
            insertElement(head, x);
        }
    }
    print();

    return 0;
}