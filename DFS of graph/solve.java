class Solution {
    // Function to return a list containing the DFS traversal of the graph.
    public ArrayList<Integer> dfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        boolean [] vis = new boolean[V];
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0; i<V; i++){
            if(vis[i] == false){
                storingNodes(ans, vis, i, adj);
            }
        }
        return ans;
    }
    
    public static void storingNodes(ArrayList<Integer> ans, boolean [] vis, int i, ArrayList<ArrayList<Integer>> adj){
        ans.add(i);
        vis[i] = true;
        for(int neighbours : adj.get(i)){
            if(vis[neighbours] == false){
                storingNodes(ans, vis, neighbour, adj);
            }
        }
    }
}
