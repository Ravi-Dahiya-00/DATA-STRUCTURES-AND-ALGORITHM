#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// Undirected Graph using Adjacency Matrix
        /*
        Undirected graph
        Edge u v means u ↔ v
        Matrix update

        adj[u][v] = 1
        adj[v][u] = 1
        */


/*
4 3 
0 1 
1 2
2 3
    */

int main(){
   int vertices,edges;
   cin>>vertices>>edges;

//    rows    = vertices
// columns = vertices

    // int adjacency[vertices][vertices]={0};
    vector<vector<int>> adjacency(vertices, vector<int>(vertices, 0));


    // edges tells how many connections exist

    for (int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;          
        adjacency[u][v]=1;
        adjacency[v][u]=1;
        
    }

    /*
    Graph has vertices number of nodes
    Each node needs to be handled once
    Adjacency list or matrix is organized per vertex*/
    for (int i=0;i<vertices;i++){
        for (int j=0;j<vertices;j++){
            cout << adjacency[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}