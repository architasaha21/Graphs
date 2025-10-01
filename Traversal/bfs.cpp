vector<int> bfs(int v, vector<int> adj[]){
    queue<int> q;
    vector<bool> visited(v,0);
    q.push(0);
    visited[0]=1;
    vector<int> ans;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(int j=0;j<adj[node].size();j++){
            if(!visited[adj][j]){
                visited[adj[node][j]]=1;
                q.push(adj[node][j]);
            }
        }
    }
    return ans;
}