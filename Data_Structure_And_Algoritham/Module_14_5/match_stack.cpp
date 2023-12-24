#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    myStack st_1, st_2;
    int n, m;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st_1.push(x);
    }
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        st_2.push(x);
    }
    bool flag = true;
    if (m != n)
        flag = false;
    else
    {
        while (!st_1.empty())
        {
            if (st_1.top() != st_2.top())
            {
                flag = false;
                break;
            }
            // cout << st_1.top() << " " << st_2.top() << endl;
            st_1.pop();
            st_2.pop();
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}