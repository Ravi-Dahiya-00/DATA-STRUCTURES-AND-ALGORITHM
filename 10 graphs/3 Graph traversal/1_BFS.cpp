#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/*
BFS is a graph traversal algorithm that explores a graph level by level.
It visits all neighbors of a node first, then moves to the next level.*/

int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<int>> adjacency(vertices);
             
    for(int i=0;i<vertices;i++){
        int u,v;
        cin>>u>>v;
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);
    }

    vector<int> visted(vertices,0);
    queue<int> q;

    int start=0;

    visted[start]=1;
    q.push(start);

    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout << node << " ";

        for (int neighbour:adjacency[node]){
            if(!visted[neighbour]){
                visted[neighbour]=1;
                q.push(neighbour);
            }
        }

    }

    return 0;
}