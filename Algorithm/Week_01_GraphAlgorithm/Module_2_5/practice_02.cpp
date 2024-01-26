#include <bits/stdc++.h>
using namespace std;
int checkList[100] = {0};
void bfs(vector<int> *m, int l)
{
    queue<pair<int, int>> q;
    vector<int> level_element;
    q.push({0, 0});
    checkList[0] = 1;
    while (!q.empty())
    {
        pair<int, int> x = q.front();
        if (x.second == l)
            level_element.push_back(x.first);
        if (x.second > l)
            break;
        // cout << x.first << " Level = " << x.second << endl;
        q.pop();
        for (int child : m[x.first])
        {
            if (!checkList[child])
            {
                q.push({child, x.second + 1});
                checkList[child] = 1;
            }
        }
    }
    sort(level_element.begin(), level_element.end(), greater<int>());
    for (int x : level_element)
        cout
            << x << " ";
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
    int l;
    cin >> l;
    bfs(mat, l);

    return 0;
}

// 0 1
// 0 2
// 1 2
// 0 3
// 4 2
// 3 5
// 4 3