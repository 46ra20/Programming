#include <bits/stdc++.h>
using namespace std;
int checkList[1005][1005] = {0};
int main()
{
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    pair<int, int> src, des;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'A')
                src = {i, j};
            if (ch == 'B')
                des = {i, j};

            if (ch == '#')
                mat[i][j] = -1;
            else
                mat[i][j] = 0;
        }
    }
    // bfs(src)
    queue<pair<int, int>> q;
    q.push(src);
    checkList[src.first][src.second] = 1;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {-1, 1, 0, 0};
    while (!q.empty())
    {
        auto par = q.front();
        int x = par.first, y = par.second;
        q.pop();
        // cout << x << " " << y << endl;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            // cout << new_x << " " << new_y << endl;
            if (new_x > -1 && new_x < n && new_y > -1 && new_y < m && checkList[new_x][new_y] == 0)
            {
                if (mat[new_x][new_y] == 0)
                {
                    checkList[new_x][new_y] = 1;
                    q.push({new_x, new_y});
                }
            }
        }
    }
    // chek src and des
    if (checkList[src.first][src.second] && checkList[des.first][des.second])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}