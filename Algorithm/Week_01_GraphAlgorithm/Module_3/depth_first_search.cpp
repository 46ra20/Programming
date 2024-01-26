#include <bits/stdc++.h>
using namespace std;
int checkList[10] = {0};
void dfs(vector<int> *mat, int src)
{
    // checkList[src] = 1;
    if (!checkList[src])
    {
        cout << src << "->";
        checkList[src] = 1;
        for (int m : mat[src])
        {
            dfs(mat, m);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    dfs(mat, 0);
    return 0;
}