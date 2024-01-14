#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    while (n--)
    {
        getline(cin, s);
        map<string, int> mp;

        pair<string, int> p;
        stringstream ss(s);
        int mx = INT_MIN;
        while (ss >> s)
        {
            mp[s]++;
            // cout << mp[s] << " ";
            if (mp[s] > mx)
            {
                mx = mp[s];
                p.first = s;
                p.second = mx;
            }
        }
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}