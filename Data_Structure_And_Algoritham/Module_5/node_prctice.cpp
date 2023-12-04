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
void nodeInsert(int val)
{
    Node *head = new Node(val);
    head->next = head;
    cout << head->val << " ";
    return;
}
void nodeDelete(Node *a)
{
    delete a;
    return;
}
int main()
{
    // Node *head = new Node(190);
    // Node *a = new Node(10);
    // Node *b = new Node(50);
    // Node *c = new Node(54);
    // Node *d = new Node(51);
    // head->next = a;
    // a->next = b;
    // b->next = c;
    // c->next = d;
    // nodeDelete(c);
    // nodeInsert("c", 50);
    // Node *tem = head;
    // b->next = c;
    // c->next = d;
    // while (tem != NULL)
    // {
    //     cout << tem->val << " ";
    //     tem = tem->next;
    // }

    nodeInsert(50);
    nodeInsert(30);
    nodeInsert(40);
    nodeInsert(20);
    nodeInsert(40);
    nodeInsert(30);

    // while (/* condition */)
    // {
    //     /* code */
    // }

    return 0;
}