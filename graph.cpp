/*
A graph is a collection of vertices (node) and edges(connections between nodes)
Undirected graphs
directed graphs

Graphs can be represented as Adjacency matrix(matrix with boolean values) or adjacency list (linked list)

Common graph algorithms
BFS,  uses queues to traverse or search in graph
DFS, uses stack to traverse or search in graph
Dijkstra's algorithm, shortest path in weighted graphs
Kruskal's algorithm,  for finding a minimum spanning tree
Topological sorting, for ordering vertices of a directed acyclic graph
Bellman-ford algorithm, shortest path that handles algorithm that handles negative weights
Floyd-Warshall algorithm, for finding all-pairs shortest paths.
*/

/*
Details:

BFS: uses to explore a graph level by level, finding the shortest path in an unweighted graph.
Steps:
    -Starts at a given node
    - Explore all its neighbors first (visiting all adjacent nodes)
    - Moves to the next level, neighbor of a  neighbor and continue until all nodes have been visited
    - Uses a queue to keep track of nodes to visit next

DFS: Explore a graph by going as deep as possible along each branch before backtracking
Steps:
    - Start at a given node(source)
    - Explore one neighbor as deep as possible
    - Once all neighbors are visited, backtrack and explore other paths
Both BFS and DFS has a time complexity of O(V+E)


Dijkstra's algorithm
it is used to find the shortest path from a source node to all other nodes in a weighted graph where all weights are non-negative
Steps:
    - Initialized all the vertices from the source to all vertices as infinity, except the source itself (0)
    - Use priority queue to explore the nearest node (with the smallest distance)
    - For each unvisited neighbor of the current node, calculate the tentative distance and update it if it's smaller than the known distance
    - Repeat the process until all nodes have been visited.


Kruskal's Algorithm (Minimum spanning tree)
This finds the minimum spanning tree for a weighted graph. The MST is a subset of edges that connects all vertices with the minimum possible total edge weight.
Step:
    - Sort all edges by weight
    - Start from the smallest edge and add it to the MST, as long as it doesn't form a cycle
    - Repeat until the MST contains V-1 edges, where V is the number of vertices.
*/

function BellmanFord(graph, V, source):
    # Step 1: Initialize distances
    distance = [infinity] * V  # Distance to all vertices is initially infinity
    distance[source] = 0       # Distance to the source is 0

    # Step 2: Relax all edges V-1 times
    for i = 1 to V-1:
        for each edge (u, v, weight) in graph:
            if distance[u] + weight < distance[v]:
                distance[v] = distance[u] + weight

    # Step 3: Check for negative weight cycles
    for each edge (u, v, weight) in graph:
        if distance[u] + weight < distance[v]:
            print("Graph contains a negative weight cycle")
            return

    # Step 4: Return the shortest distances
    return distance
