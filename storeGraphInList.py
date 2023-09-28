def withOutWeight():
    nodes = int(input("Enter No of nodes: "))
    edges = int(input("Enter No of edges: "))

    adj = [[] for _ in range(nodes + 1)]

    for i in range(edges):
        u = int(input("Enter node: "))
        v = int(input("Enter connected node: "))

        adj[u].append(v)
        adj[v].append(u)

    print("Adjacency List:")
    for i in range(1, nodes + 1):
        print(f"{i} -> {' '.join(map(str, adj[i]))}")

def withWeight():
    nodes = int(input("Enter No of nodes: "))
    edges = int(input("Enter No of edges: "))

    graph = {}

    for i in range(edges):
        u = int(input("Enter node: "))
        v = int(input("Enter connected node: "))
        w = int(input("Enter connected weight: "))

        if u not in graph:
            graph[u] = {}
        if v not in graph:
            graph[v] = {}

        graph[u][v] = w
        graph[v][u] = w

    print("Adjacency List with Weights:")
    for u, edges in graph.items():
        print(f"{u} -> {' '.join([f'({v}, {w})' for v, w in edges.items()])}")

if __name__ == "__main__":
    # Uncomment one of the following to run the desired function
    # withOutWeight()
    withWeight()
