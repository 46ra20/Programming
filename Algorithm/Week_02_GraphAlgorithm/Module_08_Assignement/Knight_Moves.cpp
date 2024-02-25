#include <bits/stdc++.h>
using namespace std;
pair<int, int> king, queen;
int steps, n, m;
int chekList[105][105];
void bfs()
{
    queue<pair<pair<int, int>, int>> q;
    q.push({king, 0});
    chekList[king.first][king.second] = 1;
    vector<pair<int, int>> knight = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
    while (!q.empty())
    {
        auto pa = q.front();
        q.pop();
        // cout << pa.first.first << " " << pa.first.second << endl;
        if (pa.first == queen)
        {
            steps = pa.second;
            break;
        }
        for (auto kn : knight)
        {
            int x = pa.first.first + kn.first;
            int y = pa.first.second + kn.second;
            if (x > -1 && x < n && y > -1 && y < m && !chekList[x][y])
            {
                chekList[x][y] = 1;
                q.push({{x, y}, pa.second + 1});
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> king.first >> king.second >> queen.first >> queen.second;
        memset(chekList, 0, sizeof(chekList));

        bfs();
        // cout << chekList[queen.first][queen.second] << endl;
        if (chekList[queen.first][queen.second])
            cout << steps << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}