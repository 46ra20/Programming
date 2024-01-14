#include <bits/stdc++.h>
using namespace std;

void inSert(vector<int> &v, int x)
{
    v.push_back(x);
    int currIdx = v.size() - 1;

    while (currIdx != 0)
    {
        int parrentIdx = (currIdx - 1) / 2;
        if (v[parrentIdx] < v[currIdx])
            swap(v[parrentIdx], v[currIdx]);
        else
            break;
        currIdx = parrentIdx;
    }
}

void deleteFromHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (1)
    {
        int l = cur * 2 + 1;
        int r = cur * 2 + 2;
        int last_vSize = v.size();
        if (l <= last_vSize && r <= last_vSize)
        {
            if (v[l] <= v[r] && v[l] > v[cur])
                swap(v[l], v[cur]), cur = l;
            else if (v[r] > v[cur])
                swap(v[r], v[cur]), cur = r;
            else
                break;
        }
        else if (l <= last_vSize)
        {
            if (v[l] < v[cur])
                swap(v[l], v[cur]), cur = l;
            else
                break;
        }
        else if (r <= last_vSize)
        {
            if (v[r] < v[cur])
                swap(v[r], v[cur]), cur = r;
            else
                break;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    vector<int> newVec;
    for (int val : v)
        inSert(newVec, val);

    deleteFromHeap(newVec);
    for (int val : newVec)
        cout << val << " ";
    cout << endl;
    deleteFromHeap(newVec);
    for (int val : newVec)
        cout << val << " ";
    cout << endl;
    deleteFromHeap(newVec);
    for (int val : newVec)
        cout << val << " ";
    return 0;
}