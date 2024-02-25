#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int parent[N];
int find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int pa = find(parent[node]);
    parent[node] = pa;
    return pa;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        parent[i] = -1;

    parent[5] = 1;
    parent[1] = 3;
    parent[3] = 8;
    int x = find(5);
    cout << x << endl;
    for (int i = 0; i < n; i++)
        cout << parent[i] << " ";
    return 0;
}