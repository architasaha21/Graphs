//RECURSION BASED DFS

void dfs(int node, vector<int> adj[],vector<bool> visited, vector<int> ans){
    visited[node]=1;
    ans.push_back(node);
     
    for(int j=0;j<adj[node].size();j++){
        if(!visited[adj[node][j]]){
            dfs(adj[node][j],adj,visited,ans);
        }
    }
}