#include <bits/stdc++.h>
using namespace std;
const int N = 22;
char mat[N][N];
int vis[N][N];
int w, h, ans = 0;
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool valid(int si, int sj)
{
    return si >= 0 && si < h && sj >= 0 && sj < w && !vis[si][sj];
}
void dfs(pair<int, int> src)
{
    vis[src.first][src.second] = 1;
    ans++;
    for (auto m : moves)
    {
        int si = src.first + m.first;
        int sj = src.second + m.second;
        if (valid(si, sj) && mat[si][sj] == '.')
        {
            dfs({si, sj});
        }
    }
}
int main()
{
    int t, j = 1;
    cin >> t;
    while (t--)
    {
        cin >> w >> h;
        pair<int, int> src;
        for (int i = 0; i < h; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < w; j++)
            {
                // char ch;
                // cin >> ch;
                if (s[j] == '@')
                    src = {i, j};
                // if (ch == '#')
                //     mat[i][j] = -1;
                // else
                //     mat[i][j] = 0;
                mat[i][j] = s[j];
            }
        }
        memset(vis, 0, sizeof(vis));
        ans = 0;
        dfs(src);
        cout << "Case " << j << ": " << ans << endl;
        j++;
    }
    return 0;
}