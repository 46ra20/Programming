#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {236, 104, 701, 0, 227, 0, 911};
    int mn = INT_MAX, pre = INT_MAX;
    for (int val : v)
    {
        mn = min(abs(pre - val), mn);
        cout << mn << " ";
        pre = val;
    }
    cout << mn << endl;
    return 0;
}