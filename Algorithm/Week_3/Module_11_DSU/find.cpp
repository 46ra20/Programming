#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int arr[N];
int group_size[N];
int find(int node)
{
    if (arr[node] == -1)
    {
        return node;
    }
    int leader = find(arr[node]);
    arr[node] = leader;
    return leader;
}
void find_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] > group_size[leader2])
    {
        arr[leader1] = leader2;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        arr[leader2] = leader1;
        group_size[leader2] += group_size[leader1];
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
        group_size[i] = 1;
    }
    arr[0] = 4;
    arr[4] = 5;
    arr[5] = 1;
    arr[1] = 3;

    arr[9] = 8;
    arr[8] = 6;
    arr[6] = 7;

    find_union(4, 8);
    cout << find(1) << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}