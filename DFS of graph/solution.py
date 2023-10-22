class Solution:

    def storingNodes(self, ans, vis, i, adj):
        ans.append(i)
        vis[i] = True
        for neighbor in adj[i]:
            if not vis[neighbor]:
                self.storingNodes(ans, vis, neighbor, adj)

    def dfsOfGraph(self, V, adj):
        vis = [False] * V
        ans = []
        for i in range(V):
            if not vis[i]:
                self.storingNodes(ans, vis, i, adj)
        return ans
