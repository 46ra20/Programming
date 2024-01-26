#include <bits/stdc++.h>
using namespace std;
int checkList[100];
void bfs(vector<int> *m, int n, int src)
{
    // pair<queue<int>, int> pa;
    // pa.first.push(src);
    // pa.second = 0;
    // checkList[src] = 1;
    // while (!pa.first.empty())
    // {
    //     int x = pa.first.front();
    //     pa.first.pop();
    //     cout << x << " " << pa.second << endl;
    //     for (int i = 0; i < m[x].size(); i++)
    //     {
    //         if (!checkList[m[x][i]])
    //         {
    //             pa.first.push(m[x][i]);
    //             pa.second = pa.second + 1;
    //             checkList[m[x][i]] = 1;
    //         }
    //     }
    // }

    queue<pair<int, int>> q;
    q.push({src, 0});
    checkList[src] = 1;
    while (!q.empty())
    {
        pair<int, int> pa = q.front();
        q.pop();
        cout << pa.first << " Level = " << pa.second << endl;
        for (int i = 0; i < m[pa.first].size(); i++)
        {
            int j = m[pa.first][i];
            if (!checkList[j])
            {
                q.push({j, pa.second + 1});
                checkList[j] = 1;
            }
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

    bfs(mat, n, 0);

    return 0;
}