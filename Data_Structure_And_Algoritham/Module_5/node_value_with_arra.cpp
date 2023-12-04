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
    int n;
    cin >> n;
    Node a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].val;
        if (i > 0)
        {
            a[i - 1].next = &a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        // if(a[i].next==NULL) break;
        if (i > 0)
            cout << a[i - 1].next->val << " ";
        else
            cout << a[i].val << " ";
    }
    return 0;
}