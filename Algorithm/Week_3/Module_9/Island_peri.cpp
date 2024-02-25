class Solution
{
public:
    int n, m;
    int ans = 0;
    int checkList[105][105];
    vector<pair<int, int>> side = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    bool valid(int i, int j)
    {
        return i > -1 && i < n && j > -1 && j < m;
    }
    void dfs(int i, int j, vector<vector<int>> *grid)
    {
        checkList[i][j] = 1;
        for (auto s : side)
        {
            int new_x = s.first;
            int new_y = s.second;
            if (grid[new_x][new_y] != 1)
            {
                ans++;
            }
            if (!checkList[new_x][new_y] && grid[new_x][new_y] == 1)
            {
                dfs(new_x, new_y, grid);
            }
        }
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        ans = 0;
        memset(checkList, 0, sizeof(checkList));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!checkList[i][j] && grid[i][j] == 1)
                {
                    dfs(i, j, grid);
                }
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int n, m;
    int ans;
    int islandPerimeter(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
            }
        }
    }
};

class Solution
{
public:
    int n, m;
    int ans;
    int checkList[105][105];
    vector<pair<int, int>> side = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    bool valid(int i, int j)
    {
        return i > -1 && i < n && j > -1 && j < m;
    }
    void dfs(int i, int j, vector<vector<int>> &g)
    {
        checkList[i][j] = 1;
        cout << i << " " << j << endl;
        for (auto s : side)
        {
            int x = i + s.first;
            int y = j + s.second;
            if (!valid(x, y) || g[x][y] != 1)
            {
                ans++;
            }
            if (valid(x, y) && !checkList[x][y] && g[x][y] == 1)
            {
                dfs(x, y, g);
            }
        }
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        ans = 0;

        memset(checkList, 0, sizeof(checkList));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!checkList[i][j] && grid[i][j] == 1)
                {
                    dfs(i, j, grid);
                }
            }
        }
        return ans;
    }
};