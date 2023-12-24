#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> q, s;
    s.push(1);
    s.push(2);
    q = s;
    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    return 0;
}