#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> a(26, 0);
    int n = s.size();
    for (char c : s)
    {
        a[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        if (a[i] != 0)
            cout << char(i + 'a') << " : " << a[i] << endl;
    return 0;
}