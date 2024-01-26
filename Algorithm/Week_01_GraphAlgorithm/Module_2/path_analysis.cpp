#include <bits/stdc++.h>
using namespace std;
int a[100] = {0};
void print(vector<int> *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m[i].size(); j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int cheeckList[10] = {-1};
void pathAnalysis(vector<int> *m, int src)
{
    int pa = src;
    queue<int> q;
    q.push(src);
    a[src] = 1;
    while (!q.empty())
    {
        int i = q.front();
        cout << i << " ";
        q.pop();
        for (int child : m[i])
        {
            if (!a[child])
            {
                q.push(child);
                cheeckList[child] = i;
                a[child] = 1;
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
    print(mat, n);
    cout << endl
         << endl;
    pathAnalysis(mat, 0);
    cout << endl;
    int x = 5;
    stack<int> st;
    while (x != -1)
    {
        // cout << x << " ";
        st.push(x);
        x = cheeckList[x];
    }
    cout << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}