#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            a.push_back(x);
        else if (x > 0)
            a.push_back(1);
        else
            a.push_back(2);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}