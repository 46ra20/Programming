#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    Node *tem = head;
    // while (tem != NULL)
    // {
    //     cout << tem->val << " ";
    //     tem = tem->next;
    // }
    // Node *cur = head;
    // Node *h_next = NULL;
    // Node *h_prev = NULL;
    // Node *h_node = NULL;

    // while (cur != NULL)
    // {
    //     h_node = cur->next;
    //     cur->next = h_prev;
    //     h_prev = cur;
    //     cur = h_node;
    // }
    // cout << endl;

    // while (h_prev != NULL)
    // {
    //     cout << h_prev->val << " ";
    //     h_prev = h_prev->next;
    // }

    /////using stack
    stack<int> st;
    while (tem)
    {
        st.push(tem->data);
        tem = tem->next;
    }
    tem = head;
    while (!st.empty())
    {
        tem->data = st.top();
        cout << st.top() << " ";
        tem = tem->next;
        st.pop();
    }
    // while (tem != NULL)
    // {
    //     cout << tem->data << " ";
    //     tem = tem->next;
    // }
    return 0;
}