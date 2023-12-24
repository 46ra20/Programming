#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l;
    void push(int v)
    {
        l.push_back(v);
        return;
    }
    void pop()
    {
        l.pop_front();
        return;
    }
    int top()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return !l.empty();
    }
};
int main()
{
    myQueue mq;
    while (1)
    {
        int x;
        cin >> x;
        if (x == 1)
            break;
        mq.push(x);
    }
    while (mq.empty())
    {
        cout << mq.top() << endl;
        mq.pop();
    }
    return 0;
}