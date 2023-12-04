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
int main()
{
    Node a;
    a.val = 20;
    Node b;
    b.val = 30;
    // a.next=&b.val;
    a.next = &b;
    cout << a.val << " " << a.next->val;
    return 0;
}