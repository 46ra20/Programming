#include <bits/stdc++.h>
using namespace std;
int n, m;
int chekList[1005][1005] = {0};
bool valid(int i, int j)
{
    return i > -1 && i < n && j > -1 && j < m;
}
int bfs(vector<int> *v, int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {-1, 1, 0, 0};
    while (!q.empty())
    {
        auto par = q.front();
        // cout << par.first << " " << par.second << endl;
        q.pop();
        for (int x = 0; x < 4; x++)
        {
            int new_x = par.first + dx[x];
            int new_y = par.second + dy[x];
            if (valid(new_x, new_y) && !chekList[new_x][new_y])
            {
                if (v[new_x][new_y] == 0)
                {
                    chekList[new_x][new_y] = 1;
                    q.push({new_x, new_y});
                }
            }
        }
    }
    return 1;
}
int main()
{
    cin >> n >> m;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '#')
                v[i].push_back(-1);
            else
                v[i].push_back(0);
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0 && !chekList[i][j])
            {
                count += bfs(v, i, j);
            }
        }
    }
    cout << count << endl;
    return 0;
}