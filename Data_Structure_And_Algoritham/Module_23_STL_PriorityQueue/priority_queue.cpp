#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
int main()
{
    priority_queue<int, vector<int>, cmp> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(40);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}