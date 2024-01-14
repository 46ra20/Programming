#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    pair<string, int> p[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        p[i] = (make_pair(s, x));
    }
    sort(p, p + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}