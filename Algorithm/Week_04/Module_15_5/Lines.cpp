#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> src, des;
vector<char> edge[43];
int vis[42][42];
pair<int, int> sPath[42][42];

bool valid(int si, int sj)
{
    return si >= 0 && si < n && sj >= 0 && sj < n;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = 1;

    vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        for (auto m : moves)
        {
            int x = m.first + p.first;
            int y = m.second + p.second;
            if (valid(x, y) && !vis[x][y] && edge[x][y] != 'O')
            {
                q.push({x, y});
                vis[x][y] = 1;
                sPath[x][y] = p;
            }
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            edge[i].push_back(ch);
            if (ch == '@')
                src = {i, j};
            if (ch == 'X')
                des = {i, j};
        }
    }
    memset(vis, 0, sizeof(vis));
    memset(sPath, -1, sizeof(sPath));
    bfs(src);

    pair<int, int> x = des;
    if (!vis[des.first][des.second])
    {
        cout << "N" << endl;
        return 0;
    }
    cout << 'Y' << endl;
    while (x.first != -1 && x.second != -1)
    {
        if (edge[x.first][x.second] != '@')
            edge[x.first][x.second] = '+';
        x = sPath[x.first][x.second];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << edge[i][j];
        }
        cout << endl;
    }
    return 0;
}