#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp["Hello"] = 10;
    // cout << mp["Hello"] << endl;
    // cout << mp->frist << endl;

    mp.insert({"Hello", 10});
    mp.insert({"bhuiyan", 10});
    mp.insert({"rakib", 10});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}