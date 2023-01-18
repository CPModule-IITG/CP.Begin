#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    // Graph representation using adjacency list
    ll n = 5; // no of vertices
    ll e = 7; // no of edges
    // using 1-based indexing thus the vertices are 1,2,3,...n
    vector<vector<ll>> adj(n+1); // declaring adjacency list

    vector<pair<ll,ll>> edges = {{1,2},{2,3},{1,4},{4,5},{3,4},{3,5},{2,5}};

    for(auto x:edges){
        ll a = x.first;
        ll b = x.second;
        adj[a].push_back(b); // adding vertex b to adjacent list of vertex a
        adj[b].push_back(a); // adding vertex a to adjacent list of vertex b
    }
    
    // vis will store if the vertex i is visited for index i
    vector<bool> vis(n+1,false);

    // this will print the sequence of vertices which our bfs functions visits
    queue<ll> q;
    q.push(1);
    vis[1] = true;
    while(!q.empty()){
        ll vertex = q.front();
        cout << vertex << " ";
        q.pop();
        for(auto child:adj[vertex]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }  
}