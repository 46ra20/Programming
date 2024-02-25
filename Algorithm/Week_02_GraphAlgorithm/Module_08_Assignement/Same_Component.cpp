// #include <bits/stdc++.h>
// using namespace std;
// int checkList[1003][1003];
// int n, m;

// void dfs(vector<int> *adj, pair<int, int> src)
// {
//     checkList[src.first][src.second] = 1;
//     queue<pair<int, int>> q;
//     q.push(src);
//     pair<int, int> pa[4] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
//     while (!q.empty())
//     {
//         auto x = q.front();
//         q.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             int new_x = x.first + pa[i].first;
//             int new_y = x.second + pa[i].second;
//             if (new_x < n && new_y < m && !checkList[new_x][new_y])
//             {
//                 if (adj[src.first][src.second] == adj[new_x][new_y])
//                     q.push({new_x, new_y});
//                 checkList[new_x][new_y] = 1;
//             }
//         }
//     }
// }

// int main()
// {
//     // int n, m;
//     cin >> n >> m;
//     vector<int> adj[n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             char ch;
//             cin >> ch;
//             if (ch == '-')
//             {
//                 adj[i].push_back(0);
//             }
//             else
//                 adj[i].push_back(-1);
//         }
//     }
//     pair<int, int> src, des;
//     cin >> src.first >> src.second;
//     cin >> des.first >> des.second;
//     memset(checkList, 0, sizeof(checkList));
//     dfs(adj, src);
//     if (checkList[src.first][src.second] and checkList[des.first][des.second])
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int n, m;
int chekList[1003][1003];
void bfs(vector<int> *adj, pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    chekList[src.first][src.second] = 1;
    pair<int, int> pa[4] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
    while (!q.empty())
    {
        auto x = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int new_x = x.first + pa[i].first;
            int new_y = x.second + pa[i].second;
            if (new_x > -1 && new_x < n && new_y > -1 && new_y < m && !chekList[new_x][new_y])
            {
                if (adj[new_x][new_y] == 0)
                {
                    // cout << new_x << " " << new_y << endl;
                    q.push({new_x, new_y});
                    chekList[new_x][new_y] = 1;
                }
            }
        }
    }
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
            if (ch == '-')
                adj[i].push_back(1);
            else
                adj[i].push_back(0);
        }
    }
    pair<int, int> src, des;
    cin >> src.first >> src.second;
    cin >> des.first >> des.second;
    memset(chekList, 0, sizeof(chekList));
    bfs(adj, src);
    if (chekList[src.first][src.second] && chekList[des.first][des.second])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}