#include <bits/stdc++.h>
using namespace std;
int countElement = 0;
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
void insertNode(Node *&head, Node *&tail, int val) // insert node
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        countElement++;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    countElement++;
}
void printNode(Node *head) // print node
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    return;
}
void deleteNode(Node *&head, Node *&tail, int pos) // delete node
{
    // Node *tem = tail;
    // delete tem;
    if (pos > countElement)
    {
        cout << "Invalide" << endl;
        return;
    }
    Node *tem = head;
    if (pos == 0)
    {
        Node *dElement = tem;
        head = tem->next;
        delete tem;
        return;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        tem = tem->next;
    }
    Node *dElement = tem->next;
    tem->next = tem->next->next;
    delete dElement;
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
            insertNode(head, tail, x);
        }
    }
    deleteNode(head, tail, 3);
    printNode(head);
    return 0;
}