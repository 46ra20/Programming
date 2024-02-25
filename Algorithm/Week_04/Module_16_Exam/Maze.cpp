#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 1e3 + 10;
int vis[N][N];
pi pathList[N][N];
// vector<char> gr[N];
char grid[N][N];
int n, m;
bool valid(int si, int sj)
{
    return si >= 0 && si < n && sj >= 0 && sj < m;
}
void bfs(pi s)
{
    queue<pi> q;
    q.push(s);
    vis[s.first][s.second] = 1;
    vector<pi> moves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    while (!q.empty())
    {
        auto pa = q.front();
        q.pop();
        for (auto m : moves)
        {
            int x = m.first + pa.first;
            int y = m.second + pa.second;
            if (valid(x, y) && !vis[x][y] && grid[x][y] == '.')
            {
                vis[x][y] = 1;
                pathList[x][y] = pa;
                q.push({x, y});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    pi s, d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            if (x == 'R')
                s = {i, j};
            else if (x == 'D')
                d = {i, j};
            grid[i][j] = x;
            if (x != '#')
                grid[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = 0;
            pathList[i][j] = {-1, -1};
        }
    }

    bfs(s);
    pi x = d;

    if (vis[d.first][d.second])
    {
        while (x.first != -1 || x.second != -1)
        {
            grid[x.first][x.second] = 'X';
            if (x == s)
                grid[x.first][x.second] = 'R';
            else if (x == d)
                grid[x.first][x.second] = 'D';
            x = pathList[x.first][x.second];
        }
    }
    else
    {
        grid[s.first][s.second] = 'R';
        grid[d.first][d.second] = 'D';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}