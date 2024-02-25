// #include <bits/stdc++.h>
// using namespace std;
// pair<int, int> src, des;
// int n, m;
// int checkList[1005][1005];
// vector<pair<int, int>> side = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
// bool valid(int si, int sj)
// {
//     return si > -1 && sj > -1 && si < n && sj < m;
// }
// void dfs(int i, int j, vector<int> *v)
// {
//     checkList[i][j] = 1;
//     // cout << i << " " << j << endl;
//     for (auto s : side)
//     {
//         int x = src.first + s.first;
//         int y = src.second + s.second;
//         if (valid(x, y) && !checkList[x][y] && v[x][y] == 0)
//         {
//             cout << x << " " << y << endl;
//             dfs(x, y, v);
//         }
//     }
// }
// int main()
// {
//     cin >> n >> m;
//     vector<int> v[n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             char c;
//             cin >> c;
//             if (c == 'A')
//                 src = {i, j};
//             if (c == 'B')
//                 des = {i, j};
//             if (c == '#')
//                 v[i].push_back(-1);
//             else
//                 v[i].push_back(0);
//         }
//     }

//     // cout << checkList[des.first][des.second];
//     // cout << endl
//     //      << des.first << " " << des.second << endl;

//     // cout << endl
//     //      << src.first << " " << src.second << endl;
//     memset(checkList, 0, sizeof(checkList));
//     dfs(src.first, src.second, v);
//     // if (checkList[des.first][des.second])
//     //     cout << "YES" << endl;
//     // else
//     //     cout << "NO" << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int n, m;
int checkList[1005][1005];
pair<int, int> parent[1005][1005];
vector<int> v[1005];
vector<pair<int, int>> sides = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int c = 0;
bool valid(int si, int sj)
{
    return si > -1 && sj > -1 && si < n && sj < m;
}
void dfs(pair<int, int> src, pair<int, int> des)
{
    checkList[src.first][src.second] = 1;
    if (checkList[des.first][des.second])
        return;
    for (auto s : sides)
    {

        int x = s.first + src.first;
        int y = s.second + src.second;
        if (valid(x, y) && !checkList[x][y] && v[x][y] == 0)
        {
            parent[s.first][s.second] = {x, y};
            c++;
            dfs({x, y}, des);
        }
    }
}
int main()
{
    cin >> n >> m;
    pair<int, int> src, des;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'A')
                src = {i, j};
            if (c == 'B')
                des = {i, j};

            if (c == '#')
                v[i].push_back(-1);
            else
                v[i].push_back(0);
        }
    }
    memset(checkList, 0, sizeof(checkList));
    memset(parent, -1, sizeof(parent));
    dfs(src, des);
    pair<int, int> x = des;

    return 0;
}