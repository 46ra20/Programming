#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5);
    cout << v.size() << endl;
    cout << v.size() << endl;
    // cout << v.max() << endl;
    cout << v.max_size() << endl;
    v.resize(15, 9);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}