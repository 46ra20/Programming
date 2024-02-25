#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int parent[N];
int find(int node)
{
    if (parent[node] == -1)
        return node;
    int target = find(parent[node]);
    cout << node << " ";
    parent[node] = target;
    return target;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        parent[i] = -1;
    parent[1] = 5;
    parent[5] = 0;
    parent[0] = 3;
    parent[3] = 8;
    int x = find(1);
    cout << x << endl;
    return 0;
}