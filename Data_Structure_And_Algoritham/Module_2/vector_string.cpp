#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<string>::iterator it;
    it = find(v.begin(), v.end(), "hello5f");
    cout << *it << endl;

    for (string y : v)
        cout << y << endl;
    return 0;
}