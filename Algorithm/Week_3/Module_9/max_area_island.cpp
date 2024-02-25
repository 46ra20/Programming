class Solution
{
public:
    int m, n;
    int ans = INT_MIN;
    int count = 0;
    int checkList[55][55];

    bool valid(int si, int sj)
    {
        return si > -1 && si < m && sj > -1 && sj < n;
    }
    void bfs(int i, int j, vector<vector<int>> g)
    {
        queue<pair<int, int>> q;
        q.push({i, j});
        checkList[i][j] = 1;
        vector<pair<int, int>> side = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty())
        {
            auto pa = q.front();
            count++;
            q.pop();
            for (auto s : side)
            {
                int x = s.first + pa.first;
                int y = s.second + pa.second;
                if (valid(x, y) && !checkList[x][y] && g[x][y] == 1)
                {
                    q.push({x, y});
                    checkList[x][y] = 1;
                }
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        m = grid.size();
        n = grid[0].size();

        memset(checkList, 0, sizeof(checkList));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!checkList[i][j] && grid[i][j] == 1)
                {
                    count = 0;
                    bfs(i, j, grid);
                    ans = max(ans, count);
                }
            }
        }
        ans;
    }
};