class Solution {
private:
        void dfs(int node,vector<vector<int>>&adj,vector<int>&visited)
        {
            visited[node]=1;
            for(int i=0;i<adj[node].size();i++)
            {
                int neighb=adj[node][i];
                if(visited[neighb]==0)
                    dfs(neighb,adj,visited);
            }
            return;
        }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n1=isConnected.size();
        vector<vector<int>>adj(n1);
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        int n=adj.size();
        vector<int>visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                dfs(i,adj,visited);
                count++;
            }
        }
        return count;
    }
};