#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> cApa;
int checkList[1005][1005] = {0};
bool vaild(int i, int j)
{
    return i > -1 && i < n && j > -1 && j < m && !checkList[i][j];
}
void bfs(vector<int> *v, int i, int j)
{
    int count = 0;
    queue<pair<int, int>> q;
    q.push({i, j});
    pair<int, int> p[4] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
    while (!q.empty())
    {
        auto par = q.front();
        count++;
        int x = par.first;
        int y = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + p[i].first;
            int new_y = y + p[i].second;
            if (vaild(new_x, new_y) && v[new_x][new_y] == 0)
            {
                checkList[new_x][new_y] = 1;
                q.push({new_x, new_y});
            }
        }
    }
    if (count > 1)
        cApa.push_back(count - 1);
    else
        cApa.push_back(count);
    // cout << count << endl;
}
int main()
{
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '#')
                adj[i].push_back(-1);
            else
                adj[i].push_back(0);
        }
    }
    cApa.clear();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (adj[i][j] == 0 && !checkList[i][j])
            {
                bfs(adj, i, j);
            }
        }
    }
    sort(cApa.begin(), cApa.end());
    if (cApa.empty())
        cout << 0 << endl;
    else
        for (int val : cApa)
            cout << val << " ";
    return 0;
}