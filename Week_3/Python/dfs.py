#  Graph representation using adjacency list
n = 5 # no of vertices
e = 7 # no of edges
# using 1-based indexing thus the vertices are 1,2,3,...n

adj = [[] for i in range(n+1)]
edges = [[1,2],[2,3],[1,4],[4,5],[3,4],[3,5],[2,5]]

for x in edges:
    adj[x[0]].append(x[1]); # adding vertex x[1] to adjacent list of vertex x[0]
    adj[x[1]].append(x[0]); # adding vertex x[0] to adjacent list of vertex x[1]

# Arguments used :
# graph : Adjacency list in which you store the graph
# ver : Index of vertex on which DFS is applied
# vis : Boolean visited array which stores if a node has already been visited or not.

# DFS on a graph

def dfs(graph,ver,vis):
    vis[ver] = True 
    print(ver,end = ' ')

    # Perform the operation on the vertex here ;

    for child in graph[ver]:
        if vis[child]:
            continue
        dfs(graph,child,vis)

vis = [False for i in range(n+1)]
dfs(adj,2,vis)