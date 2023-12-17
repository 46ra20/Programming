#include <bits/stdc++.h>
using namespace std;
void print_list(list<int> cur_list)
{
    cout << "L -> ";
    for (int val : cur_list)
    {
        cout << val << " ";
    }
    cout << endl
         << "R -> ";
    reverse(cur_list.begin(), cur_list.end());
    for (int val : cur_list)
    {
        cout << val << " ";
    }
    cout << endl;
    return;
}
int main()
{
    int q;
    cin >> q;
    list<int> my_list;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            my_list.push_front(v);
            print_list(my_list);
        }
        else if (x == 1)
        {
            my_list.push_back(v);
            print_list(my_list);
        }
        else if (x == 2)
        {
            if (v < my_list.size())
            {
                auto it = next(my_list.begin(), v);
                my_list.erase(it);
                print_list(my_list);
            }

            else
            {
                print_list(my_list);
            }
        }
    }
    return 0;
}