#include <bits/stdc++.h>
using namespace std;
int checkList[100];
int sortPath[100] = {-1};
void bfs(vector<int> *m, int src)
{
    queue<int> q;
    q.push(src);
    checkList[src] = 1;
    while (!q.empty())
    {
        int par = q.front();
        // cout << par << " ";
        q.pop();
        for (int child : m[par])
        {
            if (!checkList[child])
            {
                q.push(child);
                sortPath[child] = par;
                checkList[child] = 1;
            }
        }
    }
    return;
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
        if (a >= n || b >= n)
            continue;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int src, des;
        cin >> src >> des;
        memset(checkList, 0, sizeof(checkList));
        memset(sortPath, -1, sizeof(sortPath));
        bfs(mat, src);
        int x = des;
        int count = 0;
        while (x != -1)
        {
            // cout << x << " ";
            count++;
            x = sortPath[x];
        }
        if (count - 1 == 0)
            cout << -1 << endl;
        else
            cout << count - 1 << endl;
    }
    return 0;
}

// 0 1
// 0 2
// 1 2
// 0 3
// 4 2
// 3 5
// 4 3