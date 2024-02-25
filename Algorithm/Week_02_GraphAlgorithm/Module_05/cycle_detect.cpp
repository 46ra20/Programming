#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
vector<int> adj[N];
int checkList[N];
int parentList[N];
bool ans;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    checkList[src] = 1;
    while (!q.empty())
    {
        int parent = q.front();
        // cout << x << " " << parentList[x] << endl;
        // cout << "Parent:" << x << "- ";
        q.pop();
        for (int child : adj[parent])
        {

            // cout << child << " ";
            if (checkList[child] and parentList[parent] != child)
                ans = true;
            if (!checkList[child])
            {
                checkList[child] = 1;
                parentList[child] = parent;
                q.push(child);
            }
        }
        cout << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(checkList, 0, sizeof(checkList));
    memset(parentList, -1, sizeof(parentList));
    ans = false;
    bfs(0);
    // cout << ans << endl;
    if (ans)
        cout << "Cycle Found" << endl;
    else
        cout << "Cycle not Found" << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// bool vis[N];
// vector<int> adj[N];
// int parentArray[N];
// bool ans;
// void bfs(int s)
// {
//     queue<int> q;
//     q.push(s);
//     vis[s] = true;
//     while (!q.empty())
//     {
//         int parent = q.front();
//         // cout << parent << endl;
//         q.pop();
//         for (int child : adj[parent])
//         {
//             if (vis[child] == true && parentArray[parent] != child)
//             {
//                 ans = true;
//                 cout << parent << endl;
//             }
//             if (vis[child] == false)
//             {
//                 vis[child] = true;
//                 parentArray[child] = parent;
//                 q.push(child);
//             }
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     memset(vis, false, sizeof(vis));
//     memset(parentArray, -1, sizeof(parentArray));
//     ans = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (!vis[i])
//         {
//             bfs(i);
//         }
//     }
//     if (ans)
//     {
//         cout << "Cycle found";
//     }
//     else
//     {
//         cout << "Cycle not found";
//     }
//     return 0;
// }