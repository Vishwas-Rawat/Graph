class Solution {
  public:
    vector<int> ans;
    
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        unordered_map<int, bool> visited;
        
        DFS(adj, visited, 0);
        
        return ans;
    }
    
    void DFS(vector<int> adj[], unordered_map<int, bool>& visited, int curr) {
        visited[curr] = true;
        ans.push_back(curr);
        
        for(auto i : adj[curr]) {
            if(!visited[i]) {
                DFS(adj, visited, i);
            }
        }
    }
};
