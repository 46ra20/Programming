#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> mq;
    while (1)
    {
        int x;
        cin >> x;
        if (x == 1)
            break;
        mq.push(x);
    }
    cout << mq.empty() << endl;
    while (!mq.empty())
    {
        cout << mq.front() << endl;
        mq.pop();
    }
    cout << mq.empty() << endl;
    return 0;
}