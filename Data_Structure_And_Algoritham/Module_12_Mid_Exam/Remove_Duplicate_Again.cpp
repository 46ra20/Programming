#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
        {
            my_list.push_back(x);
        }
    }
    my_list.sort();
    my_list.unique();
    for (int val : my_list)
    {
        cout << val << " ";
    }
    return 0;
}