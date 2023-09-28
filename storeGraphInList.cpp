#include <iostream>
#include <vector>
#include <map>

using namespace std;

void withOutWeight() {
    cout << "Enter No of nodes: ";
    int nodes;
    cin >> nodes;

    cout << "Enter No of edges: ";
    int edges;
    cin >> edges;

    vector<vector<int>> adj(nodes + 1);

    for (int i = 0; i <= nodes; i++) {
        adj[i] = vector<int>();
    }

    for (int i = 0; i < edges; i++) {
        cout << "Enter node: ";
        int u, v;
        cin >> u;

        cout << "Enter connected node: ";
        cin >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Adjacency List: " << endl;
    for (int i = 1; i <= nodes; i++) {
        cout << i << " -> ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void withWeight() {
    cout << "Enter No of nodes: ";
    int nodes;
    cin >> nodes;

    cout << "Enter No of edges: ";
    int edges;
    cin >> edges;

    map<int, map<int, int>> graph;

    for (int i = 0; i < edges; i++) {
        cout << "Enter node: ";
        int u, v;
        cin >> u;

        cout << "Enter connected node: ";
        cin >> v;

        cout << "Enter connected weight: ";
        int w;
        cin >> w;

        graph[u][v] = w;
        graph[v][u] = w;
    }

    cout << "Adjacency List with Weights: " << endl;
    for (const auto& entry : graph) {
        int u = entry.first;
        const auto& edges = entry.second;
        cout << u << " -> ";
        for (const auto& edge : edges) {
            int v = edge.first;
            int w = edge.second;
            cout << "(" << v << ", " << w << ") ";
        }
        cout << endl;
    }
}

int main() {
    // Uncomment one of the following to run the desired function
    // withOutWeight();
    withWeight();
    return 0;
}
