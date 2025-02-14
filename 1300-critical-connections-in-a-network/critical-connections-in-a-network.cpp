class Solution {
public:
vector<int>vis,dtime,low;
vector<vector<int>>adj;
vector<vector<int>>bridges;
int time=0;

void dfs (int n , int p){
    vis[n] =1;
    dtime[n] = ++time; //discovery time is the time when the node was discovered for thr first time
    low[n] = dtime[n];//low time the on time in which that node can be reached
    for(auto &it: adj[n]){
        if(it ==p)continue;
        if(vis[it]){
            low[n] = min(low[n],low[it]); //if the neighbour is visited , and they are connected , then the low time can be even less
        }
        else{ 
            dfs(it,n); //else visit the neighbour
            low[n] = min(low[n],low[it]);
            if(low[it]>dtime[n]){
                bridges.push_back({n,it});
            }
        }

    }

}
vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
      
        adj.resize(n);
        vis.assign(n, 0);
        dtime.assign(n, 0);
        low.assign(n, 0);
        
      
        for (auto &conn : connections) {
            adj[conn[0]].push_back(conn[1]);
            adj[conn[1]].push_back(conn[0]);
        }

       
        dfs(0, -1);

        return bridges;
    }
};

// class Solution {
// public:
//     vector<int> vis, dtime, low;
//     vector<vector<int>> adj;
//     vector<vector<int>> bridges;
//     int timer = 0; // Track discovery time

//     void dfs(int n, int p) {
//         vis[n] = 1;
//         dtime[n] = low[n] = ++timer; // Set discovery and low time

//         for (auto &it : adj[n]) {
//             if (it == p) continue; // Ignore parent edge
//             if (vis[it]) {
//                 // If already visited, update low-link value
//                 low[n] = min(low[n], dtime[it]);
//             } else {
//                 dfs(it, n);
//                 low[n] = min(low[n], low[it]);

//                 // Check for bridge
//                 if (low[it] > dtime[n]) {
//                     bridges.push_back({n, it});
//                 }
//             }
//         }
//     }

