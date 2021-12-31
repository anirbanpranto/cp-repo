#include<bits/stdc++.h>
using ll = int64_t;
 
using namespace std;
using Graph = vector<vector<int>>;

Graph g;
vector<bool> visited;


void dfs(int node){
    if(visited[node]) return;
    visited[node] = true;
    for(int neighbour:g[node]){
        dfs(neighbour);
    }
}

void solve(int kes){
    //write solution here
    int n; //number of nodes
    int m; //number of egdes
    cin>>n>>m;
    g.assign(n, vector<int>());
    visited.assign(n, false);
    //process graph here
    // g[a].push_back(b); when directed
    // g[a].push_back(b); g[b].push_back(a); //when undirected
    dfs(0); 
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    for(int i = 0; i < t; i++)
        solve(t);
}

