// #include <bits/stdc++.h>
// using namespace std;
// void printM(vector<int> *m)
// {
//     int x = m->size();
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0; j < m[i].size(); j++)
//         {
//             cout << m[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     vector<int> mat[n];
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         mat[a].push_back(b);
//         mat[b].push_back(a);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         cout << i << " = ";
//         for (int j = 0; j < mat[i].size(); j++)
//         {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl
//          << endl;
//     // printM(mat);
//     bool a[10];
//     memset(a, false, sizeof(a));
//     for (int i = 0; i < 10; i++)
//         cout << a[i] << " ";
//     cout << endl;
//     queue<int> q;
//     q.push(0);
//     while (!q.empty())
//     {
//         int x = q.front();
//         cout << x << " ";
//         q.pop();
//         for (int i = 0; i < mat[x].size(); i++)
//         {
//             int y = mat[x][i];
//             // cout << y << " ";
//             if (!a[y])
//             {
//                 q.push(mat[x][i]);
//                 a[y] = true;
//             }
//         }
//         cout << endl;
//     }

//     cout << endl;
//     for (int i = 0; i < 10; i++)
//         cout << a[i] << " ";

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int checkList[10] = {0};
void bfs(vector<int> *m, int x, int src)
{
    queue<int> q;
    q.push(src);
    checkList[src] = 1;
    while (!q.empty())
    {
        int i = q.front();
        cout << i << " ";
        q.pop();
        for (int j = 0; j < m[i].size(); j++)
        {
            // cout << m[i][j] " ";
            if (!checkList[m[i][j]])
            {
                q.push(m[i][j]);
                checkList[m[i][j]] = 1;
            }
        }
    }
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
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
            cout << mat[i][j]
                 << " ";
        cout << endl;
    }

    cout << endl;
    bfs(mat, 6, 3);
    return 0;
}