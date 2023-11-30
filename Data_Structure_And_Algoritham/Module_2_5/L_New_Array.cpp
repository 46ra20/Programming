#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    vector<int> ans(b);
    // ans.insert(b.size(), 3, 5);
    for (int i = 0; i < n; i++)
        ans.push_back(a[i]);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}