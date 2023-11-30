#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(4, 20);
    v.insert(v.begin() + 1, 15);
    for (int val : v)
    {
        cout << val << " ";
    }
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 30);
    cout << endl
         << *it << endl;
    return 0;
}