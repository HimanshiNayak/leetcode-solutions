class Solution {
public:
    vector<vector<int>> adj;
    vector<int> sum, num;
    int n;  

    void dfs(int node, int parent) {
        for (auto& it : adj[node]) {
            if (it == parent) continue;
            dfs(it, node);
            sum[node] += sum[it] + num[it];
            num[node] += num[it];
        }
        num[node] += 1;
    }

    void dfs2(int node, int parent) {
        for (auto& it : adj[node]) {
            if (it == parent) continue;
            sum[it] = sum[node] + (n - 2 * num[it]);
            dfs2(it, node);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        this->n = n;
        adj.resize(n);
        sum.assign(n, 0);
        num.assign(n, 0);

        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        dfs(0, -1);

        dfs2(0, -1);

        return sum;
    }
};
