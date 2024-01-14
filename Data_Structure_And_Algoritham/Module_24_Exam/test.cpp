#include <bits/stdc++.h>
using namespace std;
class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
int main()
{
    priority_queue<int, vector<int>, Compare> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(250);
    pq.push(1);
    pq.push(0);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}