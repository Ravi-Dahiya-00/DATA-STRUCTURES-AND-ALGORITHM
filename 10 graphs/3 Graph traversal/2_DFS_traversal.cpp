#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// DFS starts from a node, explores one complete path deeply using recursion,
//  marks nodes visited, and backtracks when no unvisited neighbors remain.


vector<int> dfs(int node,vector<vector<int>> &adjacency,vector<int> &visited,vector<int> &lst){
    visited[node]=1;
    lst.push_back(node);

    for(int neighbour:adjacency[node]){
        if(!visited[neighbour]){
            dfs(neighbour,adjacency,visited,lst);
        }
    }

    return lst;
}
int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<int>> adjacency(vertices);
    for (int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);

    }

    vector<int> visited(vertices,0);
    vector<int> lst;

    dfs(0,adjacency,visited,lst);

    for (int i=0;i<lst.size();i++){
        cout << lst[i] << " ";
    }

    
    return 0;
}