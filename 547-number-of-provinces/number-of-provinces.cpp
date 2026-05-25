class Solution {
private:
    int dfs_base(int node, vector<int>& ls, vector<vector<int>>& adj,
                 vector<int>& vis) {
        vis[node] = 1;
        ls.push_back(node);

        for (auto it : adj[node]) {

            if (!vis[it]) {
                dfs_base(it, ls, adj, vis);
            }
        }
        return count;
    }

public:
    int count = 0;
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n1 = isConnected.size();
        vector<vector<int>> adj(n1);
        for (int i = 0; i < isConnected.size(); i++) {
            for (int j = 0; j < isConnected[0].size(); j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int count = 0;

        // Code here
        vector<int> ls;
        int n = adj.size();
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {

                count++;
               dfs_base(i, ls, adj, vis);
            }
        }
        return count;
    }
};