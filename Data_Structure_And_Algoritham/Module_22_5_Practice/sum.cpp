#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node() {}
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int main()
{
    vector<int> v = {2, 3};
    sort(v.begin(), v.end(), greater<int>());
    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        int ans = v[l] + v[r];

        if (ans == 6)
            cout << ans << " ";
        if (ans < 6)
            l++;
        else
            r--;
    }
    return 0;
}