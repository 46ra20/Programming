#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[4] = {12, 13, 14, 15};
    // vector<int> v(a, a + 4);
    // v.insert(v.begin() + 3, 20);
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 2, v.end());
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}