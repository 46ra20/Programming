class Solution
{
public:
    int checkList[2 * 100005];

    void bfs(vector<vector<int>> edges, int src)
    {
        queue<int> q;
        q.push(src);
        checkList[src] = 1;
        while (!q.empty())
        {
            int x = q.front();
            cout << x << " ";
            q.pop();
            for (auto child : edges[x])
            {
                if (!checkList[child])
                {
                    q.push(child);
                    checkList[child] = 1;
                }
            }
        }
    }
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        memset(checkList, 0, sizeof(checkList));
        // m=edge[0].size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(edge[i][j]==source){
        //             bfs(edges);
        //         }
        //     }
        // }
        bfs(edges, source);
        return 0;
    }
};

class Solution
{
public:
    int checkList[2000010];
    vector<int> v[2000010];
    void bfs(vector<int> *e, int src)
    {
        queue<int> q;
        q.push(src);
        checkList[src] = 1;
        while (!q.empty())
        {
            int x = q.front();
            cout << x << " = ";
            q.pop();
            for (int child : e[x])
            {
                cout << child << " ";
                if (!checkList[child])
                {
                    q.push(child);
                    checkList[child] = 1;
                }
            }
            cout << endl;
        }
    }
    void dfs(vector<int> *e, int src)
    {
        checkList[src] = 1;
        for (int child : e[src])
        {
            if (!checkList[child])
            {
                dfs(e, child);
            }
        }
    }
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        // bfs(edges,source);
        for (int i = 0; i < n; i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(v, source);
        return checkList[destination];
    }
};

class Solution
{
public:
    int checkList[200010];
    void dfs(vector<int> *ve, int src)
    {
        cout << src << " ";
        checkList[src] = 1;
        for (int child : ve[src])
        {
            if (!checkList[child])
            {
                dfs(ve, child);
            }
        }
    }
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        memset(checkList, 0, sizeof(checkList));
        vector<int> v[n];
        for (int i = 0; i < n; i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(v, source);
        return checkList[destination];
    }
};

// final
class Solution
{
public:
    int checkList[200005];
    void bfs(vector<int> *v, int src)
    {
        queue<int> q;
        q.push(src);
        checkList[src] = 1;
        while (!q.empty())
        {
            int parent = q.front();
            cout << parent << " ";
            q.pop();
            for (int child : v[parent])
            {
                if (!checkList[child])
                {
                    q.push(child);
                    checkList[child] = 1;
                }
            }
        }
    }
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        vector<int> v[n];
        memset(checkList, 0, sizeof(checkList));
        for (int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        bfs(v, source);
        return checkList[destination];
    }
};