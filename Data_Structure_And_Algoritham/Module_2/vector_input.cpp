#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.emplace(v.begin() + 1, 15);
    for (int i = 0; i <= n + 2; i++)
        cout << v[i] << " ";
    return 0;
}