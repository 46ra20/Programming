#include <bits/stdc++.h>
using namespace std;
class cQueue
{
public:
    vector<int> v;

    bool isEmpty()
    {
        return v.empty();
    }
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        auto it = v.begin();
        v.erase(it);
    }
    int top()
    {
        return v.front();
    }
};
int main()
{
    cQueue q;
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);

    while (!q.isEmpty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}