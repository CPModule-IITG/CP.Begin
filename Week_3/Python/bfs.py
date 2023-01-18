from queue import Queue

#  Graph representation using adjacency list
n = 5 # no of vertices
e = 7 # no of edges
# using 1-based indexing thus the vertices are 1,2,3,...n

adj = [[] for i in range(n+1)]
edges = [[1,2],[2,3],[1,4],[4,5],[3,4],[3,5],[2,5]]

for x in edges:
    adj[x[0]].append(x[1]); # adding vertex x[1] to adjacent list of vertex x[0]
    adj[x[1]].append(x[0]); # adding vertex x[0] to adjacent list of vertex x[1]

vis = [False for i in range(n+1)]
q = Queue() # A queue to store the order of vertex visit
q.put(2)
vis[2] = True

# BFS on a graph

while (q.qsize() != 0):
    vertex = q.get()
    print(vertex,end = ' ')
    for child in adj[vertex]:
        if not vis[child]:
            q.put(child)
            vis[child] = True
print()